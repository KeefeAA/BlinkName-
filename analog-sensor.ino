// The following line is optional, but recommended in most firmware. 
// It allows your code to run before the cloud is connected.
SYSTEM_THREAD(ENABLED);

// This uses the USB serial port for debugging logs.
SerialLogHandler logHandler;

// This is where your LED is plugged in. The other side goes to a resistor 
// connected to GND.
const pin_t LED_PIN = D6; 

int ledToggle(String command); // Forward declaration


void setup() {
	// First, declare all of our pins. This lets our device know which ones 
    // will be used for outputting voltage, and which ones will read 
    // incoming voltage.
	pinMode(LED_PIN, OUTPUT); // Our LED pin is output (lighting up the LED)
	digitalWrite(LED_PIN, HIGH);

	// We are also going to declare a Particle.function so that we can turn 
    // the LED on and off from the cloud.
	Particle.function("led",ledToggle);
}

void loop() {

	delay(1000ms);
	
	// K
	//long
	digitalWrite(LED_PIN, HIGH);
	delay(750ms);
	
	digitalWrite(LED_PIN, LOW);
	delay(100ms);
	
	//short
	digitalWrite(LED_PIN, HIGH);
	delay(250ms);
	
	digitalWrite(LED_PIN, LOW);
	delay(100ms);
	
    //long
	digitalWrite(LED_PIN, HIGH);
	delay(750ms);
	
	digitalWrite(LED_PIN, LOW);
	delay(750ms);
    
    
    //E
    //short
	digitalWrite(LED_PIN, HIGH);
	delay(250ms);
	
	digitalWrite(LED_PIN, LOW);
	delay(750ms);
	
	
	//E
	//short
	digitalWrite(LED_PIN, HIGH);
	delay(250ms);
	
	digitalWrite(LED_PIN, LOW);
	delay(750ms);
	
	//F
	//short
	digitalWrite(LED_PIN, HIGH);
	delay(250ms);
	
	digitalWrite(LED_PIN, LOW);
	delay(100ms);
	
	//short
	digitalWrite(LED_PIN, HIGH);
	delay(250ms);

    digitalWrite(LED_PIN, LOW);
	delay(100ms);
	
	//long
	digitalWrite(LED_PIN, HIGH);
	delay(750ms);
	
	digitalWrite(LED_PIN, LOW);
	delay(100ms);
	
	//short
	digitalWrite(LED_PIN, HIGH);
	delay(250ms);
	
	digitalWrite(LED_PIN, LOW);
	delay(750ms);
	
	//E
	//short
	digitalWrite(LED_PIN, HIGH);
	delay(250ms);
	
	digitalWrite(LED_PIN, LOW);
}


// This function is called when the Particle.function is called
int ledToggle(String command) {
	if (command.equals("on")) {
        digitalWrite(LED_PIN, HIGH);
        return 1;
    }
    else if (command.equals("off")) {
        digitalWrite(LED_PIN, LOW);
        return 0;
    }
    else {
		// Unknown option
        return -1;
    }
}
