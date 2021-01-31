#include <iostream>
using namespace std;
int Max (int a, int b);
int main()
{
	int x, y;
	cin >> x >> y;
	int max = Max(x,y);
	cout<<"max la: "<<max;
}
int Max (int a, int b)
{
	if (a>b) return a;
	else return b;
}

