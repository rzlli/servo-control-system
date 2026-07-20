#include <Servo.h>

// تعريف 4 محركات سيرفو
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

void setup() {
  // توصيل السيرفو بالأرادوينو ( 9, 10, 11, 6)
  myservo1.attach(9);
  myservo2.attach(10);
  myservo3.attach(11);
  myservo4.attach(6);
}

void loop() {
  unsigned long startTime = millis(); // تسجيل وقت بداية الـ Sweep

  // حركة Sweep لمدة ثانيتين
  while (millis() - startTime < 2000) {
    for (int pos = 0; pos <= 180; pos += 1) {
      myservo1.write(pos);
      myservo2.write(pos);
      myservo3.write(pos);
      myservo4.write(pos);
      delay(15);
    }
    for (int pos = 180; pos >= 0; pos -= 1) {
      myservo1.write(pos);
      myservo2.write(pos);
      myservo3.write(pos);
      myservo4.write(pos);
      delay(15);
    }
  }

  // بعد انتهاء ثانيتين، تثبيت جميع المحركات عند 90 درجة
  myservo1.write(90);
  myservo2.write(90);
  myservo3.write(90);
  myservo4.write(90);

  // إيقاف الـ loop لكي لا تتكرر الحركة إلا عند إعادة التشغيل
  while(true); 
}
