#ifndef _Chameleon_h_
#define _Chameleon_h_

#include <hidboot.h>

class UsbHackingParser {   
  public:
    virtual void Parse(HID *hid, bool is_rpt_id, uint8_t len, uint8_t *buf);
};

#endif

