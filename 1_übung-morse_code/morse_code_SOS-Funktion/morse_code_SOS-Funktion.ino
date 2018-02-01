/*
 * Sendet den Morsecode für SOS
 * In diesem Beispiel werden for-Schleifen und Funktionen benutzt.
 */

int led = 2;
int kurz = 200;
int lang = 1000;
int pause = 200;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  dreiMalLang();
  dreiMalKurz();
  dreiMalLang();
  delay(4*pause);
}

void dreiMalLang() {
  for(int i=0; i<3; i++) {    //Lang-Block
    digitalWrite(led, HIGH);
    delay(lang);
    digitalWrite(led, LOW);
    delay(pause);     
  }
}

void dreiMalKurz() {
  for(int i=0; i<3; i++) {    //Kurz-Block
    digitalWrite(led, HIGH);
    delay(kurz);
    digitalWrite(led, LOW);
    delay(pause);     
  }
}
