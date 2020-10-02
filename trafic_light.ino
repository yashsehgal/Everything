const int pin_MB = 2;
const int pin_KB = 3;
const int pin_HB = 4;
const int pin_MU = 5;
const int pin_KU = 6;
const int pin_HU = 7;
const int pin_MT = 8;
const int pin_KT = 9;
const int pin_HT = 10;
const int pin_MS = 11;
const int pin_KS = 12;
const int pin_HS = 13;
const int BUTTON_1 = A0;
const int BUTTON_2 = A1;
int kondisi1 =0;
int kondisi2 =0;


const int LAMA_KUNING = 1000;
const int LAMA_HIJAU = 4000;

void setup(){
  pinMode(BUTTON_1, INPUT);
  pinMode(BUTTON_2, INPUT);
  pinMode(pin_MB, OUTPUT);
  pinMode(pin_KB, OUTPUT);
  pinMode(pin_HB, OUTPUT);
  pinMode(pin_MU, OUTPUT);
  pinMode(pin_KU, OUTPUT);
  pinMode(pin_HU, OUTPUT);
  pinMode(pin_MT, OUTPUT);
  pinMode(pin_KT, OUTPUT);
  pinMode(pin_HT, OUTPUT);
  pinMode(pin_MS, OUTPUT);
  pinMode(pin_KS, OUTPUT);
  pinMode(pin_HS, OUTPUT);

  //kondisi awal led
  
}

void loop(){
  kondisi1 = digitalRead(BUTTON_1);
  kondisi2 = digitalRead(BUTTON_2);

  if (kondisi1 == LOW){
  digitalWrite(pin_MB, LOW);
  digitalWrite(pin_KB, HIGH);
  digitalWrite(pin_HB, HIGH);
  digitalWrite(pin_MS, LOW);
  digitalWrite(pin_KS, HIGH);
  digitalWrite(pin_HS, HIGH);
  digitalWrite(pin_MT, LOW);
  digitalWrite(pin_KT, HIGH);
  digitalWrite(pin_HT, HIGH);
  digitalWrite(pin_MU, LOW);
  digitalWrite(pin_KU, HIGH);
  digitalWrite(pin_HU, HIGH);
  //barat jalan
  digitalWrite(pin_MB, HIGH );
  digitalWrite(pin_KB, LOW);
  delay(LAMA_KUNING);
  digitalWrite(pin_KB, HIGH );
  digitalWrite(pin_HB, LOW);
  delay(LAMA_HIJAU);
  digitalWrite(pin_HB, HIGH);
  digitalWrite(pin_KB, LOW);
  delay(LAMA_KUNING);
  digitalWrite(pin_KB, HIGH );
  digitalWrite(pin_MB, LOW);
  
  //utara jalan
  digitalWrite(pin_MU, HIGH );
  digitalWrite(pin_KU, LOW);
  delay(LAMA_KUNING);
  digitalWrite(pin_KU, HIGH );
  digitalWrite(pin_HU, LOW);
  delay(LAMA_HIJAU);
  digitalWrite(pin_HU, HIGH);
  digitalWrite(pin_KU, LOW);
  delay(LAMA_KUNING);
  digitalWrite(pin_KU, HIGH );
  digitalWrite(pin_MU, LOW);
  
  //timur jalan
  digitalWrite(pin_MT, HIGH );
  digitalWrite(pin_KT, LOW);
  delay(LAMA_KUNING);
  digitalWrite(pin_KT, HIGH );
  digitalWrite(pin_HT, LOW);
  delay(LAMA_HIJAU);
  digitalWrite(pin_HT, HIGH);
  digitalWrite(pin_KT, LOW);
  delay(LAMA_KUNING);
  digitalWrite(pin_KT, HIGH );
  digitalWrite(pin_MT, LOW);

  //selatan jalan
  digitalWrite(pin_MS, HIGH );
  digitalWrite(pin_KS, LOW);
  delay(LAMA_KUNING);
  digitalWrite(pin_KS, HIGH );
  digitalWrite(pin_HS, LOW);
  delay(LAMA_HIJAU);
  digitalWrite(pin_HS, HIGH);
  digitalWrite(pin_KS, LOW);
  delay(LAMA_KUNING);
  digitalWrite(pin_KS, HIGH );
  digitalWrite(pin_MS, LOW);
  }
  if (kondisi2 == LOW){
  digitalWrite(pin_MB, HIGH);
  digitalWrite(pin_KB, HIGH);
  digitalWrite(pin_HB, HIGH);
  digitalWrite(pin_MS, HIGH);
  digitalWrite(pin_KS, HIGH);
  digitalWrite(pin_HS, HIGH);
  digitalWrite(pin_MT, HIGH);
  digitalWrite(pin_KT, HIGH);
  digitalWrite(pin_HT, HIGH);
  digitalWrite(pin_MU, HIGH);
  digitalWrite(pin_KU, HIGH);
  digitalWrite(pin_HU, HIGH);
  }

}
