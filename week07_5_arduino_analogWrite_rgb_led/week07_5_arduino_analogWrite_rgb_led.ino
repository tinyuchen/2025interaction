// week07_5_arduino_analogWrite_rgb_led
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT); // 接最左邊的紅色
  // RGB LED 最長的那條是接地 GND
  pinMode(6, OUTPUT);  // 藍色 (GND 旁邊那個)
  pinMode(5, OUTPUT);  // 綠色 (最外面)
  // (有 PWM 功能，可 0~255 輸出)，要輸出
}  // 這些特別的腳分別是：第 3 、第 5 、第 6 、第 9 、第 10 、第 11，共六個腳。都可控制它的亮按程度

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(6, 0);  // 藍色關掉
  analogWrite(3, 255);  // 最亮的紅色
  delay(500);  // 每 0.5 秒
  analogWrite(3, 0);  // 紅色關掉
  analogWrite(5, 255);  // 最亮的綠色
  delay(500);  // 每 0.5 秒
  analogWrite(5, 0);  // 綠色關掉
  analogWrite(6, 255);  // 最亮的藍色
  delay(500);  // 每 0.5 秒
}
