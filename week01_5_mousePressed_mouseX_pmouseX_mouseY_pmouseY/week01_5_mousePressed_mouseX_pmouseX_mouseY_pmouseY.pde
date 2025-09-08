// 結合 mouse 和 keybroad
void setup(){
  size(500, 500);
}
int x= 200, y= 250;
void draw(){
  background(#FFFFAA);
  if(mousePressed){  // 不管有無壓到 rect 四邊形，都能移動它
    x += mouseX - pmouseX;
    y += mouseY - pmouseY;
  }
  rect(x, y, 100, 50);
}
