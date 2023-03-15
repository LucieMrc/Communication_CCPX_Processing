import processing.serial.*;

Serial myPort;  // Create object from Serial class
float val;      // Data received from the serial port

void setup()
{
  size(500, 500);
  printArray(Serial.list());
  String portName = Serial.list()[5];

  myPort = new Serial(this, portName, 9600);
}

void draw()
{
  if ( myPort.available() > 0) {  // If data is available,
    val = myPort.read();         // read it and store it in val
  }

  println(val);
  noStroke();
  fill(0, 10);
  rect(0, 0, width, height);

  if (val == 1) {
    fill(250, 50, 50);
    rect(10, 20, 50, 50);
  }

  if (val == 2) {
    fill(50, 250, 50);
    rect(200, 250, 50, 50);
  }

  if (val == 3) {
    fill(50, 50, 250);
    rect(260, 310, 50, 50);
  }

  if (val == 4) {
    fill(0, 50, 70);
    rect(310, 350, 50, 50);
  }

  if (val == 5) {
    fill(20, 0, 150);
    rect(50, 50, 50, 50);
  }

  if (val == 6) {
    fill(10, 180, 0);
    rect(200, 10, 50, 50);
  }

  if (val == 7) {
    fill(10, 250, 250);
    rect(310, 100, 50, 50);
  }
}
