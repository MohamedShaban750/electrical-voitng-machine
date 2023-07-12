/*
 * switch.h
 *
 * Created: 04/10/2022 11:55:49 م
 *  Author: M7med
 */ 


#ifndef SWITCH_H_
#define SWITCH_H_

void sw_init(unsigned char portname, unsigned char portnumber);
unsigned char sw_read(unsigned char portname, unsigned char portnumber);




#endif /* SWITCH_H_ */