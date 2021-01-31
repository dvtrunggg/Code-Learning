#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
typedef struct  THI_SINH
{
	char   So_bao_danh[10] ;
	char   Ho_va_ten[50]   ;
	int    Phong_thi       ;
	float  Diem_van        ;
	float  Diem_toan       ;
	int    Ket_qua         ;
};
/**********************Prototype*********************************************/
void Nhap_thi_sinh(THI_SINH &ts);
void Nhap_danh_sach_thi_sinh(THI_SINH Ts[],int So_thi_sinh);
float Diem_trung_binh(THI_SINH ts);
float Diem_trung_binh_cac_ts(THI_SINH Ts[],int So_thi_sinh);
float Diem_trung_binh_phong_thi(THI_SINH Ts[],int So_thi_sinh,int phongthi);
float Max_diem_trung_binh_phong_thi(THI_SINH Ts[],int So_thi_sinh,int phongthi);
int Ket_qua_dau(THI_SINH ts);
void Xuat_danh_sach_thi_sinh(THI_SINH Ts[],int So_thi_sinh);
void Xuat_DTB(THI_SINH Ts[],int So_thi_sinh);
int Thi_sinh_dau(THI_SINH Ts[],int So_thi_sinh);
int Thi_sinh_dau_cua_phong_thi(THI_SINH Ts[],int So_thi_sinh,int phongthi);
int Tim(THI_SINH Ts[],int So_thi_sinh);
void Dung_sai(THI_SINH Ts[],int So_thi_sinh);
/***************************************************************************/
void Nhap_thi_sinh(THI_SINH &ts)
{
	float a,b ;
	flushall();
	printf("\nSo bao danh  :  ");
	gets(ts.So_bao_danh);
	flushall();
	printf("Ho va ten    :  ");
	gets(ts.Ho_va_ten);
	flushall();
	printf("Phong thi so  :  ");
	scanf("%d%*c",&ts.Phong_thi);
	printf("Diem Toan   :  ");
	scanf("%f%*c",&a);ts.Diem_toan=a;
	printf("Diem Van   :  ");
	scanf("%f%*c",&b);ts.Diem_van=b;
}
/***************************************************************************/
void Nhap_danh_sach_thi_sinh(THI_SINH Ts[],int So_thi_sinh)
{
	printf("\nNhap thong tin cua thi sinh ");
	for(int i=0;i<So_thi_sinh;i++)
	{
		printf("\nThi sinh thu %d ",i+1);
		Nhap_thi_sinh(Ts[i]);
	}
}
/***************************************************************************/
float Diem_trung_binh(THI_SINH ts)
{
	return (ts.Diem_toan+ts.Diem_van)/2;
}
/***************************************************************************/
float Diem_trung_binh_cac_ts(THI_SINH Ts[],int So_thi_sinh)
{
	float kq=0 ;
	for(int i=0;i<So_thi_sinh;i++)
		kq+=Diem_trung_binh(Ts[i]);
	return kq/So_thi_sinh ;
}
/***************************************************************************/
float Diem_trung_binh_phong_thi(THI_SINH Ts[],int So_thi_sinh,int phongthi)
{
	float kq =0 ;
	int   dem=0 ;
	for(int i=0;i<So_thi_sinh;i++)
		if(Ts[i].Phong_thi==phongthi)
		{
			kq+=Diem_trung_binh(Ts[i]);
			dem++;
		}
	return kq/dem ;
}
/***************************************************************************/
float Max_diem_trung_binh_phong_thi(THI_SINH Ts[],int So_thi_sinh,int phongthi)
{
	float kq=0 ;
	for(int i=0;i<So_thi_sinh;i++)
		if(Ts[i].Phong_thi==phongthi&&Diem_trung_binh(Ts[i])>kq)
			kq=Diem_trung_binh(Ts[i]);
	return kq ;
}
/***************************************************************************/
int Ket_qua_dau(THI_SINH ts)
{
	int kq=0;
	if(Diem_trung_binh(ts)>5&&ts.Diem_toan>=2&&ts.Diem_van>=2) kq=1;
	return kq;
}
/***************************************************************************/
void Xuat_danh_sach_thi_sinh(THI_SINH Ts[],int So_thi_sinh)
{
	for(int i=0;i<So_thi_sinh;i++)
	{
		printf("\n- Thi sinh thu %d ",i+1);
		printf("\n  * So bao danh      :  %s",Ts[i].So_bao_danh);
		printf("\n  * Ho va ten        :  %s",Ts[i].Ho_va_ten);
		printf("\n  * Phong thi        :  %d",Ts[i].Phong_thi);
		printf("\n  * Diem Toan        :  %0.2f",Ts[i].Diem_toan);
		printf("\n  * Diem Van         :  %0.2f",Ts[i].Diem_van);
		printf("\n  * Diem trung binh  :  %0.2f",Diem_trung_binh(Ts[i]));
		Ts[i].Ket_qua=Ket_qua_dau(Ts[i]);
		if(Ts[i].Ket_qua==1)printf("\n  * Ket qua thi      :  Dau ");
		else printf("\n  * Ket qua thi      :  Rot");
		printf("\n****************************************************");

	}
}
/***************************************************************************/
void Xuat_DTB(THI_SINH Ts[],int So_thi_sinh)
{
	printf("\n- Diem trung binh cua tung thi sinh  :");
	for(int i=0;i<So_thi_sinh;i++)
	{
		printf("\n   * %s",Ts[i].Ho_va_ten);
		printf("\n       Diem trung binh  :  %0.2f",Diem_trung_binh(Ts[i]));
	}
}
/***************************************************************************/
int Thi_sinh_dau(THI_SINH Ts[],int So_thi_sinh)
{
	int kq=0;
	for(int i=0;i<So_thi_sinh;i++)
		if(Ts[i].Ket_qua==1)kq++;
	return kq ;
}
/***************************************************************************/
int Thi_sinh_dau_cua_phong_thi(THI_SINH Ts[],int So_thi_sinh,int phongthi)
{
	int kq=0;
	for(int i=0;i<So_thi_sinh;i++)
		if(Ts[i].Ket_qua==1&&Ts[i].Phong_thi==phongthi)kq++;
	return kq ;
}
/***************************************************************************/
int Tim(THI_SINH Ts[],int So_thi_sinh)
{
	int kq=0 ;
	for(int i=0;i<So_thi_sinh&&kq==0;i++)
		if(Ts[i].Ket_qua==1&&Ts[i].Diem_toan<4)kq=1;
	return kq ;
}
/***************************************************************************/
void Dung_sai(THI_SINH Ts[],int So_thi_sinh)
{
	if(Tim(Ts,So_thi_sinh))printf("SAI");
	else printf("DUNG");
}
/***************************************************************************/
void main()
{
	THI_SINH  Ts[100];
	int So_thi_sinh,phongthi  ;
	printf("\nCo bao nhieu thi sinh thi : ");scanf("%d",&So_thi_sinh);
	Nhap_danh_sach_thi_sinh(Ts,So_thi_sinh);
	Xuat_danh_sach_thi_sinh(Ts,So_thi_sinh);
	Xuat_DTB(Ts,So_thi_sinh);
	printf("\n- So thi sinh thi dau                   :  %d",Thi_sinh_dau(Ts,So_thi_sinh));
	printf("\n- Diem trung binh tac ca cac thi sinh   :  %0.2f",Diem_trung_binh_cac_ts(Ts,So_thi_sinh));
	printf("\n- Muon tim thong tin cua phong thi nao  :  ");
	scanf("%d",&phongthi);
	printf("  * Diem trung binh cua phong thi %d la :  %0.2f",phongthi,Diem_trung_binh_phong_thi(Ts,So_thi_sinh,phongthi));
	printf("\n  * DTB cao nhat cua phong thi %d la    :  %0.2f",phongthi,Max_diem_trung_binh_phong_thi(Ts,So_thi_sinh,phongthi));
	printf("\n  * Phong thi %d co %d thi sinh thi dau",phongthi,Thi_sinh_dau_cua_phong_thi(Ts,So_thi_sinh,phongthi));
	printf("\n***************************************************************");
	printf("\n Cau phat bieu : Tac ca cac thi sinh dau deu co diem Toan >4 la : ");
	Dung_sai(Ts,So_thi_sinh);

	getch();
}