#include "MainParser.h"
#include "StaticLayoutParser.h"
#include "MacroParser.h"
#include "TransmitParser.h"
#include "LogParser.h"

void MainParser::Parse(HID *hid, bool is_rpt_id, uint8_t len, uint8_t *buf) {

  StaticLayoutParser slp;
  MacroParser mp;
  TransmitParser tp;
  LogParser lp;
  ChameleonParser *p[] = { &slp
                           , &mp
                           , &tp
                           //, &lp
                         };

  for (int i = 0; i < sizeof(p) / sizeof(ChameleonParser); i++) {
    p[i]->Parse(hid, is_rpt_id, len, buf);
  }
}
