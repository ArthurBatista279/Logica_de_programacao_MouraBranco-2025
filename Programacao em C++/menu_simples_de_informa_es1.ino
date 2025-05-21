/*Menu simples de informações - Faça um programa que simula um robô de
atendimento. Ele deve mostrar o seguinte menu:*/

void setup() {
  Serial.begin(9600);

  int opcao;

  do {
    Serial.println("Menu de Atendimento:");
    Serial.println("1 - Ver telefone");
    Serial.println("2 - Ver endereco");
    Serial.println("3 - Sair");

    while (Serial.available() == 0) {}
    opcao = Serial.parseInt();

    if (opcao == 1) {
      Serial.println("Telefone: 7070-7070");
    } else if (opcao == 2) {
      Serial.println("Endereco: Rua Niteroi 180 - Sao Caetano do Sul - SP");
    } else if (opcao == 3) {
      Serial.println("Saindo...");
    } else {
      Serial.println("Opcao invalida!");
    }
    

  } while (opcao != 3);
  
}

void loop() {
  // Nao precisa de nada aqui
}
