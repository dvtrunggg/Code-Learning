#include "node.h"

// khoi tao 1 danh s�ch lien ket don ( chua co node n�o het)
void CreateList (LIST &l)       // khai b�o kieu void: ko can gia tri tra ve
{
	l.p_head = NULL;
	l.p_tail = NULL;
	// cho 2 c�i con tro = NULL do chua khoi tao g� het
}
// khoi tao danh sach lien ket don
NODE* CreateNode (int x)   // khai b�o kieu NODE: can co return (giong int)
{
	NODE *p = new NODE; // cap ph�t v�ng nho cho node p
	if (p == NULL) return NULL;            // neu cap ph�t ko th�nh cong ( bo nho day)
	else
	{
		p->data = x;
		p->p_next = NULL; 
	}
	return p;
	
}

// h�m them NODE v�o dau danh s�ch:
void AddHead (NODE *p, LIST &l )         // l se can cap nhat lai
{
	if(l.p_head == NULL)            // p_head = NULL th� p_tail cung NULL luon, danh sach lien ket rong
		l.p_head = l.p_tail = p;              // node dau = node cuoi v� = p ( them v�o p)
	else                          // neu danh sach lien ket ko rong
	{
		p->p_next = l.p_head;                     // vd: them node a ( trong h�m kia l� p) v�o dau node b: con tro p_next node a (p) lien ket voi data node b
		l.p_head = p;								// them gia tri a (p) = data cua node a (p)
		
	}
}

// h�m th�m NODE v�o cuoi danh sach:
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

// h�m xuat data cac node:
void PrintList(LIST l )
{
	for(NODE *p = l.p_head; p !=NULL; p =p->p_next)
	{
		cout<<p->data<<"  ";
	}
}

int MAX (LIST l)
{
	int max = l.p_head->data; // g�n max = p_head ( data node dau)
	for(NODE *p = l.p_head->p_next; p!= NULL; p= p->p_next )  // x�t tu node thu 2 => *p=l.p_head->p_next
		if(max < p->data) max = p->data;
	return max;
}
