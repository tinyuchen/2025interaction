// week03_8_processing_mouse_serial_write_space
import processing.serial.*;  // 使用 Serial 外掛
Serial myPort;
void setup(){
  size(400, 400);
  myPort = new Serial(this, "COM5", 9600);  // (COM 要查自己的電腦)
}
void mousePressed(){
  if(mouseButton==LEFT) myPort.write('b');  // 用USB 傳字母 'b'
  if(mouseButton==RIGHT) myPort.write(' ');  // 用USB 傳字母 ' '
}
void draw(){
  if(mousePressed) background(#FF0000);
  else background(#00FF00);
}
