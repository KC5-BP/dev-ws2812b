/*..-----------------------------------------------------------------------------------.
../ .---------------------------------------------------------------------------------. \
./´/
|x| __--""'\
|x|  ,__  -'""`;
|x| /   \  /"'  \
|x|   __// \-"-_/
|x| ´"   \  |           > Title : kc5_bp_matrix_alpha_big
|x| \     |  \  _.-"',
|x| "^,-´\/\  '" ,--. \         > Src : Timers_Wait_Xms.h
|x|  \|\| | | , /    | |        >           (One of my own first c file)
|x|     '`'\|._ |   / /
|x|         '\),/  / |          > Creation: 2019.11.21
|x|           |/.-"_/           > By :  KC5-BP
|x| .__---+-_/'|--"
|x|         _| |_--,            > Description :
|x|        ',/ |   /                Letters declaration for Matrix display.
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

// Header's Definition :
// Beginning of definition...
#ifndef  __kc5_bp_matrix_alpha_big__
#define  __kc5_bp_matrix_alpha_big__

//===================================================
//================================\Header's_Definitions/==================================>
#ifndef CHAR_DIM_3X14
#define CHAR_DIM_3X14 42
#endif
#ifndef CHAR_DIM_4X14
#define CHAR_DIM_4X14 56
#endif
#ifndef CHAR_DIM_5X14
#define CHAR_DIM_5X14 70
#endif
//-- GLOBAL CHARACTERS ARRAYS	: ------------------------>
// ALPHABET'S LETTERS : Char Dim. : 3x14 : --------------->
// Exceptions : ------------------------------------------>
// M-V-W : Char Dim. : 5x14 : ---------------------------->
// G-N-Q-X-Z : Char Dim. : 4x14 : ------------------------>
extern xdata char cBoard_A_Big[CHAR_DIM_3X14] = {\
1, 1, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 1, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1};
//-------------------------->
extern xdata char cBoard_B_Big[CHAR_DIM_3X14] = {\
1, 1, 0,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 1, 0,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 1, 1};
//-------------------------->
extern xdata char cBoard_C_Big[CHAR_DIM_3X14] = {\
1, 1, 1,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 1, 1};
//-------------------------->
extern xdata char cBoard_D_Big[CHAR_DIM_3X14] = {\
1, 1, 0,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 1, 0};
//-------------------------->
extern xdata char cBoard_E_Big[CHAR_DIM_3X14] = {\
1, 1, 1,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 1, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 1, 1};
//-------------------------->
extern xdata char cBoard_F_Big[CHAR_DIM_3X14] = {\
1, 1, 1,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 1, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0};
//-------------------------->
extern xdata char cBoard_G_Big[CHAR_DIM_4X14] = {\
0, 1, 1, 0,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 0,\
1, 0, 0, 0,\
1, 0, 0, 0,\
1, 0, 0, 0,\
1, 0, 0, 0,\
1, 0, 1, 1,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 1,\
0, 1, 1, 0};
//-------------------------->
extern xdata char cBoard_H_Big[CHAR_DIM_3X14] = {\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 1, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1};
//-------------------------->
extern xdata char cBoard_I_Big[CHAR_DIM_3X14] = {\
1, 1, 1,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
1, 1, 1};
//-------------------------->
extern xdata char cBoard_J_Big[CHAR_DIM_3X14] = {\
1, 1, 1,\
0, 0, 1,\
0, 0, 1,\
0, 0, 1,\
0, 0, 1,\
0, 0, 1,\
0, 0, 1,\
0, 0, 1,\
0, 0, 1,\
0, 0, 1,\
0, 0, 1,\
0, 0, 1,\
1, 0, 1,\
0, 1, 1};
//-------------------------->
extern xdata char cBoard_K_Big[CHAR_DIM_3X14] = {\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 1, 0,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1};
//-------------------------->
extern xdata char cBoard_L_Big[CHAR_DIM_3X14] = {\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 1, 0};
//-------------------------->
extern xdata char cBoard_M_Big[CHAR_DIM_5X14] = {\
1, 0, 0, 0, 1,\
1, 1, 0, 1, 1,\
1, 1, 0, 1, 1,\
1, 1, 0, 1, 1,\
1, 0, 1, 0, 1,\
1, 0, 1, 0, 1,\
1, 0, 1, 0, 1,\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1};
//-------------------------->
extern xdata char cBoard_N_Big[CHAR_DIM_4X14] = {\
1, 0, 0, 1,\
1, 1, 0, 1,\
1, 1, 0, 1,\
1, 1, 0, 1,\
1, 1, 0, 1,\
1, 1, 0, 1,\
1, 1, 0, 1,\
1, 0, 1, 1,\
1, 0, 1, 1,\
1, 0, 1, 1,\
1, 0, 1, 1,\
1, 0, 1, 1,\
1, 0, 1, 1,\
1, 0, 0, 1};
//-------------------------->
extern xdata char cBoard_O_Big[CHAR_DIM_3X14] = {\
0, 1, 0,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
0, 1, 0};
//-------------------------->
extern xdata char cBoard_P_Big[CHAR_DIM_3X14] = {\
1, 1, 0,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 1, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0,\
1, 0, 0};
//-------------------------->
extern xdata char cBoard_Q_Big[CHAR_DIM_4X14] = {\
0, 1, 1, 0,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 1, 0, 1,\
1, 0, 1, 1,\
1, 0, 1, 0,\
0, 1, 0, 1};
//-------------------------->
extern xdata char cBoard_R_Big[CHAR_DIM_3X14] = {\
1, 1, 0,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 1, 0,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1};
//-------------------------->
extern xdata char cBoard_S_Big[CHAR_DIM_3X14] = {\
0, 1, 0,\
1, 0, 1,\
1, 0, 1,\
1, 0, 0,\
0, 1, 0,\
0, 0, 1,\
0, 0, 1,\
0, 0, 1,\
0, 0, 1,\
0, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
0, 1, 0};
//-------------------------->
extern xdata char cBoard_T_Big[CHAR_DIM_3X14] = {\
1, 1, 1,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0,\
0, 1, 0};
//-------------------------->
extern xdata char cBoard_U_Big[CHAR_DIM_3X14] = {\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 1, 1};
//-------------------------->
extern xdata char cBoard_V_Big[CHAR_DIM_5X14] = {\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1,\
0, 1, 0, 1, 0,\
0, 1, 0, 1, 0,\
0, 1, 0, 1, 0,\
0, 1, 0, 1, 0,\
0, 1, 0, 1, 0,\
0, 1, 0, 1, 0,\
0, 1, 0, 1, 0,\
0, 0, 1, 0, 0};
//-------------------------->
extern xdata char cBoard_W_Big[CHAR_DIM_5X14] = {\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1,\
1, 0, 0, 0, 1,\
1, 0, 1, 0, 1,\
1, 0, 1, 0, 1,\
1, 0, 1, 0, 1,\
1, 1, 0, 1, 1,\
1, 1, 0, 1, 1,\
1, 1, 0, 1, 1,\
1, 1, 0, 1, 1,\
1, 0, 0, 0, 1};
//-------------------------->
extern xdata char cBoard_X_Big[CHAR_DIM_4X14] = {\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 1,\
0, 1, 1, 0,\
0, 1, 1, 0,\
0, 1, 1, 0,\
0, 1, 1, 0,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 1,\
1, 0, 0, 1};
//-------------------------->
extern xdata char cBoard_Y_Big[CHAR_DIM_3X14] = {\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 0, 1,\
1, 1, 1,\
0, 0, 1,\
0, 0, 1,\
0, 0, 1,\
0, 0, 1,\
0, 0, 1,\
0, 1, 0,\
0, 1, 0,\
1, 0, 0,\
1, 0, 0};
//-------------------------->
extern xdata char cBoard_Z_Big[CHAR_DIM_4X14] = {\
1, 1, 1, 1,\
0, 0, 0, 1,\
0, 0, 0, 1,\
0, 0, 1, 0,\
0, 0, 1, 0,\
0, 0, 1, 0,\
0, 0, 1, 0,\
0, 1, 0, 0,\
0, 1, 0, 0,\
0, 1, 0, 0,\
0, 1, 0, 0,\
1, 0, 0, 0,\
1, 0, 0, 0,\
1, 1, 1, 1};

#endif  // End of definition.