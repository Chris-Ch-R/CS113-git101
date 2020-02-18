struct fraction
{
    int n1;
    int n2; // ไม่สามารถ initialize ค่าไใน struct ได้
};
int main(){
struct fraction f1,f2;
    f1.n1 = 25; // กำหนดค่า แบบนี้
    f1.n2 = 10;
    f2 = f1; //เป็นการ  copyทั้ง struct1
}
// ประกาศ struct ได้แบบ นี้
struct S
{
    int a;
}x; // ตัวแปร x struct S
struct 
{
    int a;
}z;// wม่ต้องมีชื่อ tag ก็ได้ แต่จะประกาศ ตัวแปรข้างในที่ชื่อเหมือนกันไมได้
struct S
{
    int a;
}; // เอาไป declaration ภายหลัง

struct B ;
struct A
{
    struct B *partner; // จำเป็นต้องมี pointer เพราะไม่รู้ขนาดของ struct B
    
};
struct B
{
    struct A *partner; // ไม่จำเป็นต้องเป็น pointer เพราะ รู้ขนาดของ A อยู่แล้ว
    
};

//หาก intialize ค่า ไม่ครบ  ค่า default จะเป็น 0ว
//typedef สามารถ สร้างประเภทข้อมูลที่ สามารถเข้าใจได้ง่าย เขียน ให้สั้นลงได้ // ใช้ให้ถูก
// struct ไม่สามารถ compare with == , != ได้ เพราะ ไม่รู้ขนาดที่แน่นอน อาจจมี internal padding
