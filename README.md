# lpc2148-keil-LED-BLINKING-using-keilv4-proteus-

GPIO Related Registers In LPC2148:
IOxPIN
This register can be used to read or write values directly to the pins. Regardless of the direction set for the particular pins. It gives the current state of GPIO pin when read.
IOxDIR
This is the GPIO direction control register. Setting a bit to ‘0’ in this register will configure the corresponding pin to be used as input while setting it to ‘1’ will configure it as output.
IOxSET
This register can be used to drive an ‘output’ configured pin to logic 1 i.e. HIGH. Writing zero does not have any effect and hence it can’t be used to drive a pin to Logic 0 i.e. LOW. For driving pins LOW IOxCLR is used which is explained as below:
IOxCLR
This register can be used to drive an ‘output’ configured pin to logic 0 i.e. LOW. Writing zero does not have any effect and hence it can’t be used to drive a pin to Logic 1

While writing an application to blink LED, we have to follow general steps:
Initialize a microcontroller system, which take care setup procedure like powering up peripherals, set clock rate etc.
Connect necessary pin using pin connect block. The purpose of pin connect block is to configure microcontroller pin to desired function. By default GPIO is enabled.
And then set or clear the bit of respective pin to turn ON & OFF LED
