//stepper stuff
#include<AccelStepper.h>;

//Stepper myStepper= Stepper(2048,8,10,9,11);
AccelStepper myStepper(1, 9, 8);


//button stuff
int but1=7;
int but2=6;
int but3=5;
int but4=4;
int but5=3;
int but6=2;
boolean butPush1=digitalRead(but1);
boolean butPush2=digitalRead(but2);
boolean butPush3=digitalRead(but3);
boolean butPush4=digitalRead(but4);
boolean butPush5=digitalRead(but5);
boolean butPush6=digitalRead(but6);
int button1=0;
int button2=0;
int button3=0;
int button4=0;
int button5=0;
int button6=0;


// this is how many steps the stepper will take to get to each section
int sweaterAngle=50 ;
int jacketAngle=70;
int jeansAngle=00; 
int dressesAngle=110 ;
int homeAngle=0;


void setup() {
  // put your setup code here, to run once:
  
  
myStepper.setMaxSpeed(1000);

myStepper.setAcceleration(100);

 //this should all be good
Serial.begin(9600);
pinMode(but1,INPUT);
pinMode(but2,INPUT);
pinMode(but3,INPUT);
pinMode(but4,INPUT);
pinMode(but5,INPUT);
pinMode(but6,INPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
//hello world because it stopped working for some reason

  
//actions that the spinny thing will do 

sweaters1();
sweaters2();
shirts();
dresses();
survey();


}
//make it to where you don't have to hold buttons down
void sweaters1(){


boolean butPush1=digitalRead(but1);


Serial.println(butPush1);



if (butPush1==HIGH){
  
  myStepper.moveTo(jacketAngle);
myStepper.runToPosition();



   }


  
}


void sweaters2(){
 

boolean butPush2=digitalRead(but2);

if (butPush2==HIGH){
   
 
  myStepper.moveTo(sweaterAngle);
myStepper.runToPosition();
   
   }
  
}

void shirts(){

boolean butPush3=digitalRead(but3);


if(butPush3==HIGH){
     myStepper.moveTo(jeansAngle);
myStepper.runToPosition();
}
  
}
void dresses(){

boolean butPush4=digitalRead(but4);

if(butPush4==HIGH){
  
     myStepper.moveTo(dressesAngle);
myStepper.runToPosition();}
  
}


void survey(){
boolean butPush5=digitalRead(but5);
if(but5==HIGH){
  myStepper.moveTo(1000);
myStepper.runToPosition();

delay(1000);}

 
}
