#include "node.h"

// khoi tao 1 danh sách lien ket don ( chua co node nào het)
void CreateList (LIST &l)       // khai báo kieu void: ko can gia tri tra ve
{
	l.p_head = NULL;
	l.p_tail = NULL;
	// cho 2 cái con tro = NULL do chua khoi tao gì het
}
// khoi tao danh sach lien ket don
NODE* CreateNode (int x)   // khai báo kieu NODE: can co return (giong int)
{
	NODE *p = new NODE; // cap phát vùng nho cho node p
	if (p == NULL) return NULL;            // neu cap phát ko thành cong ( bo nho day)
	else
	{
		p->data = x;
		p->p_next = NULL; 
	}
	return p;
	
}

// hàm them NODE vào dau danh sách:
void AddHead (NODE *p, LIST &l )         // l se can cap nhat lai
{
	if(l.p_head == NULL)            // p_head = NULL thì p_tail cung NULL luon, danh sach lien ket rong
		l.p_head = l.p_tail = p;              // node dau = node cuoi và = p ( them vào p)
	else                          // neu danh sach lien ket ko rong
	{
		p->p_next = l.p_head;                     // vd: them node a ( trong hàm kia là p) vào dau node b: con tro p_next node a (p) lien ket voi data node b
		l.p_head = p;								// them gia tri a (p) = data cua node a (p)
		
	}
}

// hàm thêm NODE vào cuoi danh sach:
void AddTail(NODE *p, LIST &l)
{
	if(l.p_head == NULL)
		l.p_head = l.p_tail = p;
	else
	{
		p->p_next = p;
		l.p_tail = p;
	}
}

// hàm xuat data cac node:
void PrintList(LIST l )
{
	for(NODE *p = l.p_head; p !=NULL; p =p->p_next)
	{
		cout<<p->data<<"  ";
	}
}

int MAX (LIST l)
{
	int max = l.p_head->data; // gán max = p_head ( data node dau)
	for(NODE *p = l.p_head->p_next; p!= NULL; p= p->p_next )  // xét tu node thu 2 => *p=l.p_head->p_next
		if(max < p->data) max = p->data;
	return max;
}
