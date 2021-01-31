#include <stdio.h>
#include <iostream>
using namespace std;
 main()
{
    int traudungtoida=20;// So trau dung toi da 100/5 
    int traunamtoida=33;// So trau nam toi da 100/3 
    int dem = 0;
    int i,j;
    for (i=1;i<=traudungtoida;i++)
		for (j=1;j<=traunamtoida;j++)
        {    
            if ((5*i+3*j+(100-i-j)/3)==100 && (100-i-j)%3==0)
            {
                cout <<"\nPhuong an "<<dem + 1<<endl;
				cout <<"So trau dung la: "<<i;
                cout <<"So trau nam la: "<<j;
                cout <<"So trau gia la: "<<100-i-j;
                dem+=1;
            }
        }
    cout <<"Tong cong co "<< dem <<" phuong an."<<endl;
}  
