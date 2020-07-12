#include <Arduino.h>
#include <SPI.h>
#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip

TFT_eSPI tft = TFT_eSPI(); // Invoke library, pins defined in User_Setup.h

void setup()
{
    Serial.begin(115200);

    tft.init();
    tft.setRotation(1);
    tft.setSwapBytes(true);
}

void loop()
{
    tft.setTextColor(TFT_SKYBLUE, TFT_BLACK);
    tft.setTextDatum(MC_DATUM);
    tft.drawString("Hello world", tft.width() / 2, tft.height() / 2, 4);
}