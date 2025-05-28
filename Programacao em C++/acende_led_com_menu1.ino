int ledVerde = 13;
int ledAmarelo = 12;
int ledVermelho = 11;

int opcao = -1; 

void setup() {
  
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  Serial.begin(9600);
  Serial.println("Sistema iniciado.");
  
}

void loop() {
  
  do {
    mostrarMenu();

    while (!Serial.available()) {
    }

    opcao = Serial.parseInt(); 

    switch (opcao) {
      
      case 1:
        digitalWrite(ledVerde, HIGH);
        Serial.println("Led Verde ligado");
        break;
      case 2:
        digitalWrite(ledVerde, LOW);
        Serial.println("Led Verde desligado");
        break;
      case 3:
        digitalWrite(ledAmarelo, HIGH);
        Serial.println("Led Amarelo ligado");
        break;
      case 4:
        digitalWrite(ledAmarelo, LOW);
        Serial.println("Led Amarelo desligado");
        break;
      case 5:
        digitalWrite(ledVermelho, HIGH);
        Serial.println("Led Vermelho ligado");
        break;
      case 6:
        digitalWrite(ledVermelho, LOW);
        Serial.println("Led Vermelho desligado");
        break;
      case 7:
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledAmarelo, HIGH);
        digitalWrite(ledVermelho, HIGH);
        Serial.println("Todos os LEDs ligados");
        break;
      case 8:
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledAmarelo, LOW);
        digitalWrite(ledVermelho, LOW);
        Serial.println("Todos os LEDs desligados");
        break;
      case 0:
        Serial.println("Saindo do menu...");
        break;
      default:
        Serial.println("Opcao invalida. Tente novamente.");
      
    }

    delay(1000);
  } while (opcao != 0);
}

void mostrarMenu() {
  
  Serial.println("\n -- MENU --");
  Serial.println("1 - Ligar Led Verde");
  Serial.println("2 - Desligar Led Verde");
  Serial.println("3 - Ligar Led Amarelo");
  Serial.println("4 - Desligar Led Amarelo");
  Serial.println("5 - Ligar Led Vermelho");
  Serial.println("6 - Desligar Led Vermelho");
  Serial.println("7 - Ligar Todos os LEDs");
  Serial.println("8 - Desligar Todos os LEDs");
  Serial.println("0 - Sair");
  Serial.print("Escolha uma opcao: ");
  
}
