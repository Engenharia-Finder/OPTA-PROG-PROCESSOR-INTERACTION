#include <RPC.h>

void ativarSaida() {
  digitalWrite(D0, HIGH); // Ativa a saída D0
  digitalWrite(LED_D0, HIGH); // Ativa o LED_D0
}

void desativarSaida() {
  digitalWrite(D0, LOW);    // Desativa a saída D0
  digitalWrite(LED_D0, LOW); // Desativa o LED_D0
}

void setup() {
  pinMode(D0, OUTPUT); // Configura D0 como saída
  pinMode(LED_D0, OUTPUT); // Configura o LED_D0 como saída
  RPC.begin();         // Inicializa a comunicação RPC com o Core M7
  
  // Registra a função "ativarSaida" para ser chamada remotamente
  RPC.bind("ativarSaida", ativarSaida);
  // Registra a função "desativarSaida" para ser chamada remotamente
  RPC.bind("desativarSaida", desativarSaida);
}

void loop() {
  // Nada necessário aqui, a ação será realizada via RPC
}