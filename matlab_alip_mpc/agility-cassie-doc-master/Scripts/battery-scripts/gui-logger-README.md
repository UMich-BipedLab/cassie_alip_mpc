# Battery Logger Script
This script is intended to automate the logging of battery data and check the 
status of any batteries.

## Status checking
To check the status of a battery, plug the battery into your computer with a
USB to Serial adapter and select the appropriate COM Port from the drop-down
menu. After selecting the COM Port the UI will lock up for a few seconds as it
polls the battery for data. Summary data is displayed At the top of the screen,
and more detailed data is displayed under the "Extended Status" tab. The 
"Extended Status" tab also has a button reset the BMS safeties (only for Digit
 V2 packs). 

## Logging
When the battery script is first started, it will load the log file 
```<execution-dir>/battery-logs/batter-log.csv```. If no file exists in that location,
a blank one will be created. If a file loading error is thrown at startup the file
should be checked for formatting errors. If no errors can be found, change the name
so that the program can create a new file.
 
Once the log file is loaded the Log Summary tab will display summary data from the logs:
* List of batteries that are out, along with the date they were checked out
* List of checked in batteries that are estimated to have low charge (based on
estimated rate of self discharge and state of charge at last check-in)
* List of batteries currently on the charger and the date they were put on the charger

### Checking in/out a battery
To check in or out a battery, first specify the User, battery serial number and
COM port in the top bar, then click the corresponding button on the main screen. 
Make sure to take advantage of the dropdown menus for User and Serial number so 
that the logs are consistent.
The UI will lock up for a few seconds as the battery status is read and the log 
entry is created. If everything is fine you will see the battery appear or 
disapear in the corresponding column. Depending on the current state of the 
battery you may get the following warning messages:
* If you try to move a battery to a state it is already in (e.g. check out an
already checked out battery), it will display and error and will not add a log 
entry
* If the battery state of charge is <50%, the logging system will allow you to 
check out/in the battery, but will give you a prompt to charge the battery.
* If the battery state of charge is <20%, the logging system will *not* allow you 
to check out/in the battery, and you must click the charge button and put it on 
the charger 
* If you try to ship a battery and it is not within 10% charge of the nominal 
shipping charge (30%), a message will be displayed but the battery state will
be successfully changed

### Questions/Concerns
If you have any questions about the usage of the logging system, contact Daniel 
Bennett. If you find any bugs, have feature improvement suggestions or think 
something can be improved, submit a support request. If a crash is reproduceable,
run the executable from a console and include the error message output after the
crash.

# Requirements
To run the python script (not the bundled executable) on your computer you will need the following:
* Python 3.7
* pyserial
* pyqt5

# How to build executables from python scripts:

1. Test the scripts from an IDE or Python command line
2. Open a powershell window in the folder the .py files are in
3. Make sure the pyinstaller (http://www.pyinstaller.org/) package is installed
4. Run the install script (```python install.py```)
5. The .exe file is found in the dist folder
