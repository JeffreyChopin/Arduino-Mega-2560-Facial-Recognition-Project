int GREEN_LED = 9;  // Define green LED pin

int RED_LED = 8;    // Define red LED pin

 

void setup() {

  Serial.begin(9600);  // Initialize serial communication

  pinMode(GREEN_LED, OUTPUT);

  pinMode(RED_LED, OUTPUT);


}

 

void loop() {

  if (Serial.available() > 0) {

    String msg = Serial.readStringUntil('\n');  // Read command

    msg.trim();  // Remove any extra spaces or newlines

   

    if (msg == "GREEN") {

      digitalWrite(GREEN_LED, HIGH);  // Turn on green LED

      digitalWrite(RED_LED, LOW);     // Ensure red LED is off

      Serial.println("Green LED ON");

    }

    else if (msg == "RED") {

      digitalWrite(GREEN_LED, LOW);   // Ensure green LED is off

      digitalWrite(RED_LED, HIGH);    // Turn on red LED

      Serial.println("Red LED ON");

    }

  }

}

 

