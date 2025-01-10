#define BUTTON_PIN 21

void setup() {
  Serial.begin(9600);

  pinMode(21, INPUT_PULLUP); //Btn on GPIO21
}

void loop() {
#ifdef RGB_BUILTIN

  int btnState = !digitalRead(BUTTON_PIN);

  if( btnState == 1 ){
    digitalWrite(RGB_BUILTIN, HIGH);
  }else{
    digitalWrite(RGB_BUILTIN, LOW);
  }

#endif
}