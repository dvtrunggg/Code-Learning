#include <iostream>
using namespace std;

 struct NODE{
	int data;                        // data là du lieu trong 1 node ( int khi data là so nguyen,...)
	NODE* p_next;            // con tro: point next: con tro lien kiet giua cac node voi nhau
};

struct LIST{                // dùng LIST de chay ctrinh de hon, ko co van okk
	NODE* p_head;              // node dau
	NODE* p_tail;               // node cuoi
};



void CreateList (LIST &l);
NODE* CreateNode (NODE data);
void AddHead (NODE *p, LIST &l );
void AddTail(NODE *p, LIST &l);
void PrintList(LIST l );
int MAX (LIST l);
