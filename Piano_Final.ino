int buzzer = 10;

int nota_do = 8;
int re = 7;
int mi = 6;
int fa = 5;
int sol = 4;
int la = 3;
int si = 2;
int Do = 9;

const int potPin = A0;   // Pin del potenciómetro

void setup() {
  
  for(int i = 2; i <= 8; i++){
    pinMode(i, INPUT_PULLUP);
  }

}
void loop() {
  int potValue = analogRead(potPin); // Valor entre 0 y 1023
  float scaleFactor = 1.0; // Factor de escala inicial
  if (potValue < 341) {
    scaleFactor = 0.5; // Octava más baja
  } else if (potValue > 682) {
    scaleFactor = 2.0; // Octava más alta
  }
  for(int i = 2; i <= 9; i++){
    pinMode(i, INPUT_PULLUP);
  }
  while(digitalRead(nota_do)==LOW){
    tone(buzzer,262*scaleFactor,100);
    
      }
      while(digitalRead(re)==LOW){
    tone(buzzer,294*scaleFactor,100);
  
      }
      while(digitalRead(mi)==LOW){
    tone(buzzer,330*scaleFactor,100);
    
      }
      while(digitalRead(fa)==LOW){
    tone(buzzer,349*scaleFactor,100);
    
      }
      while(digitalRead(sol) == LOW){
    tone(buzzer,392*scaleFactor,100);
    
      }
      while(digitalRead(la)==LOW){
    tone(buzzer,440*scaleFactor,100);
    
      }
      while(digitalRead(si)==LOW){
    tone(buzzer,494*scaleFactor,100);
    
      }
      while(digitalRead(Do)==LOW){
    tone(buzzer,523*scaleFactor,100);

      }

      noTone(buzzer);
      


}