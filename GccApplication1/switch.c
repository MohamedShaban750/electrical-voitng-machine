/*
 * switch.c
 *
 * Created: 04/10/2022 11:56:18 م
 *  Author: M7med
 */ 
#include "DIO.h"

void sw_init(unsigned char portname, unsigned char portnumber)
{
	DIO_VsetPINDir(portname, portnumber, 0);
	//DIO_vwrite(portname, portnumber, 1);  //condition 3 to turn on internal pull up
}

unsigned char sw_read(unsigned char portname, unsigned char portnumber)
{
	return DIO_u8read(portname, portnumber);
}