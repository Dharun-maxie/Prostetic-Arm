#include<servo.h>

servo s1,s2,s3,s4,s5;

void main
{
s1.attach(2);
s2.attach(3);
s3.attach(4);
s4.attach(5);
s5.attach(6);
}
void loop()
{
s1.write(0);
s2.write(0);
s3.write(0);
s4.write(0);
s5.write(0);  //for thumb finger
delay(1000);
}
