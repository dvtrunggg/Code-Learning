#include<iostream.h>
void main()
{
	int a[5]={4,6,3,8,9},S1=0, S2=0, S3=0, i;
	cout<<"Mang: "<<endl;
	for(i=0; i<5; i++)
		cout <<"a["<<i<<"]="<<a[i]<<endl;
	for(i=0; i<5; i++)
		S1 += a[i];
	cout<<"\nTong mang: "<<S1;
	for(i=0; i<5; i++)
		if(a[i]%2==0) S2+=a[i];
	cout<<"\nTong mang chan: "<<S2;
	for(i=4; i>=0; i--)
		if(a[i]%2) S3+=a[i];
	cout<<"\nTong mang le: "<<S3<<endl;
}

