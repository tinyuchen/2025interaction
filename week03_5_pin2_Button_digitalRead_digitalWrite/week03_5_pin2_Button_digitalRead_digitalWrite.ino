// week03_5_pin2_Button_digitalRead_digitalWrite
// Goal: 手動按按鈕，看到燈再慢慢 now 之後，把 now 變亮

void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT_PULLUP);  // 按鈕 Button 是 2 號。若沒按下，就會拉高。
  for(int i=3; i<=13; i++){  // 把 pin 3, 4, 5, ..., 13 都設成 OUTPUT
    pinMode(i, OUTPUT);  // 都是可以發亮的
  }
}

int now = 3;  // 現在發亮的是 pin 3

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2)==LOW){  // 按下去了
    now = now+=1;
    if(now>13) now=3;
    for(int i=3; i<13; i++){
      digitalWrite(i, LOW);  // 全部先清空，變成 LOW 不亮
    }
    digitalWrite(now, HIGH);  // now 負責亮
    delay(500);  // (休息一下)等待 0.5 秒，才不會瘋狂、混亂的運作

  }
}
