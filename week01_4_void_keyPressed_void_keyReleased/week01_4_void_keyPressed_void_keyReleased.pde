void setup(){
  size(500, 500);
}
int x=200, y=250, dx=0, dy=0;
void draw(){
  background(#FFFFAA);  // 淡黃色
  rect(x, y, 100, 50);  // 座標，畫方塊
  /*
  // 無法同時按兩個鍵，斜角走
  if(keyPressed && keyCode == LEFT) x-=3;
  if(keyPressed && keyCode == UP) y-=3;
  */
  x+=dx;
  y+=dy;
}
void keyPressed(){ // 按下鍵時
  if(keyCode==LEFT) dx = -3;
  if(keyCode==RIGHT) dx = +3;
  if(keyCode==UP) dy = -3;
  if(keyCode==DOWN) dy = +3;
}
void keyReleased(){ //放開鍵時
  if(keyCode==LEFT) dx = 0;
  if(keyCode==RIGHT) dx = 0;
  if(keyCode==UP) dy = 0;
  if(keyCode==DOWN) dy = 0;
}
