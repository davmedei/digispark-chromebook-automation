# DigiSpark Chromebook Automation
Tasks to help automate chromebook power washes, enrollment, and updates.

Required Software:

* Arduino IDE 1.8.13 - [Direct](https://www.arduino.cc/en/software)


Required Hardware:

* ATtiny85 General Micro USB Development Board for Arduino - [Amazon](https://www.amazon.com/AiTrip-Digispark-Kickstarter-Attiny85-Development/dp/B0836WXQQR/ref=sr_1_5?dchild=1&keywords=digispark+usb&qid=1619496257&sr=8-5)

Tested Devices:

* Dell Chromebook 3100
* HP Chromebook 14 G4
* HP Chromebook 14 G5

# Setting Up Arduino IDE 1.8.13:

1. Download and install Arduino IDE 1.8.13
2. Open Arduino IDE 1.8.13
3. Go to File > Preferences <br /><img src="images/setting_up_arduino/3.png"   width="500">
4. Next to "Additional Boards Manager URLs:" type the following without quotation marks, "http://digistump.com/package_digistump_index.json" <br /><img src="images/setting_up_arduino/4.png"   width="500">
5. Click "OK"
6. Go to Tools > Board > Boards Manager
7. In the top left of the Boards Manager window, change the type to "Contributed"
8. Look for "Digistump AVR Boards" and click "Install" <br /><img src="images/setting_up_arduino/8.png"   width="500">
9. Go to Tools > Board
10. Under "Digistump AVR Boards" select "Digispark (Default - 16.5mhz)" <br /><img src="images/setting_up_arduino/10.png"   width="500">
11. Go to Tools > Programmer
12. Select "Micronucleus" <br /><img src="images/setting_up_arduino/12.png"   width="500">

# Verify And Upload Sketch:
1. Open the sketch file for the task that you want to upload to the DigiSpark USB. <br /><img src="images/verify_and_upload/1.png"   width="500">
2. Click "Verify" to check the code for errors. The console will display errors if any. Errors will need to be corrected before proceeding, otherwise the upload process will fail. <br /><img src="images/verify_and_upload/2.png"   width="500"> <br /><img src="images/verify_and_upload/2.1.png"   width="500">
3. Click "Upload" to being the upload process. Once the text in the console says "Plug in device now... (will timeout in 60 seconds)" plug in your DigiSpark USB. <br /><img src="images/verify_and_upload/3.png"   width="500"> <br /><img src="images/verify_and_upload/3.1.png"   width="500">
4. When the console outputs "Micronucleus done. Thank you!" you may remove the DigiSpark USB. <br /><img src="images/verify_and_upload/4.png"   width="500">
