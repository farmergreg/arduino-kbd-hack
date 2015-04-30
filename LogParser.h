#ifndef _LogParser_h_
#define _LogParser_h_

#include <SPI.h>
#include <hidboot.h>
#include "Chameleon.h"

class LogParser : public ChameleonParser {   
  public:
    virtual void Parse(HID *hid, bool is_rpt_id, uint8_t len, uint8_t *buf);
};


#endif
