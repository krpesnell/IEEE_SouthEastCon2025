const int pwm1 = 16; // pin 16 as pwm
const int dir1 = 17;  // pin 17 as dir

const int pwm2 = 13; // pin 16 as pwm
const int dir2 = 12;  // pin 17 as dir

const int pwm3 = 18; // pin 18 as pwm
const int dir3 = 19;  // pin 19 as dir

const int pwm4 = 11; // pin 16 as pwm
const int dir4 = 10;  // pin 17 as dir
int i=0; 

void setup(){

  Serial.begin(9600);
  pinMode(pwm1,OUTPUT); //declare pin pwm as OUTPUT
  pinMode(dir1,OUTPUT); //declare pin dir as OUTPUT
  pinMode(pwm2,OUTPUT); //declare pin pwm as OUTPUT
  pinMode(dir2,OUTPUT); //declare pin dir as OUTPUT
  pinMode(pwm3,OUTPUT); //declare pin pwm as OUTPUT
  pinMode(dir3,OUTPUT); //declare pin dir as OUTPUT
  pinMode(pwm4,OUTPUT); //declare pin pwm as OUTPUT
  pinMode(dir4,OUTPUT); //declare pin dir as OUTPUT

 digitalWrite(dir1,HIGH);
  digitalWrite(dir2,HIGH);
   digitalWrite(dir3,HIGH);
    digitalWrite(dir4,HIGH);
}

void loop(){
  //SIGN MAGNITUDE MODE  
  //Controlling motor with program set

    // if DIR pin is HIGH, B will HIGH ; if DIR pin is LOW, A will HIGH
  //  digitalWrite(dir2,HIGH);
  //  digitalWrite(dir3,HIGH);
  //  digitalWrite(dir4,HIGH);

digitalWrite(dir1,HIGH);
analogWrite(pwm1,255);
Serial.println("1");

digitalWrite(dir2,HIGH);
analogWrite(pwm2,255);
Serial.println("2");

digitalWrite(dir3,HIGH);
analogWrite(pwm3,255);
Serial.println("3");

digitalWrite(dir4,HIGH);
analogWrite(pwm4,255);
Serial.println("4");

delay(2000);

// delay(2000);
// digitalWrite(dir1, LOW);
// analogWrite(pwm1,0);

// analogWrite(pwm2,255);
// Serial.println("2");
// delay(2000);
// analogWrite(pwm2,0);

// analogWrite(pwm3,255);
// Serial.println("3");
// delay(2000);
// analogWrite(pwm3,0);

// analogWrite(pwm4,255);
// Serial.println("4");
// delay(2000);
// analogWrite(pwm4,0);


// delay(5000);
// analogWrite(pwm1,127.5);
// analogWrite(pwm2,127.5);
// analogWrite(pwm3,127.5);
// analogWrite(pwm4,STOP);
// Serial.println("stop");
// delay(5000);
  // //from slow to fast
  //  for(i=0;i<=255;i++){		// from 0 to 255, increment one for every 0.5 second
  //  analogWrite(pwm1,i);    //write 'i' value to PWM pin
  // //  analogWrite(pwm2,i);    //write 'i' value to PWM pin
  // //  analogWrite(pwm3,i);    //write 'i' value to PWM pin
  // //  analogWrite(pwm4,i);    //write 'i' value to PWM pin
  //  delay(10);
  //  Serial.println(i);
  //  }

  // for(i=255;i>=0;i--){		// from 0 to 255, increment one for every 0.5 second
  //  analogWrite(pwm1,i);    //write 'i' value to PWM pin
  //  analogWrite(pwm2,i);    //write 'i' value to PWM pin
  //  analogWrite(pwm3,i);    //write 'i' value to PWM pin
  //  analogWrite(pwm4,i);    //write 'i' value to PWM pin
  //  delay(10);
  //  Serial.println(i);
  //  }



}




  //  digitalWrite(dir1,HIGH);  // if DIR pin is HIGH, B will HIGH ; if DIR pin is LOW, A will HIGH
  //  digitalWrite(dir2,HIGH);
  //  digitalWrite(dir3,HIGH);
  //  digitalWrite(dir4,HIGH);

  // //from slow to fast
  //  for(i=0;i<=255;i++){		// from 0 to 255, increment one for every 0.5 second
  //  analogWrite(pwm1,i);    //write 'i' value to PWM pin
  //  analogWrite(pwm2,i);    //write 'i' value to PWM pin
  //  analogWrite(pwm3,i);    //write 'i' value to PWM pin
  //  analogWrite(pwm4,i);    //write 'i' value to PWM pin
  //  delay(10);
  //  Serial.println(i);
  //  }

  // for(i=255;i>=0;i--){		// from 0 to 255, increment one for every 0.5 second
  //  analogWrite(pwm1,i);    //write 'i' value to PWM pin
  //  analogWrite(pwm2,i);    //write 'i' value to PWM pin
  //  analogWrite(pwm3,i);    //write 'i' value to PWM pin
  //  analogWrite(pwm4,i);    //write 'i' value to PWM pin
  //  delay(10);
  //  Serial.println(i);
  //  }