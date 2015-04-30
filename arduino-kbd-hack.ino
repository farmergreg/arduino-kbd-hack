#define __PROG_TYPES_COMPAT__
#include <avr/pgmspace.h>
#include <SPI.h>
#include <hidboot.h>
#include <usbhub.h>

#include "arduino-kbd-hack.h"
#include "MainParser.h"
#include "StaticLayoutParser.h"
#include "TransmitParser.h"
#include "LogParser.h"

USB usb;
HIDBoot<HID_PROTOCOL_KEYBOARD>    HidKeyboard(&usb);
MainParser parser;

void setup()
{ 
 /* 
  if (usb.Init() == -1)
    d.log("OSC did not start.");
  */
  usb.Init();
  delay(200);
  HidKeyboard.SetReportParser(0, (HIDReportParser*)&parser);
}

void loop()
{
  usb.Task();
}

