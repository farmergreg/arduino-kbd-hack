#include "LogParser.h"

void LogParser::Parse(HID *hid, bool is_rpt_id, uint8_t len, uint8_t *buf) {
  if (!Serial)
    Serial.begin(115200);

  while (!Serial);
  
  KBDINFO *kbd = (KBDINFO*)buf;
  
  if(kbd->bmLeftShift) Serial.print("LS");

  for(int i=0;i<6;i++){
    Serial.print("0x");
    Serial.print(kbd->Keys[i], HEX);
    Serial.print(", ");
  }
  Serial.println();
}

