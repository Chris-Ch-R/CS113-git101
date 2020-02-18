//6210402381 Chayangkun Rittidech
#include<stdio.h>
#include<stdlib.h>
 struct node
{
    int data;
    struct node *next;
};
void swap(struct node *a, struct node *b) 
{ 
    int temp = a->data; 
    a->data = b->data; 
    b->data = temp; 
} 
int main(){
    struct node * head = NULL,*tmp , *node2;
    struct node *ptr1; 
    struct node *lptr = NULL;
    int n;
    int check;
    head = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&n);
    head->data = n;
    head->next = NULL;
    tmp = head;
    while (1)
    {
        scanf("%d",&n);
        if(n == -1)
            break;
        node2 = (struct node*)malloc(sizeof(struct node));
        
        node2->data = n;
        node2->next = NULL;
        tmp->next = node2;
        tmp = tmp->next;
    }
    do
    {
        check = 0;
        ptr1 = head;
        while (ptr1->next != lptr) 
        { 
            if (ptr1->data > ptr1->next->data) 
            {  
                swap(ptr1, ptr1->next); 
                check = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } while (check);

    for(;head;head = head->next){
       printf("%d\n",head->data);
   }
    
}
