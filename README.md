# DigiSpark Chromebook Automation
Tasks to help automate chromebook power washes, enrollment, and updates.

Required Software:

Arduino IDE 1.8.13 - [Direct](https://www.arduino.cc/en/software)


Required Hardware:

ATtiny85 General Micro USB Development Board for Arduino - [Amazon](https://www.amazon.com/AiTrip-Digispark-Kickstarter-Attiny85-Development/dp/B0836WXQQR/ref=sr_1_5?dchild=1&keywords=digispark+usb&qid=1619496257&sr=8-5)


# Setting Up Arduino IDE 1.8.13:

Download and install Arduino IDE 1.8.13
Open Arduino IDE 1.8.13
Go to File > Preferences
Next to "Additional Boards Manager URLs:" type the following without quotation marks, "http://digistump.com/package_digistump_index.json"
Click "OK"

Go to Tools > Board > Boards Manager
In the top left of the Boards Manager window, change the type to "Contributed"
Look for "Digistump AVR Boards" and click "Install"

Go to Tools > Board
Under "Digistump AVR Boards" select "Digispark (Default - 16.5mhz)"

Go to Tools > Programmer
Select "Micronucleus"
