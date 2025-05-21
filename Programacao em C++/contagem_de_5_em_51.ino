/*Contagem de 5 em 5 - Faça um programa que mostre os números de 0 até 50,
aumentando de 5 em 5 (ex: 0, 5, 10, 15...), usando while.*/

void setup()
{
  Serial.begin(9600);
  
   int numero = 0;
  
  while (numero <=100){
    Serial.println(numero);
    numero += 5;
    
    delay(500);
  
  }
  
}
void loop(){

} 