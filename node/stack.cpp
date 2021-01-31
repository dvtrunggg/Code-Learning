#include<iostream>
using namespace std;
#include<stack>



/*
co che: last in first out: LIFO
 isempty: ktra xem stack có rong hay ko
push: them 1 doi tuong vào dau stack theo co cheo LIFO
pop: lay phan tu dau stack và tra ve gia tri cua cua doi tuong dau stack, dong thoi huy nó di
top: xem thong tin cua stack dau danh sach ma ko huy
*/

// khai báo node
// vd: nhap danh sach stack chua cac so nguyen, sau do xuat ra màn hình....

struct NODE{
	int data; // stack dang chua cac so nguyen
	NODE *pNext;          // con tro lien ket giua các node
};

// khai báo cau truc stack

struct stack{
	NODE *pTop;  // con tro dau de quan ly stack 
};

void KhoiTaoStack(stack &s)
{
	s.pTop = NULL;
}

// ktra stack co rong hay ko

bool IsEmpty(stack s)
{
	if(s.pTop == NULL) return NULL;   
	return true;         // danh sach co phan tu
}

// khoi tao node
NODE *CreateNode(int x)
{
	NODE *p = new NODE();
	if(p == NULL) cout<<"ko du bo nho de cap phat"; return NULL;
	else{
		p->data = x;
		p->pNext = NULL;
	}
}

// them 1 phan tu vào dau stack  
bool Push(stack s, NODE* p)
{
	if(IsEmpty == true) s.pTop =p;
	else{
		p->pNext = s.pTop;
		s.pTop = p;
	}
	return true;
}
// lay phan tu dau cua stack va huy no di

bool Pop(stack &s, ing x)
{
	if(!IsEmpty(s))
	{
		return false;
	}
	else
	{
		NODE *p = s.pTop;
		x = p->data;
		s.pTop = s.pTop->pNext;
		delete p;
	}
	return true
}
