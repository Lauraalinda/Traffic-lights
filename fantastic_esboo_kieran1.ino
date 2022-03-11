// C++ code
//
int RED=1;
int YELLOW=2;
int GREEN=3;

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  
}

void loop()
{
  digitalWrite(RED, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(RED, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(YELLOW, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(YELLOW, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(GREEN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(GREEN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

  }