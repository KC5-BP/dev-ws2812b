/*..-----------------------------------------------------------------------------------.
../ .---------------------------------------------------------------------------------. \
./´/
|x| __--""'\
|x|  ,__  -'""`;
|x| /   \  /"'  \
|x|   __// \-"-_/
|x| ´"   \  |           > Title : ws2812_strip
|x| \     |  \  _.-"',
|x| "^,-´\/\  '" ,--. \         > Src : Timers_Wait_Xms.c
|x|  \|\| | | , /    | |        >           (One of my own first c file)
|x|     '`'\|._ |   / /
|x|         '\),/  / |          > Creation: 2019.11.21
|x|           |/.-"_/           > By :  KC5-BP
|x| .__---+-_/'|--"
|x|         _| |_--,            > Description :
|x|        ',/ |   /                Declarations of RGB's ws2812b LEDs usage funct. .
|x|        /|| |  /
|x|     |\| |/ |- |
|x| .-,-/ | /  '/-"
|x| -\|/-/\/ ^,'|
|x| _-     |  |/
|x|  .  --"  /
|x| /--__,.-/
.\`\__________________________________________________________________________________/´/
..`____________________________________________________________________________________´
========================================================================================>
=======================================================================================*/
// Linker to : ..
// .. definition folder SFR (Like Port Definition "P5", "P6", TR0, etc...)
#include <c8051f020.h>
// .. created header for ws2812b functions usage.
#include "ws2812_strip.h"

//-- GLOBAL VARIABLES INIT : ----------------------------->
xdata pixel strip[MAX_LEDS] = {{0, 0, 0}, 0};   // Initialize everything to 0.

//-------------------------------------------------------------------------------------->
void pixel_Set(pixel* addressStrip, color newColor, posType position)
{   // "position" validity ..
    if(position < MAX_LEDS)
    {   // Go to the wanted LED position.
        addressStrip += position;

        // Set "color" values :
        addressStrip->colorPix = newColor;

        // Set the status to ON if color different of "black" :
        if ( (newColor.Red == BRIGHT_MIN)
                && (newColor.Green == BRIGHT_MIN)
                    && (newColor.Blue == BRIGHT_MIN) )
        {   // Complement : " == " operator not possible on a complete struct in C.
            addressStrip->status = 0;
        }
        else
        {
            addressStrip->status = 1;
        }
    }
}

void pixel_Reset(pixel* addressStrip, posType position)
{   // Var. Dec. :
    const color BLACK = {0, 0, 0};

    // "position" validity ..
    if(position < MAX_LEDS)
    {   // Go to the wanted LED position.
        addressStrip += position;
        // Set "color" values to black.
        addressStrip->colorPix = BLACK;
        // Set status to '0' (OFF).
        addressStrip->status = 0;
    }
}

color pixel_GetColor(pixel* addressStrip, posType position)
{
    return (addressStrip + position)->colorPix;
}

unsigned char pixel_GetStatus(pixel* addressStrip, posType position)
{
    return (addressStrip + position)->status;
}

void pixel_ToggleStatus(pixel* addressStrip, posType position)
{   // "position" validity ..
    if(position < MAX_LEDS)
    {   // Go to the wanted LED position.
        addressStrip += position;

        if (addressStrip->status != 0)
        {   // Set the status to OFF if status was ON.
            addressStrip->status = 0;
        }
        else
        {   // Set the status to ON if status was OFF.
            addressStrip->status = 1;
        }
    }
}

void pixel_Show(unsigned char red, unsigned char green, unsigned char blue)
{   // For the WS2812b, the order is High bit to low AND Green - Red - Blue.
    // Sending GREEN.
    SEND_COLOR_BIT(green, BIT7); SEND_COLOR_BIT(green, BIT6);
    SEND_COLOR_BIT(green, BIT5); SEND_COLOR_BIT(green, BIT4);
    SEND_COLOR_BIT(green, BIT3); SEND_COLOR_BIT(green, BIT2);
    SEND_COLOR_BIT(green, BIT1); SEND_COLOR_BIT(green, BIT0);
    // Sending RED.
    SEND_COLOR_BIT(red, BIT7); SEND_COLOR_BIT(red, BIT6);
    SEND_COLOR_BIT(red, BIT5); SEND_COLOR_BIT(red, BIT4);
    SEND_COLOR_BIT(red, BIT3); SEND_COLOR_BIT(red, BIT2);
    SEND_COLOR_BIT(red, BIT1); SEND_COLOR_BIT(red, BIT0);
    // Sending BLUE.
    SEND_COLOR_BIT(blue, BIT7); SEND_COLOR_BIT(blue, BIT6);
    SEND_COLOR_BIT(blue, BIT5); SEND_COLOR_BIT(blue, BIT4);
    SEND_COLOR_BIT(blue, BIT3); SEND_COLOR_BIT(blue, BIT2);
    SEND_COLOR_BIT(blue, BIT1); SEND_COLOR_BIT(blue, BIT0);
}

//-------------------------------------------------------------------------------------->
void strip_Show(pixel* addressStrip)
{   // Var. Dec. :
    xdata unsigned int i;

    // Disable Timer to avoid interrupting Sending "Packets" :
    TR0 = 0;
    for(i = 0; i < MAX_LEDS; i++)
    {
        if(addressStrip->status != 0)
        {
            pixel_Show(addressStrip->colorPix.Red, addressStrip->colorPix.Green, \
                        addressStrip->colorPix.Blue);
        }
        else
        {
            pixel_Show(BRIGHT_MIN, BRIGHT_MIN, BRIGHT_MIN);
        }
        addressStrip++; // Increase address for next position changes ..
    }
    // Enable / Re-activate Timer after "Packets" Sent :
    TR0 = 1;
}

void strip_Off(pixel* addressStrip)
{   // Var. Dec. :
    unsigned int i;

    for(i = 0; i < MAX_LEDS; i++)
    {	// Clear ALL color at the original address ...
        pixel_Reset(addressStrip, i);
    }
    strip_Show(addressStrip);
}

void strip_ResetStatus(pixel* addressStrip)
{   // Var. Dec. :
    unsigned int i;

    for(i = 0; i < MAX_LEDS; i++)
    {   // Clear Status to keep color in the original address ...
        addressStrip->status = 0;
        addressStrip++; // Increase address for clearing next position.
    }
}

void strip_Inverter(pixel* addressStrip)
{   // Var. Dec. :
    unsigned int i; // LED Position for filling Board of strip.
    color tmpColor; // Color recovered to invert the actual strip's color.

    for(i = 0; i < MAX_LEDS; i++)   // First loop to find the first LED alight that
    {                                   // will give the colour to set for the
        if(pixel_GetStatus(addressStrip, i) != 0)       // reversed status ..
        {   // color found => recovering and ending loop.
            tmpColor = pixel_GetColor(addressStrip, i);
            break;
        }
    }
    for(i = 0; i < MAX_LEDS; i++)   // Second loop to toggle LEDs status.
    {
        if(pixel_GetStatus(addressStrip, i) == 0)
        {
            pixel_Set(addressStrip, tmpColor, i);
        }
        else
        {
            pixel_Reset(addressStrip, i);
        }
    }
}

void strip_ChainedLeds(pixel* addressStrip, color newColor, \
                                               posType begin, posType end)
{	// Var. Dec. :
	unsigned int i; // LED Position for filling Board of strip.
	
	for(i = 0; i < MAX_LEDS; i++)
	{
		if((i >= begin) && (i <= end))
		{
		    pixel_Set(addressStrip, newColor, i);
		}
		else { /* Before first use, don't forget to clear strip's status. */ }
	}
}