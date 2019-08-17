/* ********************************** */
/* Author : Yousif Asaad Albedreshiny */
/* Description : Program file DIO     */
/* Date : 17/8/2019                   */
/* version : 01.0 v                   */
/* ********************************** */
#include "STD_types.h"
#include "Bit_math.h"

#include "DIO_int.h"
#include "DIO_cfg.h"
#include "DIO_priv.h"

/***************************************/
/**! comment : initialization function */
/***************************************/
void DIO_vidInit(void){
	DDRA = CONC (DIO_u8PIN_DIR_7,DIO_u8PIN_DIR_6,DIO_u8PIN_DIR_5,DIO_u8PIN_DIR_4,DIO_u8PIN_DIR_3,DIO_u8PIN_DIR_2,DIO_u8PIN_DIR_1,DIO_u8PIN_DIR_0);
	DDRB = CONC (DIO_u8PIN_DIR_15,DIO_u8PIN_DIR_14,DIO_u8PIN_DIR_13,DIO_u8PIN_DIR_12,DIO_u8PIN_DIR_11,DIO_u8PIN_DIR_10,DIO_u8PIN_DIR_9,DIO_u8PIN_DIR_8);
	DDRC = CONC (DIO_u8PIN_DIR_23,DIO_u8PIN_DIR_22,DIO_u8PIN_DIR_21,DIO_u8PIN_DIR_20,DIO_u8PIN_DIR_19,DIO_u8PIN_DIR_18,DIO_u8PIN_DIR_17,DIO_u8PIN_DIR_16);
	DDRD = CONC (DIO_u8PIN_DIR_31,DIO_u8PIN_DIR_30,DIO_u8PIN_DIR_29,DIO_u8PIN_DIR_28,DIO_u8PIN_DIR_27,DIO_u8PIN_DIR_26,DIO_u8PIN_DIR_25,DIO_u8PIN_DIR_24);
}

/***************************************/
/* inputs :                            */
/*          u8ValueCpy : DIO_u8HIGH    */     
/*		                 DIO_u8LOW     */
/*          u8PinNbCpy : DIO_u8PIN_x   */
/*                   x rang [0 .. 31 ] */
/***************************************/
void DIO_vidsetpinValue (u8 u8PinNbCpy , u8 u8ValueCpy ){
	if (u8PinNbCpy <= DIO_u8PIN_7){
		//port A
		if (u8ValueCpy == DIO_u8HIGH){
			SET_BIT(PORTA,u8PinNbCpy);
		}
		else {
			CLEAR_BIT(PORTA,u8PinNbCpy);
		}
	}
	else if (u8PinNbCpy >=DIO_u8PIN_8 && u8PinNbCpy <= DIO_u8PIN_15){
		//port B
		u8PinNbCpy = u8PinNbCpy % 8;
		if (u8ValueCpy == DIO_u8HIGH){
			SET_BIT(PORTB,u8PinNbCpy);
		}
		else {
			CLEAR_BIT(PORTB,u8PinNbCpy);
		}
	}
	else if (u8PinNbCpy >=DIO_u8PIN_16 && u8PinNbCpy <= DIO_u8PIN_23){
		//port C
		u8PinNbCpy = u8PinNbCpy % 8;
		if (u8ValueCpy == DIO_u8HIGH){
			SET_BIT(PORTC,u8PinNbCpy);
		}
		else {
			CLEAR_BIT(PORTC,u8PinNbCpy);
		}
	}
	else if (u8PinNbCpy >=DIO_u8PIN_24 && u8PinNbCpy <= DIO_u8PIN_31){
		//port D
		u8PinNbCpy = u8PinNbCpy % 8;
		if (u8ValueCpy == DIO_u8HIGH){
			SET_BIT(PORTD,u8PinNbCpy);
		}
		else {
			CLEAR_BIT(PORTD,u8PinNbCpy);
		}
	}
	else {
		// error status
	}
}

/***************************************/
/*          u8PinNbCpy : DIO_u8PIN_x   */
/*                     x rang [0..31 ] */
/***************************************/
u8 DIO_u8GetPinValue(u8 u8PinNbCpy){
	u8 u8pinValueLoc = 0xff;
	if (u8PinNbCpy <= DIO_u8PIN_7){
		//pin A
			u8pinValueLoc = GET_BIT(PINA,u8PinNbCpy);
	}
	else if (u8PinNbCpy >=DIO_u8PIN_8 && u8PinNbCpy <= DIO_u8PIN_15){
		//pin B
		u8PinNbCpy = u8PinNbCpy % 8;
			u8pinValueLoc = GET_BIT(PINB,u8PinNbCpy);	
	}
	else if (u8PinNbCpy >=DIO_u8PIN_16 && u8PinNbCpy <= DIO_u8PIN_23){
		//pin C
		u8PinNbCpy = u8PinNbCpy % 8;
			u8pinValueLoc = GET_BIT(PINC,u8PinNbCpy);
	}
	else if (u8PinNbCpy >=DIO_u8PIN_24 && u8PinNbCpy <= DIO_u8PIN_31){
		//pin D
		u8PinNbCpy = u8PinNbCpy % 8;
			u8pinValueLoc = GET_BIT(PIND,u8PinNbCpy);
	}
	else {
		// error status
	} 
	return u8pinValueLoc ;
}

#ifndef DIO_PRG_H
#define DIO_PRG_H


#endif