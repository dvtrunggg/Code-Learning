#include <iostream.h>
void main()
{	
	int mt1[2][3] = {1,2,3,4,5,6};
	int mt2[2][3] = {{2,1,4},{4,7,6}};
	int i,j;
	cout <<"Ma tran 1\n";
	for (i=0;i<2;i++)
	{	
		for(j=0; j<3; j++) 
			cout << mt1[i][j]; 
		cout <<endl;
	}
	cout <<"Ma tran 2\n";
	for (i=0;i<2;i++)
	{	
		for(j=0; j<3; j++) 
			cout << mt2[i][j]; 
		cout <<endl;
	}
}

