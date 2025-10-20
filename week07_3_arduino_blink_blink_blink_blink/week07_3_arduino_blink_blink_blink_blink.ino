// week07_3_arduino_blink_blink_blink_blink
// 修改 week07_2_arduino_blink_blink，只是再多接兩支 LED
// 使用麵包板，每 5 個洞是一板，所以用 GND 接之後
// 短腳接 GND () ，長腳接 13
// 短腳接 GND ，長腳接 12
// 短腳接 GND ，長腳接 11
// 短腳接 GND ，長腳接 10

void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);  // 把第 10 隻腳，能送出資料 OUTPUT
  pinMode(11, OUTPUT);  // 把第 11 隻腳，能送出資料 OUTPUT
  pinMode(12, OUTPUT);  // 把第 12 隻腳，能送出資料 OUTPUT
  pinMode(13, OUTPUT);  // 把第 13 隻腳，能送出資料 OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=10; i<=13; i++){
    digitalWrite(13, LOW);  // 暗掉
    digitalWrite(i-1, LOW);  // 暗掉
    digitalWrite(i, HIGH);  // 發亮
    delay(500);
  }
}
