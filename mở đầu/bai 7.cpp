#include <iostream>
using namespace std;
int main ()
{
	int m = 4, n = 2, p = 3;
	int min = (p < n ? (p < m ? p : m) : (m < n ? m : n));
	cout << min << endl; 
	return 0;
}
