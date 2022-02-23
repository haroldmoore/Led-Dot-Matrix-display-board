-------------------Example4 notes-----------------------

this example uses one matrix display board to control
two others as slaves on address 3,4. And itself.

4.7k tie up resistors are needed on the I2C lines
SDA an SCL, also the wire command: 'Wire.swap(0);' 

also in the trigger statements as normally would
be 'Wire.write(A);' must be changed to 'Wire.write('A');'  
