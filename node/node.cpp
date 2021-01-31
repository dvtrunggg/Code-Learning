#include <iostream>
#include<string.h>
using namespace std;

 typedef struct node{
	int data;
	node *next;                 // con tro de tro den node ke tiep
};

main()
{
	node *head = new node();     // tao và cap phát con tro head
	head -> data = 1;               // head tro den data
	head -> next = NULL;         
	
	node *second = new node();
	second -> data = 2;
	second -> next = NULL;
	
	node *third = new node();
	third -> data = 3;
	third -> next = NULL;
	
	// lien ket cac node lai voi nhau:
	
	head->next = second;
	second->next = third ;
	
	//truy cap vao phan tu nao do:
	cout<<"Truy cap vao phan tu head( ptu dau tien ): ";
	int data = head->data;            // truy cap phan tu head:  head tro den data
	cout<<data<<endl;
	
	// truy cap tat cac cac gia tri co trong struct: phai truy cap tuan tu
	cout<<"truy cap tat cac cac gia tri:"<<endl;
	node *p = head;
	while(p != NULL)
	{
		data = p->data;
		p = p->next;                // khi p = null thi thoat vong lap
		cout<<"->"<<data;
	}
	cout<<endl;
	
}
