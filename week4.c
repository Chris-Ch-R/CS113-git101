#include<stdio.h> // อยากรู้มีlibอะไร ใช้ ไฟล์.h
int addTen(int x)
{ // function prototype ใน() => parameterprofile
        x+=10;
        return x;
}
int addTwenty(); // ประกาศฟังชั่นโปรโทไทป์เฉยๆ แบบนี้ เหมือนการประกาศตัวแปร
int x = 2000;
int main()
{
    int x = 90;
    int y = addTen(x);
    printf("addTen in main = %d\n" , y);
    printf("addTwenty in main = %d\n" , addTwenty());
}
// inplement ตรงนี้
int addTwenty(){
    // ถ้าหาxไๆม่เจอจะไปหาตัวที่เรียกมัน ในc มันจะมาใน  global
    x += 20;
    return x;
}
// memory 
// เมื่อมีการรัน โปรแกรมจะโหลดพวกglobalมาก่อน
// int x = 2000   => 
// เจอsub ฟังชั่น จะทำฟังชั่นก่อน จอง 16 แล้วข้ามไป 20 เลย //จะโดนมาร์กไว้
// addTen(int x) เวลาส่งค่ามา จะก็อปค่า x จากmain พอรีเทิร์น มันจะลบทุกอย่างทิ้ง 
// จะต้องมีการประกาศ int x เรียกใช้ addtwenty(){x = x+20;} แบบนี้ โปรแกรมจะไปหาตัวแปรglobal
// และค่าในตัวแฟรglobalจะเปลี่ยน 
// local ดีกว่า global แต่local จะไม่มีการเก็บค่าdefault
// recursive รีเทิร์น const และ รีเทิร์น ฟังชั่นตัว้ิง 2อย่างเป็นอย่างต่ำ
// 5 = 0101
// 5 >> 2 => 01
// 5 <<2 => 010100
// 5 & 1 => 0101 & 0001 // เหมือนการ modด้วย2
// 