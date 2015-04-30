#ifndef _LogParser_h_
#define _LogParser_h_

#include <SPI.h>
#include <hidboot.h>
#include "arduino-kbd-hack.h"

class LogParser : public UsbHackingParser {   
  public:
    virtual void Parse(HID *hid, bool is_rpt_id, uint8_t len, uint8_t *buf);
};


#endif
