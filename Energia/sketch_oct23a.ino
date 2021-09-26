/*
   Krithika Kannan
   CE 1100
   Fall 2019
*/

//Constants
static int R1 = 6;
static int Y1 = 5;
static int G1 = 4;
static int R2 = 10;
static int Y2 = 9;
static int G2 = 8;

//Program used to mimic a stoplight
void setup() {
  pinMode(R1, OUTPUT);
  pinMode(Y1, OUTPUT);
  pinMode(G1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(Y2, OUTPUT);
  pinMode(G2, OUTPUT);
}
void loop() {
  digitalWrite(G1,1);
  digitalWrite(R2,1);
  delay(8000);
  digitalWrite(G1,0);
  digitalWrite(R2,0);

  digitalWrite(Y1,1);
  digitalWrite(R2,1);
  delay(3000);
  digitalWrite(Y1,0);
  digitalWrite(R2,0);

  digitalWrite(R1,1);
  digitalWrite(R2,1);
  delay(1000);
  digitalWrite(R1,0);
  digitalWrite(R2,0);

  digitalWrite(R1,1);
  digitalWrite(G2,1);
  delay(8000);
  digitalWrite(R1,0);
  digitalWrite(G2,0);

  digitalWrite(R1,1);
  digitalWrite(Y2,1);
  delay(3000);
  digitalWrite(R1,0);
  digitalWrite(Y2,0);

  digitalWrite(R1,1);
  digitalWrite(R2,1);
  delay(1000);
  digitalWrite(R1,0);
  digitalWrite(R2,0);
}
