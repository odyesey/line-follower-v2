// Simple code for debugging some sensors

#define A2 PA0
#define A3 PA1
#define A4 PA2
#define A5 PA3

int a2, a3, a4, a5;

void setup() {
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);

  Serial.begin(115200);
}

void loop() {
  a2 = analogRead(A2);
  a3 = analogRead(A3);
  a4 = analogRead(A4);
  a5 = analogRead(A5);

  Serial.print("A2: ");
  Serial.print(a2);
  Serial.print(" | A3: ");
  Serial.print(a3);
  Serial.print(" | A4: ");
  Serial.print(a4);
  Serial.print(" | A5: ");
  Serial.println(a5);
}

