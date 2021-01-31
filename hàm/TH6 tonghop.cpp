/*     danh muc chuc nang
1.so ngto
2.so hoan hao
3.so chinh phuong
4.xem lai menu
0.thoat ctrinh */
#include <math.h>
#include <iostream>
using namespace std;
int songto (int);
int sohoanhao (int);
int sochinhphuong (int);

int songto(int n){
		int dem = 0;
	for (int k = 1; k <= n; k++)
		if (n % k == 0) dem++; 	
	if (dem == 2)
		return 1;
	else 
		return 0;
}
int sohoanhao(int n) {
	int sum = 0;
	for(int i = 1; i<n; i++)
		if (n % i ==0)
			sum += i;
	if (sum == n)
	return 1;
	else 
	return 0;
}

int sochinhphuong (int n){                  // so chinh phuong la so = binh phuong cac so khac: vd 4= 2binh phuong, 16 = 4 binh phuong
	for (int i = 1; i <= n; i++)
	if((float)sqrt(n) == sqrt(n) )return 1;
	else return 0;
	
	
}
void menu (){
	cout<<"------------------------------------------------"<<endl;
	cout<<" 	     Nhap chuc nang ban muon chon:"<<endl;
	cout<<"		  Bam 1 de kiem tra so ng.to"<<endl; ;
	cout<<"		  Bam 2 de kiem tra so hoan hao"<<endl; ;
	cout<<"	  	  Bam 3 de kiem tra so chinh phuong"<<endl; ;
	cout<<"		  Bam 4 de xem lai menu"<<endl; ;
	cout<<"		  Bam 0 de thoat chuong trinh"<<endl; ;
	cout<<" ____________________________________________merci beaucoup:)"<<endl;
}

 main(){
	int chon;
	menu();
	do{
	cout<<"Chon chu nang: "<<endl;
	cin>>chon;
	switch (chon)
	{
		case 1:
			int snt;
			cout<<"Nhap so ngto ban muon ktra: ";
			cin>>snt;
			if (songto(snt) == 1) 
				cout<<snt<<" la so nguyen to. "<<endl;
			else
				cout<<snt<<" khong phai la so ng.to. "<<endl;
			break;
		case 2: 
			int shh;
			cout<<"Nhap so hoan hao ban muon ktra: ";
			cin>>shh;
			if(sohoanhao(shh) == 1) 
				cout <<shh<<" la so hoan hao."<<endl;
			else 
				cout<<shh<<" khong phai la so hoan hao"<<endl;
			break;
		case 3:
			int scp;
			cout<<"Nhap so chinh phuong ban muon ktra: ";
			cin>>scp;
			if (sochinhphuong(scp) == 1) 
				cout<<scp<<" la so chinh phuong"<<endl;
			else 
				cout<<scp<<" ko phai la so chinh phuong"<<endl;
			break;
		case 4:
			menu();
			break;
	}
}
	while (chon!=0);
		cout<<"______Merci pour utiliser______";
	
}
