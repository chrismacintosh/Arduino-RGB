#####################################################################################################
#                                                                                                   #
#                                     EASY RGB LED'S WITH OOP                                       #
#                                                                                                   #
#####################################################################################################

Check out the examples folder for basic use examples.

######################################
#The following methods are available:#
######################################

.red<br>
.green<br>
.blue<br>
.custom(r,g,b); where rgb are all values from 0 to 255.<br>
.blink(int interval); where the interval is a value in MS.<br>
.random();<br>
.off();<br>

########################
#Why this benefits you:#
########################
If you want to blink your status LED while you're doing something (blink the status LED while an alarm is going off, 
or another operation is occuring), then you cannot use delay(interval). Using delay inherently will cease processing of
hex instructions apart from calculating the delay.

The .blink method will allow you to blink the LED while other things are going on. It saves the time in milliseconds
(using millis()) and while you're loop is running you will be able to blink the LED under whatever conditions you'd like.

########################
#What the future holds:#
########################
I'm going to slowly add a ridiculous amount of prenamed colors (.magenta, .violet, I mean, there will be a ton of options).
Some other interesting things to come as well.
