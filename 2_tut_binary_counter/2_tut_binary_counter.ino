/** 4 LEDs THAT COUNT IN BINARY (1 to 15)
VIDEO PREVIEW: https://drive.google.com/file/d/1zeqkjJn_JOvnhxl9V0iVyBFycjtvSR5e/view?usp=sharing
*/
//CONSTANTS
int pin2=2;
int pin3=3;
int pin4=4;
int pin5=5;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  count(LOW, LOW, LOW, HIGH);//1
  count(LOW, LOW, HIGH, LOW);//2
  count(LOW, LOW, HIGH, HIGH);//3
  count(LOW, HIGH, LOW, LOW);//4
  count(LOW, HIGH, LOW, HIGH);//5
  count(LOW, HIGH, HIGH, LOW);//6
  count(LOW, HIGH, HIGH, HIGH);//7
  count(HIGH, LOW, LOW, LOW);//8
  count(HIGH, LOW, LOW, HIGH);//9
  count(HIGH, LOW, HIGH, LOW);//10
  count(HIGH, LOW, HIGH, HIGH);//11
  count(HIGH, HIGH, LOW, LOW);//12
  count(HIGH, HIGH, LOW, HIGH);//13
  count(HIGH, HIGH, HIGH, LOW);//14
  count(HIGH, HIGH, HIGH, HIGH);//15
}
//Binary Table Eg: 
//https://lh3.googleusercontent.com/proxy/X8ElTpWkTCwP-Kt2eGKYXJJLae4aa9lNvNMOpKHn6YWV2RzYTfjiMI6e0D42XcBJumbmZO4_ZeBZJFNWf3X4Vu_Zgt_LtbKgB-VynBcOmWFaUxHffFgZ6sbkbH8OQwKqU2jlbpgRXF4
void count(int d1, int d2, int d3, int d4){
  digitalWrite(pin2, d1);
  digitalWrite(pin3, d2);
  digitalWrite(pin4, d3);
  digitalWrite(pin5, d4);
  delay(1000);
}
