/*
Contagem de 0 a 100 - Faça um programa que mostre no Serial Monitor os números
de 0 até 100 usando while.
*/
void setup()
{
  Serial.begin(9600);

  for (int numero = 0; numero <= 100; numero += 5) {
    Serial.println(numero);
    delay(500);
  }
}

void loop()
{
  // vazio
}
