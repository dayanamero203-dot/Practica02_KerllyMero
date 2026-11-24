/*
Programa que permite escoller cal dos 6 LEDs se acende e apaga a intervalos
de 500 ms en función dunha variable textual de tipo String, lida dende
o monitor en serie de Arduino.

Autor: Kerlly
Data: Novembro 2026
*/

// Variable global para gardar o texto recibido polo porto serie
String color = ""; 

void setup() {
  // Configuramos os 6 pins dixitais (do 8 ao 13) como saídas
  pinMode(8, OUTPUT);   // LED amarelo
  pinMode(9, OUTPUT);   // LED vermello
  pinMode(10, OUTPUT);  // LED azul
  pinMode(11, OUTPUT);  // LED laranxa
  pinMode(12, OUTPUT);  // LED branco
  pinMode(13, OUTPUT);  // LED verde

  // Iniciamos a comunicación serie e pedimos un color ao usuario
  Serial.begin(9600);
  Serial.println("Escribe un color (amarelo, vermello, azul, laranxa, branco, verde):");
}

void loop() {
  // Comprobamos se hai datos dispoñibles no monitor en serie
  if (Serial.available() > 0) {
    color = Serial.readString(); // Lemos a cadea de texto introducida
    color.trim();                // Eliminamos espazos ou saltos de liña ocultos ao pulsar Enter
  }

  // Bifurcación para controlar o acendido/apagado de cada LED segundo o texto lido
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
  else if (color != "") {
    // Só mostra erro se o usuario escribiu algo distinto aos 6 colores
    Serial.println("O valor da variable non e amarelo, vermello, azul, laranxa, branco ou verde");
    delay(1000);
  }
}