#include <iostream>
int main()
{
   int a = 7;
   int x;
   x = a++;
   cout << x << endl;
   cout << a << endl;
   
   int b = 5;
   int y;
   y = b--;
   cout << y << endl;
   cout << b << endl;
   return 0;
}
