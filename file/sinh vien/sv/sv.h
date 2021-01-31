#pragma once
/* file data.txt
dong 1: thong tin sinh vien
dong 2: so luong mon hoc sinh vien hoc
dong 3: ten cac mon hoc
*/
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#pragma warning(disable:4996)

using namespace std;

// cau truc mon hoc
struct MonHoc {
	string tenMonHoc;
	float diem;
};
// cau truc sinh vien
struct SinhVien {
	string Name;
	string MSSV;
	string namSinh;
	vector <MonHoc> cacMonHoc;	// mang cac mon hoc cua sinh vien
};
void readStudent(SinhVien& sv, ifstream& fileIn);
void readSubject(MonHoc& mh, ifstream& fileIn);
void readFile(vector <SinhVien> &dssv, ifstream& fileIn);		// doc file thong tin sinh vien va mon hoc

void OutputSV(SinhVien sv);
void OutputMH(MonHoc mh);
void OutputDSSV(vector <SinhVien> dssv);			// xuat nhung gi doc dc tu file

// tim kiem theo ten

void Search(vector <SinhVien> dssv,string name);
