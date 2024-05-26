//プロジェクト名： Arduino 音階装置、 
// 開発者：大好洪史、 開発日：07/15/2023、 
// 使用言語：C++、 
// 詳細：ドから１オクターブ先のドまでの音を行き来します。
// Status：Complete


#include "pitches.h";

// 音階を配列にて格納
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6
};

int switchPin = 5;
int buzzerPin = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(switchPin, INPUT);


}

void loop() {
  int switchState = digitalRead(switchPin);

  while (switchState == LOW) {
    tone(buzzerPin, melody[0], 200); // ド
    delay(500);
    tone(buzzerPin, melody[1], 200); // レ
    delay(500);
    tone(buzzerPin, melody[2], 200); // ミ
    delay(500);
    tone(buzzerPin, melody[3], 200); // ファ
    delay(500);
    tone(buzzerPin, melody[4], 200); // ソ
    delay(500);
    tone(buzzerPin, melody[5], 200); // ラ
    delay(500);
    tone(buzzerPin, melody[6], 200); // シ
    delay(500);
    tone(buzzerPin, melody[7], 200); // ド
    delay(2000);

    tone(buzzerPin, melody[7], 200); // ド
    delay(500);
    tone(buzzerPin, melody[6], 200); // シ
    delay(500);
    tone(buzzerPin, melody[5], 200); // ラ
    delay(500);
    tone(buzzerPin, melody[4], 200); // ソ
    delay(500);
    tone(buzzerPin, melody[3], 200); // ファ
    delay(500);
    tone(buzzerPin, melody[2], 200); // ミ
    delay(500);
    tone(buzzerPin, melody[1], 200); // レ
    delay(500);
    tone(buzzerPin, melody[0], 200); // ド
    delay(500);

    switchState = digitalRead(switchPin);

  }

}
