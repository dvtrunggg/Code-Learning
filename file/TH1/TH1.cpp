#include <iostream>
#include <fstream>
using namespace std;

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void selection_Sort(int a[], int n)
{
	for(int i = 0; i<n*n-1; i++)
		for(int j = i+1; j<n*n; j++)
		{
			int min = i;
			if(a[min]>a[j])
				swap(a[min], a[j]);
		}
		
}

void print_Matrix(int *p, int n)
{
	for(int i = 0; i<n; i++)
		for(int j = i+ 1; j<n; j++)
			cout<<"  "<<*(p+i*n+j);
			cout<<endl;
}
main()
{
	fstream f("data.txt", ios::in);   // mo de doc
	if(!f.is_open())
	{
		cout<<"ko the mo file"; return 0;
	}
	else
	{
		int *a, n;
		
	}
}

