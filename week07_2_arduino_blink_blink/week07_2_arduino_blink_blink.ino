// week07_2_arduino_blink_blink
// 短腳接 GND ，長腳接 13
// 短腳接 GND ，長腳接 12

void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);  // 把第 12 隻腳，能送出資料 OUTPUT
  pinMode(13, OUTPUT);  // 把第 13 隻腳，能送出資料 OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);  // 發亮
  delay(500);
  digitalWrite(13, LOW);  // 暗掉
  digitalWrite(12, HIGH);  // 發亮
  delay(500);
  digitalWrite(12, LOW);  // 暗掉
}
