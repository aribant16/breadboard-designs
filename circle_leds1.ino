// C++ code
//
int anispeed = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  anispeed = 400;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(8, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(8, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(7, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(7, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(5, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(5, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(3, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(3, LOW);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(6, HIGH);
  delay(anispeed); // Wait for anispeed millisecond(s)
  digitalWrite(6, LOW);
}