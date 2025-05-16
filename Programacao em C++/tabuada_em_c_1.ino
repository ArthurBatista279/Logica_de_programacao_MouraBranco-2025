void setup() 

{
  Serial.begin(9600);

  // Acao do usuario, no caso ele solicita digitando um num de 1 a 10
   Serial.println("Escolha a tabuada -- de 1 a 10 --: ");
     while (Serial.available() == 0) { // Espera o usuario digitar o numero
    
  }
  int numero = Serial.parseInt();  // Leitura do numero digitado

  // Aqui ele verifica se o numero colocado é de 1 a 10
  // Pode ser alterado caso o usuario queira 1 a 1000 por exemplo
  if (numero >= 1 && numero <= 10) {
    for (int i = 1; i <= 10; i++) {
      Serial.print(numero);
      Serial.print(" x ");
      Serial.print(i);
      Serial.print(" = ");
      Serial.println(numero * i);
      
      delay(500);
    }
  } else {
    Serial.println("Numero escolhido e invalido, digite novamente");// Caso o genio digite numeros extramamentes grandes ou letras o programa avisa com uma mensagem de erro
    
    
  }
}

void loop() 
{
 // Sem nada   
}
