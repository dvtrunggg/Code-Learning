#include<iostream>
#include<string>
#include<stdio.h>
#include<conio.h>
using namespace std;

typedef struct Student{
	string FullName;
	string ID;
	int YearOfBirth;
	float AverageScore;
}st;

//typedef struct StudentList {
//	st dssv[100];
//	int n;
//}ls;

void InputStudent(st& sv);
void OutputStudent(st sv);
void InputList(st ds[], int n);
void OutputList(st ds[], int n);
void Search(st ds[], int n, int x);
void Insert(st ds[], int &n, int l, st sv);
void Deletee(st ds[], int& n, int l);
void DeleteStudent(st ds[], int &n);
void Swap(st& a, st& b);
void Sort(st ds[], int n);
