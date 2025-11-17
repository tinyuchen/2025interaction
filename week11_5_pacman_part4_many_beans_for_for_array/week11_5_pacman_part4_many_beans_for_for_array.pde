// week11_5_pacman_part4_many_beans_for_for_array
// 修改自 week11_4_pacman_part3_move_change_direction
// 小精靈張嘴(在動)，且嘴巴的方向 dir 會轉動
void setup(){
  size(600, 600);
}
int x = 300-15, y = 300-15, dx = 0, dy = 0, dir = 0;  // direction
float m = 0, dm = 0.05;  // 嘴巴大小 mouth, 嘴巴改變量 diff of m
void draw(){
  background(0);
  for(int i=0; i<20; i++){  // 左手 i 對應 y 座標
    for(int j=0; j<20; j++){  // 右手 j 對應 x 座標
      fill(255);  // 白色的豆子
      ellipse(15+j*30, 15+i*30 , 5, 5);
    }
  }
  fill(255, 255, 0);  // 黃色
  float m0 = dir * PI/2;  // 幾個「半個 PI」有幾個 90 度
  arc(x, y, 30, 30, m0+m, m0 + PI*2 - m);  // 弧度
  x += dx;  // 改變座標
  y += dy;  // 改變座標
  if(m>=1 || m<0) dm = -dm;  // 正負倒過來
  m += dm;
}
void keyPressed(){
  if(keyCode==LEFT){dx = -1; dy = 0; dir = 2;}  // dir:2 向左 PI
  if(keyCode==RIGHT){dx = +1; dy = 0; dir = 0;}  // dir:0 向右 0 度
  if(keyCode==UP){dx = 0; dy = -1; dir = 3;}  // dir:3 向上 PI*1.5
  if(keyCode==DOWN){dx = 0; dy = +1; dir = 1;}  // dir:1 向下 PI/2
}
