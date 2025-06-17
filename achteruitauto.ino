
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

  digitalWrite(Rvoorpin, LOW);
  digitalWrite(Rachterpin, HIGH);
  digitalWrite(Lvoorpin, LOW);
  digitalWrite(Lachterpin, HIGH);


  analogWrite(ENApin, 150);
  analogWrite(ENBpin, 150);
}
