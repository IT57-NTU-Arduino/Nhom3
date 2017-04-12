int speakerPin = 9;

int length = 15; // the number of notes
char notes[] = "ccggaagffeeddc "; // a space represents a rest
int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 };
int tempo = 300;

void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}

void playNote(char note, int duration) {
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };

  // play the tone corresponding to the note name
  for (int i = 0; i < 8; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, INPUT_PULLUP);
  pinMode(speakerPin, OUTPUT);
 Serial.begin(19200);
}

void loop() {
  Serial.println(digitalRead(12));
  if(digitalRead(12)==0)
  {
    digitalWrite(13, HIGH);
    for (int i = 0; i < length; i++) {
      if (notes[i] == ' ') {
       delay(beats[i] * tempo); // rest
    } else {
      playNote(notes[i], beats[i] * tempo);
    }

    // pause between notes
      delay(tempo / 2); 
     }
  }
  else
 {
   digitalWrite(13, LOW);
  }
delay(1000);
}
