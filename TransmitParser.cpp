#include "TransmitParser.h"

void TransmitParser::Parse(HID *hid, bool is_rpt_id, uint8_t len, uint8_t *buf) {
  HID_SendReport(2, buf, len);
}

