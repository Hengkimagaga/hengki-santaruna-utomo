int led1 = 2;
int led2 = 3;
int led3 = 4;


void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);  
}

void loop() {
  if (Serial.available() >0)
  {
    int in = Serial.read();
    if (in == 'a')
    {
      led();  
    }
    else if (in == 'b')
    {
      digitalWrite( led2, LOW);
      digitalWrite( led1, LOW);
      digitalWrite( led3, LOW);
    }
  }
}

void led ()
{
  digitalWrite( led2, HIGH);
  digitalWrite( led1, LOW);
  digitalWrite( led3, LOW);
  delay (2000);
  digitalWrite( led1, HIGH);
  digitalWrite( led3, HIGH);
  digitalWrite( led2, LOW);
  delay(2000);
  digitalWrite( led1, HIGH);
  digitalWrite( led3, HIGH);
  digitalWrite( led2, HIGH);
  delay (2000);
  digitalWrite( led2, LOW);
  digitalWrite( led1, HIGH);
  digitalWrite( led3, HIGH);
  delay (2000);
  digitalWrite( led1, LOW);
  digitalWrite( led3, LOW);
  digitalWrite( led2, HIGH);
  delay(2000);
  digitalWrite( led1, HIGH);
  digitalWrite( led3, LOW);
  digitalWrite( led2, LOW);
  delay (2000);
  digitalWrite( led1, HIGH);
  digitalWrite( led3, HIGH);
  digitalWrite( led2, HIGH);
  delay (2000);
}

