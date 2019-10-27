//
// Seeed line finder (grove interface)

// red   5V
// black gnd
// white NC
// yellow D3 (Output) (Hint: UNO input)

// D3 1 means black surface
//    0 means white line

int senseLine = 3; // (D3)

void setup() {
  //Initialize serial and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  
  // Setup digital input to get the digital output
  // of the line finder sensor.
  Serial.print("Setup D");
  Serial.print(senseLine);
  Serial.println(" for the line finder sensor.");
  pinMode (senseLine, INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(senseLine))
    Serial.println("Black Surface!");
  else 
    Serial.println("White Line!");
  delay(100);

}
