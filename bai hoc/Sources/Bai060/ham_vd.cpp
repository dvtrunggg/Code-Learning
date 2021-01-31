int TinhTongMT(int a[MaxC][MaxD],int n, int m)
{
	int kq=0;
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			kq+=a[i][j];
	return kq;
}

void LietKeChiaHet7(int a[MaxC][MaxD], int n, int m)
{
	int soPT=0;
	for (int i=0; i<n; i++)
	   for (int j=0; j<m; j++)
	      if (a[i][j]%7==0)
	      {
			 cout <<"   "<<a[i][j];
			 soPT++;
	      }
	if (soPT==0)
	   cout <<"\n Khong co phan tu chia het cho 7 trong ma tran";
}

int TongDuongVien(int a[MaxC][MaxD], int n, int m)
{
	int tong=0, i;
	for (i=0; i<m; i++) // tinh tong hang dau tien va cuoi cung
	{
	   tong+=a[0][i];
	   tong+=a[n][i];
	}
	for (i=1; i<m; i++)
	{
	   tong+=a[i][0];
	   tong+=a[i][m];
	}
        return tong;
}

int TongTamGiacTren(int a[MaxC][MaxD], int n, int m)
{
	int tong=0;
	if (n!=m)
	{
	    cout <<"\n Chuc nang nay chi tinh cho ma tran vuong";
	    return -1;
	}
	else
	    for (int i=0; i<n; i++)
 			tong+=a[i][i];
	return tong;
}

void TimCotCoTichMax(int a[MaxC][MaxD], int n, int m)
{
	int tichCot=1, tichMax=1, cotTichMax=0;
	for (int i=0; i<m; i++)
	{
	   for (int j=0; i<n; j++)
	      tichCot*=a[j][i];
	   if (tichCot>tichMax)
	   {
	      tichMax= tichCot;
	      cotTichMax = i;
	   }

	}
	cout <<cotTichMax<<"    "<<tichMax;
}

void TimDongNhieuChinhPhuong(int a[MaxC][MaxD], int n, int m)
{
	// mang chua so luong so chinh phuong cua moi dong
	int dong[Max];  
	int dongcantim=0;
	int i,j;
	for (i=0; i<n; i++) //khoi tao mang 0
	   dong[i]=0;
	for (i=0; i<n; i++)
	   for (j=0; j<m; j++)
		if (sqrt(a[i][j]) == (int)sqrt(a[i][j]))
			dong[i]++;
	// Tim dong co nhieu so chinh phuong nhat
	for (i=0; i<n-1; i++)
	   if (dong[i]<dong[i+1])
	       dongcantim = i+1;

	cout <<"\n Dong nhieu so chinh phuong nhat, bao gom so: "<<dongcantim<<"   "<<dong[dongcantim];
}

void HoanViMT(int a[MaxC][MaxD], int n, int m)
{
	int MT2[MaxC][MaxD];
	int i,j;
	for (i=0; i<n; i++)
	   for (int j=0; j<m; j++)
	      MT2[i][j] = a[j][i];

	cout <<"\n Ma tran hoan vi la \n";
	for (i=0; i<n; i++)
	{
	   for (j=0; j<m; j++)
	      cout<<"   "<<MT2[i][j];
	   cout<<endl;
	}
}

void ChuyenMaTranThanhMang(int a[MaxC][MaxD], int n, int m)
{
	int Max1Chieu, i, j, k=-1, temp;
	int mang[200];
	for (i=0; i<n; i++)
	   for (j=0; j<m; j++)
		mang[++k]= a[i][j];

	for (i=0; i<k-1; i++)
		for (j=i+1;j<k; j++)
			if (mang[i]<mang[j])
			{
				temp=mang[i];
				mang[i]=mang[j];
				mang[j]=temp;
			}
	for (i=0; i<k; i++)
		cout<<"   "<< mang[i];
}

void TimPhanTuMax(int a[MaxC][MaxD], int n, int m)
{
	int max, dong, cot;
	max=a[0][0];
	for (int i=0; i<n; i++)
	   for (int j=0; j<m; j++)
		if (a[i][j]>max)
		{
			max=a[i][j];
			dong=i;
			cot=j;
		}
	cout<<"\n Phan tu max la phan tu a["<<dong<<"]["<<cot<<"] co gia tri la "<<max;
}

void TimMinMoiCot(int a[MaxC][MaxD], int n, int m)
{
	int min[Max], temp=0, chiso=-1;
	for (int i=0; i<m; i++)
	{
	   temp=a[m][0]; // Gan min cua moi cot la o dau tien cua cot/
	   for (int j=0; j<n; j++)
		if (a[i][j]<temp)
			temp=a[i][j];
	   min[++chiso] = temp; // Gan gia tri min cua moi cot vao mang 1 chieu
	}
	cout <<"\n Phan tu min cua moi cot la: ";
	for (int k=0; k<chiso; k++)
		cout<<"   "<<min[k];
}
