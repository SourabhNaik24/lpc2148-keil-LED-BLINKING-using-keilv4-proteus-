#include<lpc214x.h>

void delay_ms(unsigned int count)
{
	unsigned int i=0,j=0;
	for(j=0;j<count;j++)
	{
		for(i=0;i<3000;i++);
	}
}
			 // LED BLINK OF P0.0 TO P0.7 //
int main()
{
	PINSEL0=0x0000;	  // CONFIGURE GPIO //
	IODIR0=0xFF;	  // TO MAKE PINS AS OUTPUT PINS //
	while(1)
	{
		IOSET0=0xFF;   // LOGIC HIGH OR LED ON //
		delay_ms(100);
		IOCLR0=0xFF;   // LOGIC LOW OR LED OFF //
		delay_ms(100);
	}
}