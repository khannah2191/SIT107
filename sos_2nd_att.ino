int LED = 13;
int s = 300;
int o = 800;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void character(int speed) {
  digitalWrite(LED, HIGH);
  delay(speed);
  digitalWrite(LED, LOW);
  delay(300);
}

void loop() {
  // put your main code here, to run repeatedly: 
  for (int x = 1; x <= 3; x++) {
    character(s);
  }
  delay(100);
  for (int x = 1; x <= 3; x++) {
    character(o);
  }
  delay(100);
  for (int x = 1; x <= 3; x++) {
    character(s);
  }
  delay(2000);
}
