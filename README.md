# Arduino Spielplatz
Dieses Repository wird benutzt um zusammen mit meiner Mitbewohnerin Bettina den Arduino zu erkunden. Jeden Freitag werden wir an einem Projekt zusammenarbeiten. Alles, was wir dafür brauchen soll Schritt für Schritt gelernt werden.

## Zeitplan
Wir starten mit dem Einrichten der Software. Dann wollen wir mit den Werkzeugen wie einem Breadboard und Bauteilen experimentieren und uns mit Elektrizität und der Arduino-Programmiersprache vertraut machen.

Darauf aufbauend beschäftigen wir uns an den nächsten zwei Freitagen mit Programmierkonzepten wie Control Flow und State Machines, Variablen und Funktionen, DRY, Schleifen und Arrays. Das wollen wir mit Interaktiven Elementen erkunden Zur Schaltung sollen Buttons, Knöpfe oder anderen Sensoren hinzugefügt werden. Dabei wird das Verständnis für Schaltungen und Programmierung vertieft.

Als nächstes wollen wir das Löten und herstellen von kleinen Platinen üben und an drei Tagen ein erstes kleines Projekt zusammen umsetzen. Dabei wollen wir verstehen, wie man den Arduino Pro Mini benutzt, den Strombedarf unseres Projekts herausfinden und ein Gehäuse mit dem 3D-Drucker herstellen.

Ausblick: Es soll eine fortschrittlichere Entwicklungsumgebung mit git und SublimeText3 eingerichtet werden.

Ziel: Die Möglichkeiten des Arduinos verstehen und nach einigen Monaten zusammen ein [Sous-Vide Gerät](https://en.wikipedia.org/wiki/Sous-vide) bauen.

## Was ist Arduino?
Die Arduino-Hardware ist ein Mikrocontroller (Ein-Chip-Computersystem) mit programmierbaren digitalen und analogen Funktionsblöcken. Auf Arduino Boards finden sich auch verschiedene Peripheriefunktionen wie zum Beispiel USB zur seriellen Kommunikation.

Arduino wurde gemacht, um kreativen Leuten und technologie-Neulingen einen Einstieg in die Welt der Mikrocontroller zu ermöglichen.

die Plattform Arduino besteht aus:
1. Software
  "Arduino IDE" ist ein spezielles Programm, eine sogenannte Entwicklungsumgebung, um deine geschriebenen Programme maschinenlesbar zu machen und mit der Hardware zu kommunizieren.
2. Hardware
  Bezieht sich auf das Board selbst (in unserem Fall der ARduino Uno)
3. Programmiersprache
  Programme für den Arduino werden in einer eigenen Programmiersprache geschrieben. Sie basiert auf der Programmiersprache C.
4. Warenzeichen
  Arduino ist eine Firma (inzwischen eigentlich zwei Firmen). Ihre Produkte sind unter einer Open Source Lizenz (quelloffen) veröffentlicht. Das heißt, jeder darf ihre Produkte nachbauen und auch verändern. Der Nachbau muss allerdings, so in der original Lizenz vorgeschrieben, ebenfalls Open Source veröffentlicht werden. Durch das Warenzeichen kann die Hardware und Software als Open Source geschützt werden. Das Board von Bettina ist ein "Elegoo Uno".
  5. Community
    Auf Arduino.cc findet sich eine große aktive Community. Hier werden Projekte vorgestellt. Auf jede Frage findet man hier die passende Antwort

## Entwicklungsumgebung einrichten
Wir starten zuerst mit der original Arduino Software und steigen später auf einen anspruchsvollen Workflow mit git und dem Programmier-Editor SublimeText 3 um.

Es gibt eine sehr gute Anleitung, zum Installieren der Entwicklungsumgebung für [Linux](https://www.arduino.cc/en/Guide/Linux) und [Windows](https://www.arduino.cc/en/Guide/Windows) auf der offiziellen Webseite.

Fritzing

Fritzing ist eine Open Source Software, um elektronische Schaltungen zu entwerfen. Die Software richtet sich an nicht professionelle Anwender und benutzt eine Steckplatinenansicht. Daraus können Schaltpläne und Leiterplatten generiert werden.

Anleitung zum Installieren unter [fritzing.org](http://fritzing.org/download/)
