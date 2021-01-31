#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <iomanip>
#define    Don_gia_A    140000
#define    Don_gia_B    160000
#define    Don_gia_C    180000
#define    Muc_giam     6
#define    Ty_le_giam   0.9  //10%

typedef struct
{
	char  Khach_hang[30] ;
	int   So_ngay_thue   ;
	int  Loai_phong     ;
}Thue_phong ;
void Nhap(Thue_phong  &nguoithue )
{      
	fflush(stdin);
	cout<<"\nNhap ho va ten nguoi thue : ";
	gets(nguoithue.Khach_hang);
	cout<<"Thue bao nhieu ngay : ";
	cin>>nguoithue.So_ngay_thue;
	cout<<"Loai phong thue ";
	cout<<"\nLoai 1 : 140000 , Loai 2 : 160000 , Loai 3 : 180000  : ";
	cin>>nguoithue.Loai_phong;
}
void Nhapds(Thue_phong *thue,int n )
{	for(int i=0;i<n;i++)
	{
		cout<<"\nNhap thong tin nguoi thue thu "<<i+1;
		Nhap(thue[i]);
	}
}
double Tienthue(Thue_phong  nguoithue)
{       
	double tien ;
	switch(nguoithue.Loai_phong)
	{
		case 1 :
			if(nguoithue.So_ngay_thue<Muc_giam)
				tien=nguoithue.So_ngay_thue*Don_gia_A;
			else 
				tien=nguoithue.So_ngay_thue*Ty_le_giam*Don_gia_A;
			break ;
		case 2 :
			if(nguoithue.So_ngay_thue<Muc_giam)
				tien=nguoithue.So_ngay_thue*Don_gia_B;
			else 
				tien=nguoithue.So_ngay_thue*Ty_le_giam*Don_gia_B;
			break;
        case 3 :
		   if(nguoithue.So_ngay_thue<Muc_giam)
		   		tien=nguoithue.So_ngay_thue*Don_gia_C;
		   else 
		   		tien=nguoithue.So_ngay_thue*Ty_le_giam*Don_gia_C;
		   break;
	}
	return tien ;
}

void Xuat(Thue_phong  *thue,int n)
{
	cout<<"\n+-----+------------------------------+-------------------+";
	cout<<"\n| STT |         HO VA TEN            |  SO TIEN PHAI TRA |";
	cout<<"\n+-----+------------------------------+-------------------+";
	for (int i=0;i<n;i++)
	{	
		cout<<"\n|"<<setw(3)<<i+1<<"  | ";
		cout<<setw(28)<<thue[i].Khach_hang<<" |   "<<setw(10)<<Tienthue(thue[i])<<"      |";
		cout<<"\n+-----+------------------------------+-------------------+";
	}
}
void XuatFile(Thue_phong  *thue,int n, char file[100])
{
	fstream f;
	f.open(file, ios::out);
	f<<"\n+-----+------------------------------+-------------------+";
	f<<"\n| STT |         HO VA TEN            |  SO TIEN PHAI TRA |";
	f<<"\n+-----+------------------------------+-------------------+";
	for (int i = 0; i< n; i++)
	{
		f<<"\n|"<<setw(3)<<i+1<<"  | ";
		f<<setw(28)<<thue[i].Khach_hang<<" |   "<<setw(10)<<Tienthue(thue[i])<<"      |";
		f<<"\n+-----+------------------------------+-------------------+";
	}
	f.close();
}
void main()
{   
	int n ;
	Thue_phong   *thue;
	printf("Nhap so nguoi can tinh ");scanf("%d",&n);
	thue=new Thue_phong [n];
	Nhapds(thue,n);
	Xuat(thue,n);
	XuatFile(thue,n,"thuephong.txt");
	delete thue ;
}

