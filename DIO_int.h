/* ********************************** */
/* Author : Yousif Asaad Albedreshiny */
/* Description : Interface file DIO   */
/* Date : 17/8/2019                   */
/* version : 01.0 v                   */
/* ********************************** */
#ifndef DIO_INT_H
#define DIO_INT_H

#define DIO_u8HIGH       1
#define DIO_u8LOW        0

#define DIO_u8PIN_0      0
#define DIO_u8PIN_1      1
#define DIO_u8PIN_2      2
#define DIO_u8PIN_3      3
#define DIO_u8PIN_4      4
#define DIO_u8PIN_5      5
#define DIO_u8PIN_6      6
#define DIO_u8PIN_7      7
#define DIO_u8PIN_8      8
#define DIO_u8PIN_9      9
#define DIO_u8PIN_10     10
#define DIO_u8PIN_11     11
#define DIO_u8PIN_12     12
#define DIO_u8PIN_13     13
#define DIO_u8PIN_14     14
#define DIO_u8PIN_15     15
#define DIO_u8PIN_16     16
#define DIO_u8PIN_17     17
#define DIO_u8PIN_18     18
#define DIO_u8PIN_19     19
#define DIO_u8PIN_20     20
#define DIO_u8PIN_21     21
#define DIO_u8PIN_22     22
#define DIO_u8PIN_23     23
#define DIO_u8PIN_24     24
#define DIO_u8PIN_25     25
#define DIO_u8PIN_26     26
#define DIO_u8PIN_27     27
#define DIO_u8PIN_28     28
#define DIO_u8PIN_29     29
#define DIO_u8PIN_30     30
#define DIO_u8PIN_31     31

/***************************************/
/**! comment : initialization function */
/***************************************/
void DIO_vidInit(void);

/***************************************/
/* inputs :                            */
/*          u8ValueCpy : DIO_u8HIGH    */     
/*		                 DIO_u8LOW     */
/*          u8PinNbCpy : DIO_u8PIN_x   */
/*                     x rang [0..31 ] */
/***************************************/
void DIO_vidsetpinValue (u8 u8PinNbCpy , u8 u8ValueCpy );

/***************************************/
/*          u8PinNbCpy : DIO_u8PIN_x   */
/*                     x rang [0..31 ] */
/***************************************/
u8 DIO_u8GetPinValue(u8 u8PinNbCpy);

#endif