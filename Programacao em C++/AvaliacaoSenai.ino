// Avaliacao de desempenho escolar

//Uma consideração no codigo, eu ia utilizar o Serial.Read(); para limpar o buffer, mas nao coloquei.

int MediaNotaAluno1 = 0;
int MediaNotaAluno2 = 0;
int FrequenciaEscolar = 0;
float media = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // Entrada da primeira nota
  Serial.println("Digite a primeira nota:");
  while (!Serial.available());//Esqueci do !Serial.available na hora de preencher o while
  MediaNotaAluno1 = Serial.parseInt();
  

  // Entrada da segunda nota
  Serial.println("Digite a segunda nota:");
  while (!Serial.available());
  MediaNotaAluno2 = Serial.parseInt();
  

  // Entrada da frequencia
  Serial.println("Digite a frequencia (0 a 100):");
  while (!Serial.available());
  FrequenciaEscolar = Serial.parseInt();
  

  // Calculo da media
  media = (MediaNotaAluno1 + MediaNotaAluno2) / 2.0;

  // Processamento
  if (media == 10 && FrequenciaEscolar == 100) {
    Serial.println("Parabens! Nota maxima!");
  }
  else if (media >= 6 && FrequenciaEscolar >= 75) {
    Serial.println("Aprovado");
  }
  else if (media < 6 && FrequenciaEscolar < 75) {
    Serial.println("Reprovado por nota e frequencia");
  }
  else if (media < 6) {
    Serial.println("Reprovado por nota");
  }
  else if (FrequenciaEscolar < 75) {
    Serial.println("Reprovado por frequencia");
  }
  else {
    Serial.println("Dados invalidos, digite novamente");
  }

   delay(1000);
}




  
  
  
  
