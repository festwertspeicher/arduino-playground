/*
 * Eine Funktion berechnet die Summe aus zwei Zahlen.
 * Eine LED gibt die Summe durch Aufblinken aus.
 * 
 */

int led = 2;
int pause = 500;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  int anzahlBlinken = summe(5, 3);
  
  for(int i=0; i<anzahlBlinken; i++) {
    digitalWrite(led, HIGH);
    delay(pause);
    digitalWrite(led, LOW);
    delay(pause);     
  }
  delay(5*pause);
}

int summe(int zahlEins, int zahlZwei) {
  int ergebnis = zahlEins + zahlZwei;
  return ergebnis;
}
