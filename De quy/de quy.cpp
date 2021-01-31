// n!=n*(n-1)!
//(n-1)!=(n-2)!*(n-1)
//.....
//1!=1
//0!=1

#include <iostream>
using namespace std;
int TinhXn(int);                  // bai 4
int Fibonaci(int);          // bai 3
int tong(int);             // bai 2
int giaithua (int n){           //bai 1: tinh n!
	if (n == 1 || n == 0)                   //day la dk diem dung
		return 1;
	return giaithua(n-1)*n;                // day la ham de quy          ( neu ko co diem dung thi no thanh vong lap vo tan)
}

main(){
	int n;
	cout<<"Nhap n"<<endl;
	cin>>n;
	cout<<n<<"! = "<<giaithua(n)<<endl;
	cout<<"Tong S("<<n<<") = "<<tong(n)<<endl;
	cout<<"So Fibonaci thu("<<n<<") = "<<Fibonaci(n)<<endl;
	cout<<"So hang thu X("<<n<<") = "<<TinhXn(n)<<endl;
}
//de quy tuyen tinh
int tong(int n){               // bai2: tinh tong S=1+2+3+...+n, ta co: s(n) = s(n-1) +n.
	if (n==0) return 0;
	return tong(n-1) +n;
}
int Fibonaci(int n){        //day Fibonaci la day so trc = tong 2 so lien tiep lien sau: f(n) = f(n-1) + f(n-2)
    if(n == 0 || n==1) return 1;                         // f(1) = 1; f(0)=1
	return (Fibonaci(n-2)+Fibonaci(n-1));
}
int TinhXn(int n){             // tinh so hang thu n dc dinh nghia nhu sau: X0=1; Xn=n^2 X0 + (n-1)^2 X1 +.......+1^2 *Xn-1   (n>=0); 
	if(n==0) return 1;                     
	int s = 0;
	for(int i = 1; i<=n; i++)
		s = i*i *TinhXn(n-1);
	return s;
}

