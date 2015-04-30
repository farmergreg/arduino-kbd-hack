#ifndef _StaticLayoutParser_h_
#define _StaticLayoutParser_h_

#include <hidboot.h>
#include "Chameleon.h"

class StaticLayoutParser : public ChameleonParser {   
  public:
    virtual void Parse(HID *hid, bool is_rpt_id, uint8_t len, uint8_t *buf);
};

#endif

