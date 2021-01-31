#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <iomanip>
#define file_LopHoc   "lophoc.txt"
using namespace std;
typedef struct LopHoc
{
	char MaLop[50];
	char TenLop[50];
};
typedef struct MonHoc
{
	char MaMon[10];
	char TenMon[100];
	int SoTinChiLyThuyet;
	int SoTinChiThucHanh;
};
typedef struct HocPhi
{
	double DonGiaLyThuyet;
	double DonGiaThucHanh;	
};
typedef struct SinhVien
{
	char MSSV[10];
	char HoTen[50];
	char MaLop[10];
	char Nganh[100];
	int NamVaoTruong;	
};
typedef struct DangKyMonHoc
{
	char MSSV[10];
	char MaMon[10];
};
/*******************************QUAN LY LOP HOC**********************************************/
void Menu_LopHoc ()
{
	cout <<"******QUAN LY LOP HOC******"<<endl;
	cout <<"\t1. Them lop hoc"<<endl;
	cout <<"\t2. Xoa lop hoc"<<endl;
	cout <<"\t3. Cap nhat lop hoc"<<endl;
	cout <<"\t4. Xem danh sach lop hoc"<<endl;
	cout <<"\t0. Thoat"<<endl;
}
void NhapLopHoc(LopHoc dsLop[])
{
	int n;
	cout<<"\nNhap so luong lop: ";
	cin>>n;
	fstream f;
	f.open(file_LopHoc, ios::out| ios::app);
	for (int i = 0; i<n ; i++)
	{
		fflush(stdin);
		cout<<"Ma lop: ";
		gets(dsLop[i].MaLop);
		f<<dsLop[i].MaLop<<endl;
		fflush(stdin);
		cout<<"Ten lop: ";
		gets(dsLop[i].TenLop);
		f<<dsLop[i].TenLop<<endl;
	}
	f.close();
}
void XuatDanhSachLopHoc(LopHoc dsLopHoc[100], int n)
{
	cout <<"Danh dach lop:\n";
	for (int i = 0; i<n ; i++)
	{
		cout<<dsLopHoc[i].MaLop<<"\t"<<dsLopHoc[i].TenLop<<endl;
	}
}
void XuatLopHoc()
{
	fstream f;
	f.open(file_LopHoc, ios::in);
	char content[50];
	//luu file tung dong, moi lan doc chung ta doc 2 lan 
	//va de xuat MaLop va TenLop tren 1 dong
	int flag = 1;
	while (!f.eof())
    {
		f.getline(content, 50);
		//cu doc 2 dong chung ta xuat xuong dong 1 lan
		if(flag%2==0)
			cout << content << endl;
		else
			cout << content <<"\t";
		flag++;
    } 
	f.close();	
}

void CapNhatLopHoc()
{
	//doc file len gan vao dsLopHoc
	//Sau do thao tac tren mang
	//ghi moi xuong file
	LopHoc dsLopHoc[100];
	fstream f;
	f.open(file_LopHoc, ios::in);
	char content[50];
	int count = 0;
	int flag = 1;
	while (!f.eof())
    {
		f.getline(content, 50);
		if(flag%2!=0)
			dsLopHoc[count].MaLop = content;
		else
			dsLopHoc[count].TenLop = content;
		if(flag % 2 == 0)
			count++;
		flag ++;	
    } 
	f.close();
	
	XuatDanhSachLopHoc(dsLopHoc,count);
	
	//Ket thuc doc file chung ta co danh sach lop
	//moi thao tac tren danh sach lop
	char TenLopCu[50];
	char TenLopMoi[50];
	cout <<"Nhap ten lop can cap nhat: ";	
	gets(TenLopCu);
	cout <<"Nhap ten lop moi: ";	
	gets(TenLopMoi);
	for (int k = 0; k<count ; k++)
	{
		if(strcmp(dsLopHoc[k].TenLop,TenLopCu)==0)
			strcpy(dsLopHoc[k].TenLop,TenLopMoi);
	}
	cout <<"Cap nhat thanh cong"<<endl;
	//luu xuong file -> xoa het luu moi
	f.open(file_LopHoc, ios::out);
	for (int k = 0; k<count ; k++)
	{
		f<<dsLopHoc[k].MaLop<<endl;
		f<<dsLopHoc[k].TenLop<<endl;
	}
	f.close();
}

