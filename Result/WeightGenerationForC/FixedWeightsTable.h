/*This file is automatically generated by genWeightTable.m by Collus Wang.*/
/*Do NOT edit it manually.*/

/*Notice that the weights here have already had conjugated. i.e. waveformBf = waveformRx(Nx4)*weight(4x1); */

#ifndef FIXEDWEIGHTSTABLE_H_
#define FIXEDWEIGHTSTABLE_H_


/* Fixed Narrow Beam:*/
/*Number of Freq = 201, Number of TargetAngle =81*/
/*FreqCenter(MHz)= 5625.0:1.0:5825.0*/
/*TargetAngle(degree)= -30.00:0.75:30.00*/
/* Real part of the weights*/
extern const int16_t Tx_WBF_Table_Real[201][81][4];
/* Imag part of the weights*/
extern const int16_t Tx_WBF_Table_Imag[201][81][4];

/* Fixed Wide Beam:*/
/*Number of Freq = 201, Number of TargetAngle = 1*/
/*FreqCenter(MHz)= 5625.0:1.0:5825.0*/
/*TargetAngle(degree)= 0.00:0.00:0.00*/
/* Real part of the weights*/
extern const int16_t Tx_WBF_Wide_Table_Real[201][1][4];
/* Imag part of the weights*/
extern const int16_t Tx_WBF_Wide_Table_Imag[201][1][4];

/* Fixed CSMA Wide Beam:*/
/*Number of Freq = 201, Number of TargetAngle = 4*/
/*FreqCenter(MHz)= 5625.0:1.0:5825.0*/
/*TargetAngle(degree)= [-60~-30, -30~0, 0~+30, +30~+60]*/
/* Real part of the weights*/
extern const int16_t Tx_WBF_CSMA_Wide_Table_Real[201][4][4];
/* Imag part of the weights*/
extern const int16_t Tx_WBF_CSMA_Wide_Table_Imag[201][4][4];

/* Fixed Interference Search Beam (left):*/
/*Number of Freq = 201, Number of TargetAngle =81*/
/*FreqCenter(MHz)= 5625.0:1.0:5825.0*/
/*TargetAngle(degree)= -30.00:0.75:30.00*/
/* Real part of the weights*/
extern const int16_t IntSearch_Left_WBF_Table_Real[201][81][4];
/* Imag part of the weights*/
extern const int16_t IntSearch_Left_WBF_Table_Imag[201][81][4];

/* Fixed Interference Search Beam (right):*/
/*Number of Freq = 201, Number of TargetAngle =81*/
/*FreqCenter(MHz)= 5625.0:1.0:5825.0*/
/*TargetAngle(degree)= -30.00:0.75:30.00*/
/* Real part of the weights*/
extern const int16_t IntSearch_Right_WBF_Table_Real[201][81][4];
/* Imag part of the weights*/
extern const int16_t IntSearch_Right_WBF_Table_Imag[201][81][4];


#endif /* FIXEDWEIGHTSTABLE_H_ */
