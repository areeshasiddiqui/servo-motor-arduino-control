#include <Servo.h>

Servo myservo;

void setup()
{
  myservo.attach(9);//attachs the servo on pin 9 to servo object
  myservo.write(0);//back to 0 degrees
  delay(1000);//wait for a second
}

void loop()
{
  for (int i = 0; i <= 180; i++)
  {
    myservo.write(i); //write the i angle to the servo
    delay(15); //delay 15ms
  }
  for (int i = 180; i >= 0; i--)
  {
    myservo.write(i); //write the i angle to the servo
    delay(15); //delay 15ms
  }
}
