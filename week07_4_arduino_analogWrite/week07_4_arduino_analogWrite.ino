// week07_4_arduino_analogWrite
void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT); // 第 11 個 pin 腳 (有 PWM 功能，可 0~255 輸出)，要輸出
}  // 這些特別的腳分別是：第 3 、第 5 、第 6 、第 9 、第 10 、第 11，共六個腳。都可控制它的亮按程度

int a=0;
void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(11, a);  // 亮的程度是 a 的值
  a= (a+1)%256;  // 會再亮一點點
  delay(10);  // 每 0.01 秒
}
