#include<iostream>
#include<math.h>
using namespace std;

struct coordinates{
	float x, y;
};

struct triangle{
	coordinates A,B,C;
};


void InputCoordinates(coordinates &tg)
{
	cout<<"Enter coordinates x: ",cin>>tg.x;
	cout<<"Enter coordinates y: ",cin>>tg.y;	
}
void OutputCoordinates(coordinates tg)
{
	cout<<" ("<<tg.x<<","<<tg.y<<") ";
	
}
float Calculate(coordinates A, coordinates B)
{
	return sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2));
}

void InputTriangle(triangle &tg)
{
	cout<<"Enter coordinates of point A: "<<endl;
	InputCoordinates(tg.A);
	cout<<"Enter coordinates of point B: "<<endl;
	InputCoordinates(tg.B);
	cout<<"Enter coordinates of point C: "<<endl;
	InputCoordinates(tg.C);
}
void OutputTriangle(triangle tg)
{
	cout<<"A = ";OutputCoordinates(tg.A);
	cout<<"B = ";OutputCoordinates(tg.B);
	cout<<"C = ";OutputCoordinates(tg.C);
	
}
int main()
{
	triangle tg;
	InputTriangle(tg);
	OutputTriangle(tg);
	cout<<"do dai AB: "<<Calculate(tg.A, tg.B);
	cout<<"do dai BC: "<<Calculate(tg.B, tg.C);
	cout<<"do dai AC: "<<Calculate(tg.A, tg.C);
	return 0;
}
