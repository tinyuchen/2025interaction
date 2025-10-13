// week06_1_sound_library_SoundFile_play
// Sketch > Library > ManageLibraries, 找 Sound 並安裝
// File > Example > Libraries 核心函式庫 > Sound > soundfile > SimplePlayback
// 參考這個範例有聲音、相關函式可學習參考
import processing.sound.*;  // 使用聲音的外掛模組
SoundFile sound;  // 宣告 SoundFile 物件變數
void setup(){
  size(500, 400);  // 視窗大小
  sound = new SoundFile(this, "music.mp3");  // 將音檔設定好
  // 將老師給的音檔 (music.mp3) 拉進程式
  sound.play();  // 播放聲音
}
void draw(){
  
}
