#include <iostream> 
#include <fstream>
void HoanVi(int &a, int &b)
{
	int t = a; a = b; b = t;
}
void Sapxep(int a[],int n)
{	
	int i,j,tam;
	for(i=0;i<n*n-1;i++)
		for(j=i+1;j<n*n;j++)
			if (a[i]<a[j])
			{  
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;	
			}
} 
void XuatMaTran(int *a, int n)
{
	for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << *(a+i*n+j) <<"   ";
        }
        cout <<endl;
    }
}
void main()
{
    fstream f ("matran.txt", ios::in);
    if(! f.is_open())
    {
        cout<<"Khong the mo file.\n";
        return 0;
    }
    else 
	{
        int *a;
	    int n;
		f >> n;
        a = new int [n*n];
		for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                f >> *(a+i*n+j);
            }
        }
        XuatMaTran(a,n);
	    f.close();
	    fstream f1("matran1.txt", ios::out);
		Sapxep(a,n);
	    for(int i = 0; i < n; i++)
	    {
	        for(int j = 0; j < n; j++)
	        {
	            f1 << *(a+(i*n+j));
	            f1 << " ";
	        }
	        f1 << "\n";
	    }
	    XuatMaTran(a,n);
	    delete a;
    }
}
