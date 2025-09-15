// week02_3_mousePressed_serial
import processing.serial.*;  // 使用 USB 的 serial
Serial myPort;  // 宣告 USB 的 Serial
void mousePressed(){
  myPort.write(' ');  // mouse 按下時，就送' '出去
}
void setup(){
  size(400, 400);  
  myPort = new Serial(this, "COM4", 9600);
}
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
