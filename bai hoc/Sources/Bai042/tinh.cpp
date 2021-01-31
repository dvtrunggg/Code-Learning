#include <iostream.h>
int F1(int n)
{
	int kq=0;
	for (int i=1; i<=n; i++)
		kq += i;
	return kq;
}

int F2(int n)
{
	int kq=0;
    for(int i=1; i<=n; i++)
		if (i%2==1) kq += i;
    return kq;
}

float F3(int n)
{
	float kq=0;
    for (int i=1; i<=n; i++)
		kq+=1/(float)i;
    return kq;
}

float F4(int n)
{
	float kq=0;
    for(int i=1; i<=n; i++)
		if (i%2==1) /* i la so le */
			kq += 1/(float)i;
		else
			kq -= 1/(float)i;
	return kq;
}

void main()
{
	int n;
	cout <<"\n Tinh cac chuoi so \n";
	cout <<"\n Nhap so n: ";
	cin >> n;
	cout <<"\n T1=1+2+3+4+..+N = "<< F1(n);
	cout <<"\n T2=1+3+5+7+..+N = "<< F2(n);
	cout <<"\n T3=1+1/2+1/3+1/4+..+1/N = "<< F3(n);
	cout <<"\n T4=1-1/2+1/3-1/4+..+1/N = "<< F4(n);
}
