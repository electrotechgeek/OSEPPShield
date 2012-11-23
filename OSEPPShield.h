// http://osepp.com/learning-centre/start-here/i2c-expansion-shield/
// Possible shield addresses (suffix correspond to DIP switch positions)
#define SHIELD_ADDR_OFF_OFF_OFF  (0x70)
#define SHIELD_ADDR_OFF_OFF_ON   (0x74)
#define SHIELD_ADDR_OFF_ON_OFF   (0x72)
#define SHIELD_ADDR_OFF_ON_ON    (0x76)
#define SHIELD_ADDR_ON_OFF_OFF   (0x71)
#define SHIELD_ADDR_ON_OFF_ON    (0x75)
#define SHIELD_ADDR_ON_ON_OFF    (0x73)
#define SHIELD_ADDR_ON_ON_ON     (0x77)

void shield_select_port(const uint8_t addr, int port) {
    Wire.beginTransmission(addr);
    Wire.write(1 << port);
    Wire.endTransmission();
}
