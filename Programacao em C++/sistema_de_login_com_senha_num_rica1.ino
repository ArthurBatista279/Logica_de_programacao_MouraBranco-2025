/*Sistema de login com senha numérica - Faça um programa que peça ao usuário uma
senha de 4 dígitos.*/ 

void setup() {
  Serial.begin(9600);

  int senhaCorreta = 1234;
  int senhaDigitada;
  int tentativas = 0;

  while (true) {
    Serial.println("Digite a senha de 4 digitos:");

    while (Serial.available() == 0) {}
    senhaDigitada = Serial.parseInt();

    if (senhaDigitada == senhaCorreta) {
      Serial.println("Login efetuado com sucesso");
      break;
    } else {
      Serial.println("Senha incorreta. Tente novamente!");
      tentativas++;
    }

    if (tentativas >= 3) {
      Serial.println("Acesso bloqueado por 2 minutos...");
      delay(120000); // Espera 2 minutos (120000 milissegundos)
      tentativas = 0;
    }
  }
}

void loop() {
  // Nada aqui
}
