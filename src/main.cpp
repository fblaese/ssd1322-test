#include <Arduino.h>
#include <U8g2lib.h>

//U8G2_SSD1322_NHD_256X64_1_3W_SW_SPI u8g2(U8G2_R0, 18, 23, 5, 22);
U8G2_SSD1322_NHD_256X64_1_3W_HW_SPI u8g2(U8G2_R0, 5, 22);

void setup() {
  Serial.begin(115200);

  u8g2.begin();
}

void loop() {
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_inb63_mn);
    u8g2.drawStr(0,64,"0123456");
  } while ( u8g2.nextPage() );

  delay(1000);
}

//SSD1322
