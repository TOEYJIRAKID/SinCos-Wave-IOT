int x = 0;
const float frequency = 0.05;      
const float amplitude = 50.0;      
const float middle_line = 0.0;  

void setup() {
  Serial.begin(9600);
}

void loop() {

  x = x + 1;
  float sin_wave = amplitude * sin(2 * PI * frequency * x);
  float cos_wave = amplitude * cos(2 * PI * frequency * x);
  
  Serial.printf("%f %f %f\n", sin_wave, middle_line, cos_wave); 
  delay(100);
}