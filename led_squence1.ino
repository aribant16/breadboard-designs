// C++ code
//
int anispeed = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  anispeed = 400;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(11, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(11, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(8, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(8, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(6, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(6, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(8, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(8, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(11, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(11, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(6, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(6, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(6, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(6, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(8, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(8, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(11, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(11, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
}