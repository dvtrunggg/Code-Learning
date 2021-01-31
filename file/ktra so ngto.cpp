/*
doc file data.txt :
	 day so nguyen.    intergers 
	
	tim cac so nguyen to và ghi cac so nguyen to vào result.txt. find the prime numbers and write in result.txt 
*/
#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int n)
{
	int count = 0;
	for(int i = 1; i<=n; i++)
	{
		if(n % i == 0)
			count++;
	}	
	if(count == 2)
		return true;
	return false;
	
} 
int main()
{
	ifstream fileIn;
	fileIn.open("data.txt", ios_base::in);
	if(fileIn.fail())
	{
		cout<<"file is not exist!";
		return 0;	
	}

//	int x; 	// tao bien x 
//	fileIn>>x; 	//ghi du lieu tu file vào bien x; 
	
	
	int arr[10];
	int i = 0;
	while(!fileIn.eof())	// eof: end of file. ham ktra con tro chi vi da den cuoi file hay chua. !file.eof() = file.eof() == false
	{
		fileIn>>arr[i];
		i++;	// i is the numbers of elements of array
	}
	 
	ofstream fileOut;
	fileOut.open("result.txt", ios::out);
	int j = 0;
	cout<<i;
	while(j < i)
	{
		if(isPrime(arr[j]) == true) 
			fileOut<<arr[j]<<" ";
			j++;
	}
	fileIn.close();
	fileOut.close(); 
	 
	return 0;
}
