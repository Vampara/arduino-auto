
int ENApin = 3; //ENA is voor de rechterwielen
int Rvoorpin = 5; //rechterwielen vooruit
int Rachterpin = 4; //rechterwielen achteruit
int ENBpin = 10; //ENB is voor de linkerwielen
int Lachterpin = 9; //linkerwielen achteruit
int Lvoorpin = 8; //linkerwielen vooruit



void setup() {
  pinMode(ENApin, OUTPUT);
  pinMode(Rvoorpin, OUTPUT);
  pinMode(Rachterpin, OUTPUT);
  pinMode(ENBpin, OUTPUT);
  pinMode(Lvoorpin, OUTPUT);
  pinMode(Lachterpin, OUTPUT);

}

void loop() {

  digitalWrite(Rvoorpin, HIGH);
  digitalWrite(Rachterpin, LOW);
  digitalWrite(Lvoorpin, HIGH);
  digitalWrite(Lachterpin, LOW);


  analogWrite(ENApin, 55);
  analogWrite(ENBpin, 55);
  delay(5000);
  analogWrite(ENApin, 100);
  analogWrite(ENBpin, 100);
  delay(5000);
  analogWrite(ENApin, 150);
  analogWrite(ENBpin, 150);
  delay(5000);
  analogWrite(ENApin, 200);
  analogWrite(ENBpin, 200);
  delay(5000);
  analogWrite(ENApin, 255);
  analogWrite(ENBpin, 255);
}
