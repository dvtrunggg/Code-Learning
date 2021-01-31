//Ham dem so phan tu am
int DemSoPhanTuAm(int a[], int n)
{
	int kq=0;
	for (int i=0; i<n; i++)
		if (a[i]<0) 
			kq++;
	return kq;
}
//Ham tim Max, Min
void TimMaxMin(int a[], int n)
{
	int Max=a[0], Min=a[0];
	for (int i=0; i<n; i++)
	{
	   if(a[i]>Max)
			Max=a[i];
	   if(a[i]<Min)
			Min=a[i];
	}
	cout <<"\n Phan tu MAX cua mang la "<<Max;
	cout <<"\n Phan tu MIN cua mang la "<<Min;
}

void MaxAm_MinDuong(int a[], int n)
{
	int coSoAm=0, coSoDuong=0;
	int AmLonNhat, DuongBeNhat;
	for (int i=0; i<n; i++)
	{
		if (a[i]<0) /* Neu a[i] la so am */
		   if (coSoAm==0) /* a[i] la so am dau tien */
		   {
		      coSoAm=1;
		      AmLonNhat=a[i];
		   }
		   else /* Da co so am roi */
		      if (a[i]>AmLonNhat)
			AmLonNhat = a[i];
		else /* Neu a[i] la so duong */
		  if (coSoDuong==0) /* a[i] la so duong dau tien */
		   {
		      coSoDuong=1;
		      DuongBeNhat=a[i];
		   }
		   else /* Da co so duong roi */
		      if (a[i]<DuongBeNhat)
			DuongBeNhat = a[i];
	}
}

void lietkeSNT(int a[], int n)
{
	int SNT=1;
	for (int i=0; i<n; i++)
	{
	   for (int j=2; j<=sqrt(a[i]); j++)
	      if (a[i]%j==0)
	      {
			 SNT=0;
			 break;
	      }
	      if (SNT==1)
		 cout<<"   "<<a[i];
	}
}

void lietkeSoChinhPhuong (int a[], int n)
{
	for (int i=0; i<n; i++)
	   if (sqrt(a[i])== (int)sqrt(a[i])) /* a[i] la so chinh phuong */
	      cout<<"   "<<a[i];
}

void hoanVi(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void sapXepTangDan(int a[],int n)
{
	int i,j;
	for (i=0; i<n-1; i++)
	   for (j=i+1; j<=n; j++)
		if (a[i]>a[j])
			hoanVi(a[i],a[j]);
	for (i=0; i<n-1; i++)
		cout<<"   "<<a[i];
}

void sapXepGiamDan(int a[],int n)
{
	int i,j;
	for (i=0; i<n-1; i++)
	   for (j=i+1; j<=n; j++)
		if (a[i]<a[j])
			hoanVi(a[i],a[j]);
	for (i=0; i<n-1; i++)
		cout<<"   "<<a[i];
}

