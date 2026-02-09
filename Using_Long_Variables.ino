//Project 14 long variables

long number1 = 0;
long number2 = 0;
double numberPOW = 0;

long a = 0;
long b = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  number1 = 0;       //zero incoming number
  Serial.flush();   //clear serial
  while (Serial.available() == 0){
    //does nothing until serial data comes in
    //when value comes in Serial.available will return amount
    //of characters waiting in the buffer
  }
  while (Serial.available() > 0){   //one charcter of serial data is available begin calc
    number1 = number1 * 10;
    //read next number in the buffer and subtract the character 0
    //in order to conver to an actual interger.
    a = Serial.read() - '0';
    //add value a into the number
    number1 = number1 + a;
    //allow short delay for more serial data 
    delay(5);
  }
  
  
    number2 = 0;       //zero incoming number
  Serial.flush();   //clear serial
  while (Serial.available() == 0){
    //does nothing until serial data comes in
    //when value comes in Serial.available will return amount
    //of characters waiting in the buffer
  }
  while (Serial.available() > 0){   //one charcter of serial data is available begin calc
    number2 = number2 * 10;
    //read next number in the buffer and subtract the character 0
    //in order to conver to an actual interger
    b = Serial.read() - '0';
    //add value a into the number
    number2 = number2 + b;
    //allow short delay for mor;e serial data 
    delay(5);
  Serial.print("You entered: ");  //prints typed inputs
  Serial.println(number1);
  Serial.print("You also entered: ");
  Serial.println(number2);
  Serial.print(number1);
  Serial.print(" to the power of ");
  Serial.println(number2);
  numberPOW = pow(number1, number2); //preforms power of numbers
  Serial.println(numberPOW); //results print
}
}