void XoaLopHoc()
{
	//doc file len gan vao dsLopHoc
	//Sau do thao tac tren mang
	//ghi moi xuong file
	LopHoc dsLopHoc[100];
	fstream f;
	f.open(file_LopHoc, ios::in);
	char content[50];
	int count = 0;
	int flag = 1;
	while (!f.eof())
    {
		f.getline(content, 50);
		if(flag%2!=0)
			dsLopHoc[count].MaLop = content;
		else
			dsLopHoc[count].TenLop = content;
		if(flag % 2 == 0)
			count++;
		flag ++;	
    } 
	f.close();
	
	XuatDanhSachLopHoc(dsLopHoc,count);
	
	//Ket thuc doc file chung ta co danh sach lop
	//moi thao tac tren danh sach lop
	char MaLop[50];
	cout <<"Nhap ma lop can xoa: ";	
	gets(MaLop);
	for (int k = 0; k<count ; k++)
	{
		if(strcmp(dsLopHoc[k].MaLop,MaLop)==0)
		{
			// xoa tai vi tri nay
			for (int j = k; j<count;j++)
				dsLopHoc[j] = dsLopHoc[j+1];
			count -- ;
		}
	}
	cout <<"Cap nhat thanh cong"<<endl;
	//luu xuong file -> xoa het luu moi
	f.open(file_LopHoc, ios::out);
	for (int k = 0; k<count ; k++)
	{
		f<<dsLopHoc[k].MaLop<<endl;
		f<<dsLopHoc[k].TenLop<<endl;
	}
	f.close();
}
/*************************************KET THUC QUAN LY LOP HOC*****************************************/

/******************************************QUAN LY MON HOC*********************************************/
void Menu_MonHoc ()
{
	cout <<"******QUAN LY MON HOC******"<<endl;
	cout <<"\t1. Them mon hoc"<<endl;
	cout <<"\t2. Xoa mon hoc"<<endl;
	cout <<"\t3. Sua mon hoc"<<endl;
	cout <<"\t4. Xem danh sach mon hoc"<<endl;
	cout <<"\t5. Luu danh sach mon hoc vao file"<<endl;
	cout <<"\t0. Thoat"<<endl;
}
void Menu_HocPhi ()
{
	cout <<"******QUAN LY HOC PHI******"<<endl;
	cout <<"\t1. Xem don gia"<<endl;
	cout <<"\t2. Sua don gia"<<endl;
	cout <<"\t3. Luu don gia vao file"<<endl;
	cout <<"\t0. Thoat"<<endl;
}
void Menu ()
{
	cout <<"**********QUAN LY SINH VIEN DANG KY MON HOC**********"<<endl;
	cout <<"\t1. Quan ly lop hoc"<<endl;
	cout <<"\t2. Quan ly mon hoc"<<endl;
	cout <<"\t3. Quan ly hoc phi"<<endl;
	cout <<"\t4. Quan ly sinh vien"<<endl;
	cout <<"\t5. Dang ky mon hoc"<<endl;
	cout <<"\t0. Thoat chuong trinh"<<endl;
	cout <<"\t\tChon chuc nang: ";
}
void main()
{
	int flag;
	Menu();
	while(1)
	{	
		cin>>flag;
		if (flag == 0) 
	 		exit(0);
		else
		{
			switch(flag)
			{
				case 1: 
						{
							int f;
							Menu_LopHoc();
							while(1)
							{
								cout<<"Chon chuc nang: ";
								cin>>f;
								if (f ==0)
								{
									Menu();
									break;
								}
								else
								{
									switch(f)
									{
										case 1:
											{
												LopHoc dsLopHoc[100];
												NhapLopHoc(dsLopHoc);
											//	cout <<"1.1"<<endl;
												break;
											}
										case 2:
											{
												XoaLopHoc();
											//	cout <<"1.2"<<endl;
												break;
											}
										case 3:
											{
											 	CapNhatLopHoc();
										 	//	cout <<"1.3"<<endl;
												break;
											}
										case 4:
											{
												XuatLopHoc();
											//	cout <<"1.4"<<endl;
												break;
											}
									}
								}
							}
						}
						break;
				case 2: 
						{
							int f;
							Menu_MonHoc();
							while(1)
							{
								cout<<"Chon chuc nang: ";
								cin>>f;
								if (f ==0)
								{
									Menu();
									break;
								}
								else
								{
									switch(f)
									{
										case 1:
											{
												cout <<"2.1"<<endl;
												break;
											}
										case 2:
											{
												cout <<"2.2"<<endl;
												break;
											}
										case 3:
											{
												cout <<"2.3"<<endl;
												break;
											}
										case 4:
											{
												cout <<"2.4"<<endl;
												break;
											}
										case 5:
											{
												cout <<"2.5"<<endl;
												break;
											}
										
									}
								}
							}
						}
						break;
				case 3: 
						{
							int f;
							Menu_HocPhi();
							while(1)
							{
								cout<<"Chon chuc nang: ";
								cin>>f;
								if (f ==0)
								{
									Menu();
									break;
								}
								else
								{
									switch(f)
									{
										case 1:
											{
												cout <<"3.1"<<endl;
												break;
											}
										case 2:
											{
												cout <<"3.2"<<endl;
												break;
											}
										case 3:
											{
												cout <<"3.3"<<endl;
												break;
											}
									}
								}
							}
						}
						break;
			}
			//het switch
		}
		//het if
	}
	//het wile
}
