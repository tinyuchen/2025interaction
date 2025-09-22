// week03_8_arduino_beep_beep_Serial_read
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

int beep = 1;  // 一開始會 beep 嗶嗶叫
void SerialEvent(){
  while(Serial.available()){
    char now = Serial.read();
    if(now==' ') beep = 0;  // 空白字母:不叫
    if(now=='b') beep = 1;  // 字母 'b' ：叫
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if(beep==1){
    tone(8, 800, 200);
    delay(1000);
  }

}
