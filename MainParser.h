#ifndef _MainParser_h_
#define _MainParser_h_

#include <hidboot.h>
#include "arduino-kbd-hack.h"

class MainParser : public UsbHackingParser {   
  public:
    virtual void Parse(HID *hid, bool is_rpt_id, uint8_t len, uint8_t *buf);
};

#endif

