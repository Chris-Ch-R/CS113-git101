#include<stdio.h>
int main(){
    //pointer
    int x = 100;
    // int เก็บค่า pointer เก็บ address
    int q = 0144; // ประกาศเลขฐานอื่น ฐาน8 {%o}

    int w = 0x64; // ฐาน 16 {%x}
    // printf("x = %d\n",x);
    // printf("reference of x = %lu\n", &x); // address = reference
    // printf("reference of x = %p\n", &x);  // %p ได้เลขฐาน 16 00 0x บอกว่าตัวต่อมาคือเลขฐาน 16

    //int number[] = {1, 2, 3, 4, 5, 6};
    // int number[100];
    // int number[100]= {1, 2, 3, 4, 5, 6}; // ถึงประกาศไว้ 6 ก็เข้าถึง index ที่ 1000ได้ และ เปลี่ยนค่าได้ด้วย
    //number[100000] = 200;
    // printf("index 1 = %d\n", number[100000] );
    // printf("reference of &number[1] = %p\n", &number[1000]); 
    // printf("reference of &number[0] = %p\n", &number[0]);
    // printf("reference of number = %p\n", number+1); // ชื่อตัวแปรarrayเก็บaddress ของindex ที่่0 
    //ถ้าnumberเป็นpointer ถ้า +1 เป็นการบวก address int 5ถ้า +1จะ+4
    //number = &number[0] ==> number +1 คิอ &number[1]

    // int number[] = {1, 2, 3, 4, 5, 6};
    // int *ptr = &x;
    // int *arrPtr;
    // arrPtr = number; // ใส่addressให้มัน ครั้งที่ 2 ต้องไม่มีดอกจัน ==> arrPtr ชี้ address ของ number
    // arrPtr += 3; // เข้่าไป indexที่3
    // *arrPtr += 3; // *pointer ค่าของaddressตอนนั้น + 3
    // printf("arrPtr = %p, *arrPtr = %d \n",arrPtr,*arrPtr); // *หน้าaddress จะแอซซายค่ากลับไปด้วย 

    // int number[] = {1, 2, 3, 4, 5, 6};
    // for(int *ptr = number ; ptr <= &number[5]; ptr++){
    //     printf("[%p] = %d\n", ptr , *ptr);

    // }
    // int *ptr2 = number;
    // for(int i = 0; i < 6; i++){
    //     printf("[%p] = %d\n",ptr2 + i,*(ptr2 + i));
    // }
    // char input[100];
    // int count = 0;
    // char c;
    // while ( (c = getchar()) != '\n')
    // {
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0';
    // //char *ptr = input;
    // for(char *ptr = input; *ptr != '\0';ptr++){
    //     printf("%c\n" , *ptr);

    // }

    char s[100];
    int i;
    char c;
    scanf("%d=%c=%s" , &i,&c,s);
    printf("%d--%c--%s" , i,c,s);

}