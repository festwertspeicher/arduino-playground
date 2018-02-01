/*
 * Sendet den Morsecode für SOS
 * In diesem Beispiel werden for-Schleifen benutzt.
 */

int led = 2;
int kurz = 200;
int lang = 1000;
int pause = 200;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  for(int i=0; i<3; i++) {    //Lang-Block
    digitalWrite(led, HIGH);
    delay(lang);
    digitalWrite(led, LOW);
    delay(pause);     
  }
  for(int i=0; i<3; i++) {    //Kurz-Block
    digitalWrite(led, HIGH);
    delay(kurz);
    digitalWrite(led, LOW);
    delay(pause);     
  }
  for(int i=0; i<3; i++) {    //Lang-Block
    digitalWrite(led, HIGH);
    delay(lang);
    digitalWrite(led, LOW);
    delay(pause);     
  }
  delay(4*pause);
}
