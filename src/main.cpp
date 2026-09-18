#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

static const uint16_t SCREEN_W = 284;
static const uint16_t SCREEN_H = 76;

void setup()
{
    Serial.begin(115200);
    delay(500);

    Serial.println();
    Serial.println("================================");
    Serial.println("FORGEUI HARDWARE LAB");
    Serial.println("ESP32-S3 + ST7789");
    Serial.println("Native: 76x284");
    Serial.println("Viewport: 284x76");
    Serial.println("SPI: 27 MHz");
    Serial.println("MOSI=11 SCLK=12 CS=8 DC=9 RST=10");
    Serial.println("BL: ACTIVE LOW / CONNECTED TO GND");
    Serial.println("================================");

    tft.init();

    // Physically proven reference behaviour.
    tft.invertDisplay(false);

    // Landscape: native 76x284 becomes 284x76.
    tft.setRotation(1);

    // Basic colour proof.
    tft.fillScreen(TFT_RED);
    delay(500);

    tft.fillScreen(TFT_GREEN);
    delay(500);

    tft.fillScreen(TFT_BLUE);
    delay(500);

    tft.fillScreen(TFT_BLACK);

    // Physical viewport border.
    tft.drawRect(
        0,
        0,
        SCREEN_W,
        SCREEN_H,
        TFT_WHITE
    );

    // ForgeUI identification.
    tft.setTextColor(TFT_CYAN, TFT_BLACK);
    tft.setTextDatum(MC_DATUM);
    tft.setTextFont(4);

    tft.drawString(
        "FORGEUI",
        SCREEN_W / 2,
        23
    );

    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextFont(2);

    tft.drawString(
        "ST7789  |  284 x 76",
        SCREEN_W / 2,
        48
    );

    tft.setTextColor(TFT_GREEN, TFT_BLACK);

    tft.drawString(
        "PHYSICAL DISPLAY PASS",
        SCREEN_W / 2,
        65
    );

    Serial.println("FORGEUI ST7789 DISPLAY INITIALIZED");
    Serial.println("PHYSICAL DISPLAY TEST RUNNING");
}

void loop()
{
    // Golden bring-up intentionally does nothing.
    // A static display makes failures deterministic.
    delay(1000);
}