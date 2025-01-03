#include <RPC.h> // Biblioteca para comunicação entre os núcleos

void setup() {
  pinMode(BTN_USER, INPUT); // Configura o BTN_USER
  RPC.begin();       // Inicializa a comunicação RPC com o Core M4
  bootM4();          // Inicializa o Core M4
}

void loop() {
  bool sinal = digitalRead(BTN_USER); // Lê o valor do sinal na entrada A0
  
  // Aqui você pode processar o sinal conforme necessário
  if (sinal == LOW) { // Exemplo: se o sinal for HIGH
    RPC.call("ativarSaida"); // Chama a função "ativarSaida" no Core M4
  }else{
    RPC.call("desativarSaida"); // Chama a função "desativarSaida" no Core M4
  }
  
  delay(100); // Pequeno atraso para evitar sobrecarga
}
