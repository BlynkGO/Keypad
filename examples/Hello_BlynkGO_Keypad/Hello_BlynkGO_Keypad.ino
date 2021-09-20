#include <BlynkGOv2.h>
#include <Keypad.h>

const byte ROWS = 5;
const byte COLS = 4;

const char* key_str[] = { "" , "F1", "F2", "#", "*", 
                          "1", "2", "3", "UP",
                          "4", "5", "6", "DOWN",
                          "7", "8", "9", "ESC",
                          "LEFT", "0", "RIGHT", "ENTER" };
                          
enum{ KEY_F1=1, KEY_F2, KEY_SHARP,KEY_ASTERISK, 
      KEY_1,    KEY_2,  KEY_3,    KEY_UP,
      KEY_4,    KEY_5,  KEY_6,    KEY_DOWN,
      KEY_7,    KEY_8,  KEY_9,    KEY_ESC,
      KEY_LEFT, KEY_0,  KEY_RIGHT,KEY_ENTER };

char keys[ROWS][COLS] = {
    { KEY_F1,   KEY_F2, KEY_SHARP,KEY_ASTERISK }, 
    { KEY_1,    KEY_2,  KEY_3,    KEY_UP}, 
    { KEY_4,    KEY_5,  KEY_6,    KEY_DOWN}, 
    { KEY_7,    KEY_8,  KEY_9,    KEY_ESC}, 
    { KEY_LEFT, KEY_0,  KEY_RIGHT,KEY_ENTER}
};

byte rowPins[ROWS] = {33,32,39,38,37}; //connect to the row pinouts of the kpd
byte colPins[COLS] = {2,17,22,21}; //connect to the column pinouts of the kpd

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

GLabel label;

void setup() {
  Serial.begin(115200); Serial.println();
  BlynkGO.begin();
  label.font(prasanmit_40);
}

void loop() {
  BlynkGO.update();
  uint8_t key_id = keypad.getKey();
  if(key_id){
    Serial.println(key_str[key_id]);
    label = StringX::printf("[%s] Pressed", key_str[key_id] );
    switch(key_id){
      case KEY_F1:
        break;
      case KEY_F2:
        break;
      case KEY_SHARP:
        break;
      case KEY_ASTERISK:
        break;
      case KEY_UP:
        break;
      case KEY_DOWN:
        break;
      case KEY_LEFT:
        break;
      case KEY_RIGHT:
        break;
      case KEY_ESC:
        break;
      case KEY_ENTER:
        break;
      case KEY_0:
        break;
      case KEY_1:
        break;
      case KEY_2:
        break;
      case KEY_3:
        break;
      case KEY_4:
        break;
      case KEY_5:
        break;
      case KEY_6:
        break;
      case KEY_7:
        break;
      case KEY_8:
        break;
      case KEY_9:
        break;
    }
  }
}

