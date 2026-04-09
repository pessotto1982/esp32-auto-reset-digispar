#define RST_PIN 5  // P5 = PB5 su Digispark
#define LED_PIN 1

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(RST_PIN, INPUT);  // Alta impedenza
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  // Reset ESP32
  pinMode(RST_PIN, OUTPUT);
  digitalWrite(RST_PIN, LOW);  // EN → GND
  digitalWrite(LED_PIN, HIGH);
  delay(300);

  // Release
  pinMode(RST_PIN, INPUT);     // EN risale
  digitalWrite(LED_PIN, LOW);
  
  delay(43200000); // 12 ore
}
