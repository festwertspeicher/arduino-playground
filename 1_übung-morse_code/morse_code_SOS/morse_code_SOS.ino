/*
 * Sendet den Morsecode für SOS
 */

int led = 2;
int kurz = 200;
int lang = 1000;
int pause = 200;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);    //Lang-Block
  delay(lang);
  digitalWrite(led, LOW);
  delay(pause);
  digitalWrite(led, HIGH);
  delay(lang);
  digitalWrite(led, LOW);
  delay(pause);
  digitalWrite(led, HIGH);
  delay(lang);
  digitalWrite(led, LOW);
  delay(pause);

  digitalWrite(led, HIGH);    //Kurz-Block
  delay(kurz);
  digitalWrite(led, LOW);
  delay(pause);
  digitalWrite(led, HIGH);
  delay(kurz);
  digitalWrite(led, LOW);
  delay(pause);    
  digitalWrite(led, HIGH);
  delay(kurz);
  digitalWrite(led, LOW);
  delay(pause);

  digitalWrite(led, HIGH);    //Lang-Block
  delay(lang);
  digitalWrite(led, LOW);
  delay(pause);
  digitalWrite(led, HIGH);
  delay(lang);
  digitalWrite(led, LOW);
  delay(pause);
  digitalWrite(led, HIGH);
  delay(lang);
  digitalWrite(led, LOW);
  delay(pause);

  delay(4*pause);
}
