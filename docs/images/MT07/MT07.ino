/*
 WiFi Web Server LED Blink

 A simple web server that lets you blink an LED via the web.
 This sketch will print the IP address of your WiFi Shield (once connected)
 to the Serial monitor. From there, you can open that address in a web browser
 to turn on and off the LED on pin 5.

 If the IP address of your shield is yourAddress:
 http://yourAddress/H turns the LED on
 http://yourAddress/L turns it off

 This example is written for a network using WPA2 encryption. For insecure
 WEP or WPA, change the Wifi.begin() call and use Wifi.setMinSecurity() accordingly.

 Circuit:
 * WiFi shield attached
 * LED attached to pin 5

 created for arduino 25 Nov 2012
 by Tom Igoe

ported for sparkfun esp32 
31.01.2017 by Jan Hendrik Berlin
 
 */

#include <WiFi.h>

const char* ssid     = "LasCasas";
const char* password = "Chapalefu";

WiFiServer server(80);
boolean status;
void setup()
{
    Serial.begin(115200);
    pinMode(32, OUTPUT);      // set the LED pin mode

    delay(10);

    // We start by connecting to a WiFi network

    Serial.println();
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(ssid);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected.");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
    
    server.begin();

}

void loop(){
 WiFiClient client = server.available();   // listen for incoming clients

  if (client) {                             // if you get a client,
    Serial.println("New Client.");           // print a message out the serial port
    String currentLine = "";                // make a String to hold incoming data from the client
    while (client.connected()) {            // loop while the client's connected
      if (client.available()) {             // if there's bytes to read from the client,
        char c = client.read();             // read a byte, then
        Serial.write(c);                    // print it out the serial monitor
        if (c == '\n') {                    // if the byte is a newline character

          // if the current line is blank, you got two newline characters in a row.
          // that's the end of the client HTTP request, so send a response:
          if (currentLine.length() == 0) {
            // HTTP headers always start with a response code (e.g. HTTP/1.1 200 OK)
            // and a content-type so the client knows what's coming, then a blank line:
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println("connection:close");
            client.println("refresh: 2");
            client.println();
            client.println("<!DOCTYPE html>");
            client.println("<html>");
           
            client.println("<style>");
            client.println("a:link, a:visited {font-family: Arial, sans-serif; background-color: blue;box-shadow: 2px 5px #888888;color: white;border: 2px solid;font-size:25px;padding: 14px 25px;text-align: center;text-decoration: none;display: inline-block;width:94%;}");
            client.println("a:hover, a:active {background-color: green;color:white;}");
            client.println("h1{text-align: center;}");
            client.println("</style>");
      
            client.println("<body>");
            // the content of the HTTP response follows the header:
            client.print("<a href=\"/H\">LED ON</a><br><br>");
            client.print("<a href=\"/L\">LED OFF</a><br><br>");
            if(status == true){
              client.println("<h1>STATUS = ON</h1>");
            }
            if(status == false){
              client.println("<h1>STATUS = OFF</h1>");
            }
            float lecturaPot = analogRead(34);
            float voltaje = lecturaPot*3.3/4095;
            client.print("<h1>VOLTAJE: ");
            client.print(voltaje);
            client.print("</h1>");
            client.println("</body>");
            // The HTTP response ends with another blank line:
            client.println();
            client.println("</html>");
            
            // break out of the while loop:
            break;
          } 
          
        else {    // if you got a newline, then clear currentLine:
            currentLine = "";
          }
        } else if (c != '\r') {  // if you got anything else but a carriage return character,
          currentLine += c;      // add it to the end of the currentLine
        }

        // Check to see if the client request was "GET /H" or "GET /L":
        if (currentLine.endsWith("GET /H")) {
          digitalWrite(32, HIGH);               // GET /H turns the LED on
          status = true;
        }
        if (currentLine.endsWith("GET /L")) {
          digitalWrite(32, LOW);                // GET /L turns the LED off
          status = false;
        }
      }
    }
    // close the connection:
    client.stop();
    Serial.println("Client Disconnected.");
  }
}
