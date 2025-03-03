# Arduino-Mega-2560-Facial-Recognition-Project
Arduino Mega 2560 Facial Recognition Project

This project uses one model trained using Teachable Machine:

Facial Recognition Model – Identifies whether the user's face is present.

Teachable Machine
PySerial Documentation
TensorFlow Documentation
Arduino Documentation

Project Steps
Train the Model:
Facial Recognition Model
Go to Teachable Machine.
Create a new image model with two classes:
Class 1: Your face (upload multiple pictures).
Class 2: Other faces/no face (or background images).
Export the model in TensorFlow/Keras format.

Upload Arduino Code:
Open the Arduino IDE and upload the basic code that listens for commands from Python to control the LED light.
The code should: -Turn on the green LED when your face is detected. -Turn on the red LED when no face is detected.

Set Up Python-Arduino Communication:
Install the required Python libraries using: pip install pyserial tensorflow opencv-python
Use Python to send serial signals to the Arduino:
When the model detects your face, Python sends a signal to turn on the green LED.
When no face is detected, Python sends a signal to turn on the red LED.

Test the System:
Train and test both model and serial communication 
Test the communication between Python and Arduino to ensure the LED control works based on:
Facial recognition (green for your face, red for no face).
Refine the Model (if needed):
Adjust the facial recognition model’s sensitivity if required.
Ensure that the system behaves as expected during runtime.
Versions Used:

Python: 3.9.6
TensorFlow: 2.18
Keras: Latest
OpenCV: 4.10
Arduino IDE: Latest
Hardware: Arduino Mega 2560
