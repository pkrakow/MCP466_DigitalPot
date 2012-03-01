// MCP466_DigitalPot_Example
#include <Wire.h>
#include <MCP466_DigitalPot.h>


#define mcpAddress         0x2F
#define volatileWiper0     0x00
#define volatileWiper1     0x01
#define nonvolatileWiper0  0x02
#define nonvolatileWiper1  0x03
#define TCON               0x04
#define mcpSTATUS          0x05 

// Construct an instance of the MCP466_DigitalPot class
MCP466_DigitalPot examplePot(mcpAddress);

void setup()
{
  // Enable I2C Communications
  Wire.begin();
  
  // Set serial port baud rate for debug messages
  Serial.begin(9600);

  examplePot.mcpWrite(volatileWiper1, 0);
  Serial.println(examplePot.mcpRead(volatileWiper1));
}

void loop()
{

}
