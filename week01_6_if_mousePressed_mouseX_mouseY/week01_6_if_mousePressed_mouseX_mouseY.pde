// 結合 mouse 和 keybroad
void setup(){
  size(500, 500);
}
int x= 200, y= 250;
void draw(){
  background(#FFFFAA);
  // if(mousePressed && x < mouseX && y <mouseY){  // 在矩形的右下角的都可以移動    x += mouseX - pmouseX;
  if(mousePressed && x < mouseX && mouseX < x+100 && y <mouseY && mouseY < y+50){
    x += mouseX - pmouseX;
    y += mouseY - pmouseY;
  }
  rect(x, y, 100, 50);
}
