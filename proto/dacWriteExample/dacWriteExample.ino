/*
  adapted from https://circuits4you.com/2018/12/31/esp32-dac-example/
   
*/

#define DAC1 25

byte value=0;
byte d=0;

void test1()
{  digitalWrite(DAC1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1);                       // wait for a second
  digitalWrite(DAC1, LOW);    // turn the LED off by making the voltage LOW
  delay(1);    }
  
void test2()
{
  dacWrite(DAC1,value++);
  delayMicroseconds(50>>3);
}

void test3()
{
  dacWrite(DAC1,(value++ > 127) ? 0 : 255);
}

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(DAC1, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //test1();
  //test2();
  test3();
}
