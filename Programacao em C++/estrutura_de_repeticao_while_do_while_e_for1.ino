/*
While - É uma estrutura de repetição que só executa quando a 
condição for verdadeira.

for - É estrutura de repetição com inicialização, condicao e incremento definidos. Assim como while
só executa se a condicao for verdadeira
*/

/*
a função SETUP() tem o objetivo de inicialiar o programa. Podemos chamar
de configuração
*/

void setup()
{
Serial.begin(9600);
  
 /*Tipos de dados (principais)
  - INT (numero inteiros)
  - LONG (mesmca coisa do int, so que com maior capacidade)
  - STRING (caracteres: alfanumericos e especiais)
  - FLOAT (numeros da casa decimais)
  - BOOL (true e false || verdadeiro ou falso)
 */
  
 //váriavel inicializadora
  
  int contadorwhile = 1; 
  
  while(contadorwhile <= 100){
    Serial.println(contadorwhile);
    contadorwhile+= 2;
  }
  
 
  
  for(int contador = 100; contador <= 1; contador++){
    Serial.println(contador);
  
    
    delay(1000);
    
    
  }
  
}


// a função LOOP() tem o objetivo de repetir várias vezes o programa
void loop()
{
    // sem estruções
}