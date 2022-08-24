/****************************************/
/*	Author	: Mina Tarek Abdelsayed		*/
/*	Version	: V01						*/
/*	Date	: 22 August 2022			*/
/****************************************/


#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(VAR,BIT)			VAR|=	(1	<< (BIT))
#define CLR_BIT(VAR,BIT)			VAR&=	~(1	<< (BIT))
#define GET_BIT(VAR,BIT)			((VAR	>> BIT)   &1)
#define TOG_BIT(VAR,BIT)			VAR^=	(1	<< (BIT))
#define MUL(VAR1, VAR2) 			((VAR1)*(VAR2))

#endif