// File-New (Ctrl+N) 開新的專案

void setup(){
    size(500, 500);
}
void draw(){
  if(keyPressed){
    background(#FF0000);  // red
    textSize(80);
    text(""+key, 100, 100);
  }
}
