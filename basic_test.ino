/* Classic Arcade Joystick Red Ball 4/8 Way [S207] : http://rdiot.tistory.com/137 [RDIoT Demo] */

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP); // UP
  pinMode(3, INPUT_PULLUP); // DOWN
  pinMode(4, INPUT_PULLUP); // LEFT
  pinMode(5, INPUT_PULLUP); // RIGHT
 }

void loop() {
  //lcd.setCursor(0,0);
  //lcd.print("S207:Arcade Joystick");
  
  int up = digitalRead(2);
  int down = digitalRead(3);
  int left = digitalRead(4);
  int right = digitalRead(5);

  Serial.print("up(D2)="+(String)up);
  Serial.print(" down(D3)="+(String)down);
  Serial.print(" left(D4)="+(String)left);
  Serial.println(" right(D5)="+(String)right);
  Serial.println();

  if(up == LOW && left == LOW) 
  {    
    Serial.println("Location ==========> UP + LEFT     ");
  }
  else if(up == LOW && right == LOW)
  {
      Serial.println("Location ==========> UP + RIGHT    ");
  }
  else if(down == LOW && left == LOW)
  {
      Serial.println("Location ==========> DOWN + LEFT    ");
  }
  else if(down == LOW && right == LOW)
  {
      Serial.println("Location ==========> DOWN + RIGHT     ");
  }
  else if(up == LOW)
  {
      Serial.println("Location ==========> UP             ");
  }
  else if(down == LOW)
  {
      Serial.println("Location ==========> DOWN             ");
  }
  else if(left == LOW)
  {
      Serial.println("Location ==========> LEFT             ");
  }
else if(right == LOW)
  {
      Serial.println("Location ==========> RIGHT            ");
  }
  delay(200); 

} 
