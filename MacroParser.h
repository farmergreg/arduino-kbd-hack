#ifndef _MacroParser_h_
#define _MacroParser_h_
#include <hidboot.h>
#include "arduino-kbd-hack.h"

class MacroParser : public UsbHackingParser {   
  public:
    virtual void Parse(HID *hid, bool is_rpt_id, uint8_t len, uint8_t *buf);
};

#endif
