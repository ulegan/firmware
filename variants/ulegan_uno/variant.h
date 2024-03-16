// the default ESP32 Pin of 15 is the Oled SCL, set to 36 and 37 and works fine.
// Tested on Neo6m module.
#undef GPS_RX_PIN
#undef GPS_TX_PIN
#define GPS_RX_PIN 16
#define GPS_TX_PIN 17

#define I2C_SDA 21 // I2C pins for this board
#define I2C_SCL 22

#define USE_RF95
#define LORA_SCK 18
#define LORA_MISO 19
#define LORA_MOSI 23
#define LORA_CS 5

#define LORA_DIO0 26
#define LORA_DIO1 27
#define LORA_RESET 13

//#define LED_PIN 25   // If defined we will blink this LED
#define BUTTON_PIN 0 // If defined, this will be used for user button presses


//#define BATTERY_PIN 39// A battery voltage measurement pin, voltage divider connected here to measure battery voltage
//#define ADC_CHANNEL ADC1_GPIO39_CHANNEL
//#define BAT_MEASURE_ADC_UNIT 1

#define BATTERY_PIN 35 // A battery voltage measurement pin, voltage divider connected here to measure battery voltage
// ratio of voltage divider = 3.20 (R1=100k, R2=220k)
#define ADC_MULTIPLIER 3.2
#define ADC_CHANNEL ADC1_GPIO35_CHANNEL