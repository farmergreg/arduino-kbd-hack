#ifndef _TransmitParser_h_
#define _TransmitParser_h_

#include <hidboot.h>
#include "Chameleon.h"

class TransmitParser : public ChameleonParser {   
  public:
    virtual void Parse(HID *hid, bool is_rpt_id, uint8_t len, uint8_t *buf);
};

#endif
