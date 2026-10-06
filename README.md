# 🔢 Serial Counter with Welcome Message

> **Arduino Project #14** — عداد تصاعدي يطبع أرقاماً في Serial Monitor كل 1.3 ثانية

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Level](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)](https://github.com/S-mohannad)

---

## 📋 Description

مشروع يستخدم Serial Monitor لعرض عداد تصاعدي:

- عند التشغيل يطبع رسالة ترحيب "hello everyone..."
- يبدأ بطباعة الأرقام من 0 ويزيد بمقدار 1 كل دورة
- كل رقم يظهر بعد تأخير **1.3 ثانية**
- العد يستمر إلى ما لا نهاية

---

## 🔌 Circuit

لا يحتاج مكونات خارجية — يعمل بـ Arduino وحده عبر USB.

---

## 💡 Concepts Used

- `Serial.begin()` — فتح اتصال Serial بسرعة 9600 baud
- `Serial.println()` — طباعة نص أو رقم مع سطر جديد
- متغير عام `x` — يُهيأ بـ 0 ويزيد بمقدار 1 كل دورة (`x = x + 1`)
- `delay()` — التحكم بسرعة ظهور الأرقام

---

## 📊 Behavior

| المرحلة | الحدث |
|---------|-------|
| البداية | يطبع "hello everyone..." مرة واحدة |
| كل 1.3 ثانية | يطبع الرقم الحالي ثم يزيده بـ 1 |
| إلى الأبد | 0 → 1 → 2 → 3 → ... |

---

## 🔗 Code

```cpp
int x = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("hello everyone...");
}

void loop() {
  Serial.println(x);
  x = x + 1;
  delay(1300);
}
```

---

## 🔧 How to Run

1. افتح **Arduino IDE**
2. وصّل Arduino بالكمبيوتر عبر USB
3. انسخ الكود والصقه في المحرر
4. اختر **Board:** Arduino UNO
5. اختر **Port** الصحيح
6. اضغط ⬆️ **Upload**
7. افتح **Serial Monitor** (9600 baud)
8. شاهد الأرقام تظهر واحداً تلو الآخر

---

## 👨‍💻 Author

**S-mohannad** — [@S-mohannad](https://github.com/S-mohannad)
