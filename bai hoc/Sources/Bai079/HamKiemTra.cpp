/*
- Kiem tra phan tu max dong
- Kiem tra phan tu min dong
- Kiem tra phan tu max 2 duong cheo hay khong. Chia lam 4 huong
*/
int KiemTraPhanTuHoangHau(int a[][100], int nIndex, int mIndex, int n, int m)
{
	int x = a[nIndex][mIndex];
	// kiem tra phan tu co max dong hay khong?
	//neu co mot phan tu > no thi khong phai, return 0
	for(int i = 0; i < m; i++)
	{
		if(a[nIndex][i] > x)
		{
			return 0;
		}
	}
	// kiem tra phan tu co max cot hay khong?
	//neu co mot phan tu > no thi khong phai, return 0
	for(int j = 0; j < n; j++)
	{
		if(a[j][mIndex] > x)
		{
			return 0;
		}
	}
	// kiem tra phan tu co max duong cheo chinh phia duoi hay khong?
	//neu co mot phan tu > no thi khong phai return 0
	int nIndex1 = nIndex + 1;
	int mIndex1 = mIndex + 1;
	while (mIndex1 + 1 < m && nIndex1 < nIndex)
	{
		if (a[mIndex1][nIndex1] > x)
			return 0;
		// tang vi tri qua phai
		mIndex1++;
		nIndex1++;
	}
	// kiem tra phan tu co max duong cheo chinh phia tren hay khong?
	//neu co mot phan tu > no thi khong phai return 0
	nIndex1 = nIndex - 1;
	mIndex1 = mIndex - 1;
	while (mIndex1 - 1 >= 0 && nIndex1 >= 0)
	{
		if (a[mIndex1][nIndex1] > x)
			return 0;
		//giam vi tri qua trai
		mIndex1--;
		nIndex1--;
	}
	// kiem tra phan tu co max duong cheo phu phia duoi hay khong?
	//neu co mot phan tu > no thi khong phai return 0
	nIndex1 = nIndex + 1;
	mIndex1 = mIndex - 1;
	while (mIndex1 - 1 >= 0 && nIndex1 < n)
	{
		if (a[mIndex1][nIndex1] > x)
			return 0;
		// tang vi tri qua trai
		nIndex1++;
		mIndex1--;
	}
	// kiem tra phan tu co max duong cheo phu phia tren hay khong?
	//neu co mot phan tu > no thi khong phai return 0
	nIndex1 = nIndex - 1;
	mIndex1 = mIndex + 1;
	while (nIndex1 - 1 >= 0 && mIndex1 < m)
	{
		if (a[mIndex1][nIndex1] > x)
			return 0;
		// giam vi tri qua phai
		nIndex1--;
		mIndex1++;
	}
	return 1;
}

