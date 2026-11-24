/*
Programa que permite escoller o LED que se acende en fución do
valor dunha variable de tipo String.

Autor: Kerlly Mero
Data: Novembro 2026
*/

String color = "verde"; 

void setup() {
  // Configuramos os 6 pins dixitais (do 8 ao 13) como saídas
  pinMode(8, OUTPUT);   // LED amarelo
  pinMode(9, OUTPUT);   // LED vermello
  pinMode(10, OUTPUT);  // LED azul
  pinMode(11, OUTPUT);  // LED laranxa
  pinMode(12, OUTPUT);  // LED branco
  pinMode(13, OUTPUT);  // LED verde

  // Iniciamos a comunicación co monitor en serie a 9600 baudios
  Serial.begin(9600);
}

void loop() {
  // Estrutura condicional concatenada para acender e apagar o LED correspondente
  if (color == "amarelo") {
    digitalWrite(8, HIGH);
    Serial.print("LED amarelo aceso; ");
    delay(500);
    digitalWrite(8, LOW);
    Serial.println("LED amarelo apagado");
    delay(500);
  } 
  else if (color == "vermello") {
    digitalWrite(9, HIGH);
    Serial.print("LED vermello aceso; ");
    delay(500);
    digitalWrite(9, LOW);
    Serial.println("LED vermello apagado");
    delay(500);
  } 
  else if (color == "azul") {
    digitalWrite(10, HIGH);
    Serial.print("LED azul aceso; ");
    delay(500);
    digitalWrite(10, LOW);
    Serial.println("LED azul apagado");
    delay(500);
  } 
  else if (color == "laranxa") {
    digitalWrite(11, HIGH);
    Serial.print("LED laranxa aceso; ");
    delay(500);
    digitalWrite(11, LOW);
    Serial.println("LED laranxa apagado");
    delay(500);
  } 
  else if (color == "branco") {
    digitalWrite(12, HIGH);
    Serial.print("LED branco aceso; ");
    delay(500);
    digitalWrite(12, LOW);
    Serial.println("LED branco apagado");
    delay(500);
  } 
  else if (color == "verde") {
    digitalWrite(13, HIGH);
    Serial.print("LED verde aceso; ");
    delay(500);
    digitalWrite(13, LOW);
    Serial.println("LED verde apagado");
    delay(500);
  } 
  else {
    // Mensaxe de aviso se o texto non coincide con ningún color válido
    Serial.println("O valor non e valido. Use: amarelo, vermello, azul, laranxa, branco ou verde");
    delay(1000);
  }
}