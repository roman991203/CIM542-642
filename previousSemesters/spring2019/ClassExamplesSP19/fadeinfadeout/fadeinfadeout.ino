int ledpin1 = 3;
int counter = 0;

long prevMillis = 0;
int interval = 10;

boolean flipFlop = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(ledpin1, counter);

  if(millis() - prevMillis >= interval){
    prevMillis = millis();

    if(flipFlop == true){
      counter = counter + 1;
    }else{
      counter = counter - 1;
    }
      

  }
  
  if(counter >= 255){
    //counter = 0;
    flipFlop = false;
  }

  if(counter <= 0){
    flipFlop = true;
  }
  //delay(10);
}
