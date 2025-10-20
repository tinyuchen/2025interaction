// week07_1_arduino_blink
// 安裝好後，Select Board 要選剛剛裝置管理員的那個 USB-Serial
// 選好 Board 後，打字搜尋 arduino uno ? 點選(打勾) > 按 OK

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);  // 把第 13 隻腳，能送出資料 OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);  // 發亮
  delay(500);
  digitalWrite(13, LOW);  // 暗掉
  delay(500);
}
