/* ********************************** */
/* Author : Yousif Asaad Albedreshiny */
/* Description : Bit math lib         */
/* Date : 26/7/2019                   */
/* version : 0.2v                     */
/* ********************************** */
#ifndef BIT_MATH_h
#define BIT_MATH_h
#define SET_BIT(Reg,Bit) (Reg|=(1<<Bit))
#define CLEAR_BIT(Reg,Bit) (Reg&=~(1<<Bit))
#define TOGEL_BIT(Reg,Bit) (Reg^=(1<<Bit))
#define GET_BIT(Reg,Bit) ((Reg>>Bit)&(0x01))
#define CONC(b7,b6,b5,b4,b3,b2,b1,b0)    	CONC_help(b7,b6,b5,b4,b3,b2,b1,b0)
#define CONC_help(b7,b6,b5,b4,b3,b2,b1,b0) 0b##b7##b6##b5##b4##b3##b2##b1##b0
#endif
