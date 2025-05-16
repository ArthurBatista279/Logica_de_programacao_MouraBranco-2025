/*
  While - É uma estrutura de repetição que só executa a repetição quando a condição for verdadeira q
*/
void setup()
{
  Serial.begin(9600);
  
  // Variavel inicializadora
  /*Tipos de dados (principais)
  - INT (numero inteiros)
  - LONG (mesmca coisa do int, so que com maior capacidade)
  - STRING (caracteres: alfanumericos e especiais)
  - FLOAT (numeros da casa decimais)
  - BOOL (true e false || verdadeiro ou falso)
  */
 int numero = 60;

while (numero <= 101) {
  if ((numero >= 60 && numero <= 80 && numero % 2 == 0) || 
      (numero >= 81 && numero <= 101 && numero % 2 != 0)) {
    Serial.println(numero);
  }

  numero++;
  delay(500);
}

 // aritmético +,-,*,/,%
  /*logico:
  - || (PIPI - OU)
  - && (E COMERCIAL - E
  - ! (PONTO DE EXCLAMAÇÃO - NGAÇÃO/INVERTE)
  
  */
  
  // Variaveis inicializadora 
  }


void loop()
{
}