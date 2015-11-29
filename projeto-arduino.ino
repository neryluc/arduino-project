int carroVermelho = 10;
int carroAmarelo = 9;
int carroVerde = 8;

int pedestreVermelho = 3;
int pedestreAmarelo = 2;
int pedestreAzul = 1;

int buzzer = 12;

void setup() {
  pinMode(carroVermelho, OUTPUT);
  pinMode(carroAmarelo, OUTPUT);
  pinMode(carroVerde, OUTPUT);

  
  pinMode(pedestreVermelho, OUTPUT);
  pinMode(pedestreAmarelo, OUTPUT);
  pinMode(pedestreAzul, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // Carros
  digitalWrite(pedestreVermelho, HIGH);
  
  digitalWrite(carroVerde, HIGH);
  delay(5000);
  
  digitalWrite(carroAmarelo, HIGH);
  digitalWrite(carroVerde, LOW);
  delay(2000);

  digitalWrite(carroVermelho, HIGH);
  digitalWrite(carroAmarelo, LOW);

  // Pedestres
  digitalWrite(pedestreVermelho, LOW);
  digitalWrite(pedestreAzul, HIGH);
  
  // BUZZER
  tone(buzzer, 3000);
  delay(500);
  noTone(buzzer);
  delay(500);

  tone(buzzer, 3000);
  delay(500);
  noTone(buzzer);
  delay(500);

  tone(buzzer, 3000);
  delay(500);
  noTone(buzzer);
  delay(500);

  tone(buzzer, 3000);
  delay(500);
  noTone(buzzer);
  delay(500);

  tone(buzzer, 3000);
  delay(500);
  noTone(buzzer);
  delay(500);

  tone(buzzer, 3000);
  delay(500);
  noTone(buzzer);

  // BUZZER
  
  digitalWrite(pedestreAmarelo, HIGH);
  digitalWrite(pedestreAzul, LOW);


  // BUZZER 2
  tone(buzzer, 3000);
  delay(200);
  noTone(buzzer);
  delay(200);

  tone(buzzer, 3000);
  delay(200);
  noTone(buzzer);
  delay(200);

  tone(buzzer, 3000);
  delay(200);
  noTone(buzzer);
  delay(200);

  tone(buzzer, 3000);
  delay(200);
  noTone(buzzer);
  delay(200);

  tone(buzzer, 3000);
  delay(200);
  noTone(buzzer);
  delay(200);

  tone(buzzer, 3000);
  delay(200);
  noTone(buzzer);
  delay(200);

  tone(buzzer, 3000);
  delay(200);
  noTone(buzzer);
  delay(200);

  tone(buzzer, 3000);
  delay(200);
  noTone(buzzer);
  delay(200);

  tone(buzzer, 3000);
  delay(200);
  noTone(buzzer);


  // BUZZER 2
  

  digitalWrite(pedestreVermelho, HIGH);
  digitalWrite(pedestreAmarelo, LOW);

  digitalWrite(carroVermelho, LOW);
}
