#include<stdio.h>
#include<stdlib.h>
char name[20];
char number[5];
int main()
{
    //scanf ไม่ใช้ เพราะ มีการใช้ address &
    // printf("Enter Name:");
    // gets(name); // รับchar[]
    // fgets(name,20,stdin);//file get String // 3 parameter (name,Buffer,มาจากสตริงไหน(stdin => standard in))
    // printf("name = %s",name); // bash รับอินพุทก่อนแล้ว ทำเอาท์พุททีหลัง
    // window จะรันถูก // cmd
    fgets(number,5,stdin); // Buffer จะเก็บ input \n\0 เช่น 123 จะเก็บ 123\n\0 
    int i = atoi(number);// Array to Integer // ถ้าแปลงไม่ได้จะเก็บ 0
    // printf("number = %s, i = %d\n",number,i);// array ตัวสุดท้าย จะจอง \0 จะอ่านตั้งแต่ตัวแรกถึง \0 =>ถือเป็นสตริง1ก้อน
    // char a = getchar();
    // getchar();
    // char b = getchar();

    // long l= atol(number);
    // double d = atof(number); //แปลงเป็นfloatได้ ใน lib จะเป็น double
    // puts(number); // String อย่างเดียว ขึ้นบ รรทัดด้วย
    // putchar(100);putchar('a');
    
    // ใช้datatypeอื่นเป็น boolean แทน
    // int found = 0;          // False
    // float isExist = 0.0;    // False
    // char isOnline ='\0';    // False
    // int found = 0;
    // if(0<=i && i <= 10){  // 0<i<10 //ใช้แบบนี้ไม่ได้
    //     printf("if = %d", 0<=i && i <= 10);
    // }else if (i <= 50 || !found)
    // {
    //     printf("else if");
    // }else
    // {
    //     printf("else");
    // }

    //While
    // int count = 0;
    // while (count < i)
    // {
    //     printf("%d\n",count);
    //     count++;
    //     //++count;//การทำงานเร็วกว่า count++ // ถ้าอยู่แบบนี้พอๆกัน ++count ทำก่อนcount++
    //     // infinite loop //ctrl + c // interupt หยุดทุกอย่างที่processอยู่
    // }
    for (int j = 0; j < i; j++)//statement 1 รันครั้งแรกครั้งเดียว 3 // statement2 จะถูกเรียกก่อนทำลูป ถ้าจริงทำข้างใน ไม่ ไม่ทำ เสดแล้วจะทำ statement3 ต่อ
    {
        printf("%d\n",j);
    }
    
    
    // **********10.0/100.0 เปอร์เซ้นให้ใช้แบบนี้*******************
    
    
    
}