byte LED = 8; //Set an output in this case a LED, can also be a electromagnet in a coil gun or a relay for a more powerful light such as incandesant bulb
byte Sensor = A0; //analog input from the LDR
byte Gate = 9; //Part of the light gate
int thresh_hold = 250; //thresh hold directly affects the sensitivity, higher value is less sensitive, i found 250 works in a dimly lit room with a blue 5v LED about 10mm away from the LDR 

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Gate, OUTPUT);
  Serial.begin(9600);
  digitalWrite(Gate, 1);
  digitalWrite(LED, 0);
}

void loop() {
  int val = analogRead(Sensor);
  if (val <= thresh_hold)
  {
    //add code for when light is not present or blocked
    digitalWrite(LED, 1);
    Serial.print(val);
    Serial.print("\n");
  }
  else if (val > thresh_hold)
  {
    //add code for when light is present or not blocked
    digitalWrite(LED, 0);
    Serial.print(val);
    Serial.print("\n");
  }
  //Read the value and compare to thresh hold add code freely to if and else if
}
