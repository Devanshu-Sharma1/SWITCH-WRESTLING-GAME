int count;

void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(9,OUTPUT);
  digitalWrite(9,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(8)==HIGH){
    count++;
    delay(200);
  }

  if(count==1){
    digitalWrite(1,HIGH);
    }
  else if(count==4){
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    }
  else if(count==8){
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    }
  else if(count==12){
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    }
  else if(count==16){
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    }
  else if(count==20){
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    }
  else if(count==24){
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    }

  if(count==25){
    digitalWrite(9,HIGH);
    digitalWrite(4,HIGH);
    delay(100);
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    delay(100);
    digitalWrite(2,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(5,LOW);
    delay(100);
    digitalWrite(1,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(6,LOW);
    delay(100);
    digitalWrite(2,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(1,LOW);
    digitalWrite(7,LOW);
    delay(100);
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(2,LOW);
    digitalWrite(6,LOW);
    delay(100);
    digitalWrite(4,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(5,LOW);
    delay(100);
    }
}
