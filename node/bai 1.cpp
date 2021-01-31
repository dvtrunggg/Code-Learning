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
	int data;              // neu bài toán data la so thuc ( diem trung binh,...) -> float; cau truc sinh vien, cong nhan,...(char,...)   
	NODE *pnext;
};

// trong danh sach lien ket don: phan này cho de quan lý
struct LIST{
	NODE *phead;
	NODE *ptail;
};


//khoi tao danh sach lien  ket don ( danh sach nay rong)
void CreateList(LIST* &l)
{
	l.phead = NULL;
	l.ptail = NULL;      // chua co phan tu nào het
}

// hàm tao danh sach lien ket 
NODE *CreateNode(int x)
{
	NODE *p = new NODE();     // cap phat vùng nho cho con tro p
	if(p == NULL) return NULL;
	p->data = x;                  // truyen gia tri x vào data
	p->pnext = NULL;      
	return p;               // tra ve node p vua khoi tao
}

//Them vao dau danh sach lien ket don
void AddHead(LIST *&l, int data)      // &l do se có su thay doi
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
