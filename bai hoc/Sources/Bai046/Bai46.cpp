//Bai 1
float TinhS (int n) 
{
	if(n == 1)
		return 0.5;
	return TinhS (n - 1) + 1.0 / (n * (n + 1));
}
//Bai 2
float TinhS(float x, int n) 
{
	if(n == 0)
		return 1;
	if(n == -1)
		return 1.0/x;
	if(n < 0)
		return TinhS(x, n + 1) * 1.0 / x;
	else if(n == 0)
		return 1;
	return TinhS(x, n - 1) * x;
}
//Bai 3
long tinhXn(int);
long tinhYn(int);
long tinhXn(int n)
{
	if(n == 0)
		return 1;
	return tinhXn(n - 1) + tinhYn(n - 1);
}
long tinhYn(int n)
{
	if(n == 0)
		return 0;
	return 3*tinhXn(n - 1) + 2*tinhYn(n - 1);
}

