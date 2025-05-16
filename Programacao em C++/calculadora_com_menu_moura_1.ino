int escolhaDaOperacao;
float numero1;
float numero2;

void setup()
{
 Serial.begin(9600);
  
  int contador = 0;
  
  do{
   Serial.println("Bem-vindo(a) a calculadora que resolve seu calculos pois eu calculo com calculos e calculos irei calcular");
   Serial.println("Escolha uma das operacoes");
   Serial.println("1 - Somar");
   Serial.println("2 - Dividir");
   Serial.println("3 - Subtrair");
   Serial.println("4 - Multiplicar");
    while(!Serial.available()){}
    escolhaDaOperacao = Serial.parseInt();
    
    
     Serial.println("Para conseguirmos fazer a operacao matematica, precisamos que voce digite 2 numeros");
     Serial.println("Digite o 1o numero");
    while(!Serial.available()){}
    numero1 = Serial.parseFloat();
    
     Serial.println("Digite o 2o numero");
    while(!Serial.available()){}
    numero2 = Serial.parseFloat();
    
    switch(escolhaDaOperacao){
    
    case 1:
          break;
    
    case 2:
          break;
    
    case 3:
          break;
    
    case 4:
          break;
    
    default:
    Serial.println("Opcao invalida! Escolha uma opcao de 1 ao 4.");
   }
  
  Serial.println("Deseja retornar ao menu?");
  while(!Serial.available()){}
  
  if(Serial.readString()== "sim"){
   numero2 = 1;
  }
  else{}
   numero2 = 0;
   Serial.println("Ate breve");
   Serial.println("Caso queira voltar ao menu, reinicie o programa");
  }

  while(contador != 0);
}

void loop()
{
// Sem instrucoes
}