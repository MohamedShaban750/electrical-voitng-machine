/*
 * GccApplication1.c
 *
 * Created: 27/09/2022 12:31:09 
 * Author : M7med
 */ 
#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "lcd.h"
#include "switch.h"

unsigned char counter1=0;
unsigned char counter2=0;
unsigned char counter3=0;
unsigned char counter4=0;

int main(void)
{
	lcd_init();
	sw_init('B', 3);
	sw_init('B', 4);
	sw_init('B', 5);
	sw_init('B', 6);
	sw_init('B', 7);
	
	lcd_send_string("A=0");
	lcd_move_cursor(1, 12);
	lcd_send_string("B=0");
	lcd_move_cursor(2, 1);
	lcd_send_string("C=0");
	lcd_move_cursor(2, 12);
	lcd_send_string("D=0");
	
	while (1)
	{
		if (sw_read('B',3)==1)
		{
			counter1++;
			lcd_move_cursor(1,3);
			if (counter1<10)
			{
			lcd_send_char(counter1+48);
			}
			else if (counter1<100)
			{
			lcd_send_char(counter1/10+48);
			lcd_send_char(counter1%10+48);
			}
		}
		
		else if (sw_read('B',4)==1)
		{
			counter2++;
			lcd_move_cursor(1,14);
			if (counter2<10)
			{
				lcd_send_char(counter2+48);
			}
			else if (counter2<100)
			{
				lcd_send_char(counter2/10+48);
				lcd_send_char(counter2%10+48);
			}
		}
		
		else if (sw_read('B',5)==1)
		{
			counter3++;
			lcd_move_cursor(2,3);
			if (counter3<10)
			{
				lcd_send_char(counter3+48);
			}
			else if (counter3<100)
			{
				lcd_send_char(counter3/10+48);
				lcd_send_char(counter3%10+48);
			}
		}
		
		else if (sw_read('B',6)==1)
		{
			counter4++;
			lcd_move_cursor(2,14);
			if (counter4<10)
			{
				lcd_send_char(counter4+48);
			}
			else if (counter4<100)
			{
				lcd_send_char(counter4/10+48);
				lcd_send_char(counter4%10+48);
			}
		}
		
		else if (sw_read('B',7)==1)
		{
			counter1=counter2=counter3=counter4=0;
			lcd_send_cmd(CLR_SCREEN);
			lcd_send_string("A=0");
			lcd_move_cursor(1, 12);
			lcd_send_string("B=0");
			lcd_move_cursor(2, 1);
			lcd_send_string("C=0");
			lcd_move_cursor(2, 12);
			lcd_send_string("D=0");	
		}
		
		
		_delay_ms(200);
	}
}


