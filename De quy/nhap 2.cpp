#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *prev;
   struct node *next;
};

struct node *head = NULL;
struct node *last = NULL;

struct node *current = NULL;

//hien thi list
void printList() {
   struct node *ptr = head;

   printf("\n[head] <=>");
   //bat dau tu phan dau cua list
   while(ptr != NULL) {        
      printf(" %d <=>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [last]\n");
}


//tao danh sach lien ket
void insert(int data) {
   // cap phat bo nho cho node moi;
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->prev = NULL;
   link->next = NULL;

   // neu head la trong, tao list moi
   if(head==NULL) {
      head = link;
      return;
   }

   current = head;
   
   // di chuyen toi phan cuoi list
   while(current->next!=NULL)
      current = current->next;
   
   // chen link vao phan cuoi cua list
   current->next = link;
   last = link;
   link->prev = current;
}


void update_data(int old, int new1) {
   int pos = 0;
   
   if(head == NULL) {
      printf("Danh sach lien ket chua duoc khoi tao");
      return;
   } 

   current = head;
   while(current!=NULL) {
      pos++;
         
      if(current->data == old) {
         current->data = new1;
         printf("\nTim thay %d tai vi tri %d, duoc thay the voi %d\n", old, pos, new1);
         return;
      }
         
      if(current->next != NULL)
         current = current->next;
      else
         break;
   }
   printf("%d khong ton tai trong list\n", old);
}


int main() {
   insert(10);
   insert(20);
   insert(30);
   insert(1);
   insert(40);
   insert(56); 

   printList();
   update_data(56, 99);   
   printList();
   
   return 0;
}
