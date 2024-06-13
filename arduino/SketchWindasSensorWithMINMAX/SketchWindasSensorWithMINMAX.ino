#include "DHT.h"        // Biblioteca DHT11
#define dht_type DHT11  //Definir tipo DHT11

int dht_pin = A0;                    // Definir Pino Analogico 0 para sensor DHT
DHT dht_1 = DHT(dht_pin, dht_type);  // Declarar tipo do dht
int pinoSensor = 7;     // Definir Pino Digital do sensor XXXX       

void setup() {
  pinMode(pinoSensor, INPUT);  //Iniciar entrada do Pino do sensor XXXX
  Serial.begin(9600);
  dht_1.begin();
}

void loop() {
  float umidade = dht_1.readHumidity();         // Define variavel Umidade com valor Float da biblioteca DHT
  float temperatura = dht_1.readTemperature();  // Define variavel Temperatura com valor Float da biblioteca DHT
  int fksensor = 1;

  int chave;  

  if (digitalRead(pinoSensor) == LOW) {  // Se o sensor detectar algo.
    chave = 1;                // separa os valores no monitor serial
  } else {                               // Se sensor estiver livre.
    chave = 0;                 // separa os valores no monitor serial
  }

  if (isnan(temperatura) or isnan(umidade)) {  // Se houver algum erro e não devolver os dados em numeros exibe a mensagem:
    Serial.println("Erro ao ler");             // ERRO AO LER
  } else {

// Quarto 1
Serial.print(chave);
Serial.print(",");
Serial.print(umidade + 3);
Serial.print(",");
Serial.print(temperatura + 1);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 2
Serial.print(chave);
Serial.print(",");
Serial.print(umidade + 2);
Serial.print(",");
Serial.print(temperatura + 2);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 3
Serial.print(chave);
Serial.print(",");
Serial.print(umidade + 1);
Serial.print(",");
Serial.print(temperatura + 3);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 4
Serial.print(chave);
Serial.print(",");
Serial.print(umidade + 10);
Serial.print(",");
Serial.print(temperatura + 4);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 5
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 5);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 6
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 6);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 7
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 7);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 8
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 8);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 9
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 9);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 10
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 10);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 11
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 11);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 12
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 1);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 13
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 2);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 14
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 3);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 15
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura - 10);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 16
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura - 9);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 17
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura - 5);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 18
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura - 2);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 19
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura - 1);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 20
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 21
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 4);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 22
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 9);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 23
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 3);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 24
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 2);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 25
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura +6);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 26
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 27
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura - 10);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 28
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 20);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 29
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 5);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 30
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 10);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 31
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 9);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 32
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 2);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 33
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 3);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 34
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 4);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 35
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 5);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 36
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 6);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 37
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura - 7);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 38
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 8);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 39
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 3);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 40
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 4);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 41
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 4);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 42
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 2);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 43
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 3);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 44
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura - 4);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 45
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 46
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 47
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 48
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 1);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 49
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 2);
Serial.print(",");
Serial.println(fksensor++);

// Quarto 50
Serial.print(chave);
Serial.print(",");
Serial.print(umidade);
Serial.print(",");
Serial.print(temperatura + 1);
Serial.print(",");
Serial.println(fksensor++);

  }

  delay(10000);  // Tempo para consultar os dados novamente
}