/*
		---------------       ---------------							---------------
		| data| con tro|--->  | data| con tro|    ..................    | data| con tro|
		----------------       ---------------							---------------
			^		//con tro lien ket giua cac node voi nhau																^
			|																		|
			|																		|
			|																		|
		p_Head																		p_Tail

*/

//danh sach lien ket don
#include<iostream>
using namespace std;

 struct NODE{
	int data;              // neu b�i to�n data la so thuc ( diem trung binh,...) -> float; cau truc sinh vien, cong nhan,...(char,...)   
	NODE *pnext;
};

// trong danh sach lien ket don: phan n�y cho de quan l�
struct LIST{
	NODE *phead;
	NODE *ptail;
};


//khoi tao danh sach lien  ket don ( danh sach nay rong)
void CreateList(LIST* &l)
{
	l.phead = NULL;
	l.ptail = NULL;      // chua co phan tu n�o het
}

// h�m tao danh sach lien ket 
NODE *CreateNode(int x)
{
	NODE *p = new NODE();     // cap phat v�ng nho cho con tro p
	if(p == NULL) return NULL;
	p->data = x;                  // truyen gia tri x v�o data
	p->pnext = NULL;      
	return p;               // tra ve node p vua khoi tao
}

//Them vao dau danh sach lien ket don
void AddHead(LIST *&l, int data)      // &l do se c� su thay doi
{
	if(l.phead == NULL);            // danh sach rong 
		AddHead(p,x);
	
	
	
}


int main()
{
	NODE *p;
	int x;
	cout<<"Nhap  x: ", cin>>x;
//	CreateList(p);
	CreateNode(x);
	return 0;
	
}
