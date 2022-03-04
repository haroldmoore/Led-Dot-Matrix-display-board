# Led-Dot-Matrix-display-board
Example Arduino code for the Led Dot Matrix Display Board using the ATTINY3226 and the LTP-305HR
-------------------ATTINY3226 notes-----------------------
![KE6JMG](https://user-images.githubusercontent.com/91569879/156788258-2a549de1-0609-4011-9f84-bb2f4b23b346.gif)

![top](https://user-images.githubusercontent.com/91569879/156788286-8e4e96b9-b188-4252-a2c0-5b66f20cc382.jpg)
![bottom](https://user-images.githubusercontent.com/91569879/156788304-4aa12932-4c2d-40f6-a77a-2e2351574622.jpg)

Programming:

for programming use the 'jtag2updi' setup for arduino.

the serial2updi setup has never worked properly, this still should
be possible, so if anyone wants to get it working, please show me how!
the rx an tx pins are available on the top connector.

Examples:

Example1 is a master/slave program for the I2C bus, using and arduino,
nano, or uno, or etc. to control the 5x7 display as master, and the
5x7 display as slave on the I2C bus, as shown on the YOU-TUBE videos.
https://www.youtube.com/watch?v=NYhTiF-LFG8
https://www.youtube.com/watch?v=6pAvsgQvB9g


Example2 is a simpler program, maybe beginners should start here. The
5x7 display just cycles thru all the uppper case letters and numbers.


Example3 is a 'stand alone' program that uses the rx an tx pins to communicate
with the outside world, I use the 'DLP-TXRX' 
https://www.diyautotune.com/product/dlp-txrx-internal-usb-serial-adapter/
this seems expensive, might find a better place.....


WHAT STILL NEEDS TO BE DONE:

many, many things. possibly the most important would be to get 'TIL MODE' working
in the code, using the four pins: SDA, SCL, RX, an TX, all being used as INPUT pins,
same as the TIL311 uses its four pins to dsplay all the hexidecimal characters with
just a 'NIBBLE' of data input.
The reason this is so important is because the TIL311, now being extinct and very
hard to get on EBAY for a reasonable price, is that many many designs and functional
equipment that use the TIL311, making a 'TIL311 EMULATOR' would save a lot of re-design
work and cost. This would turn the lowly ATTINY3226 5x7 display driver board into a very 
popular board for BIG CORPORATIONS! :-)   $$$$

code wise, maybe the next most importat thing is to get the master/slave I2C bus working
with only the 5x7 display boards amoung them selves, as it is now another arduino, nano, uno, etc.
is needed to control the display boards.

Next would be the code as it is now, is just a simplistic MEMORY HOG! but the quickest thing
I could come up with, and the ATTINY3226 has not complained yet, but could use MUCH clean-up.

Next the characters that the ATTINY3226 can load, so far just upper-case characters and numbers
have been written up in the 'muliplex.h' 5x7 character file. (`~!@#$%^&*()_+-={}[];:'",<.>/?)
and lower case lettering needs to be added, and without code clean up this may not be possible!

Hardware wise the gerber files using the VQFN 3mm package of the ATTINY3226 need to be sent out,
I've not done this as yet, this makes the board size smaller still, and much more "fittable" into
new/old equipment designs/re-designs. 
