#include"sv.h"

//read student information
void readStudent(SinhVien &sv, ifstream &fileIn)
{
	getline(fileIn, sv.Name, ',');  // giong getline(cin, bien) dau ',' do thong tin sinh vien trong data.txt cach nhau boi dau ,
	getline(fileIn, sv.MSSV, ',');
	getline(fileIn, sv.namSinh);	// ko can dau phay do nam sinh la thong tin cuoi cung cua sinh vien
	
}

//doc thong tin mon hoc
void readSubject(MonHoc &mh, ifstream &fileIn)
{
	getline(fileIn, mh.tenMonHoc, '-'); // thong tin mon hoc trong data.txt cach nhau boi dau '-'
	fileIn >> mh.diem;
}


// doc du lieu cua sinh vien ( thong tin + mon hoc tuong ung)
void readFile(vector <SinhVien> &dssv, ifstream & fileIn)
{	

	while(!fileIn.eof())// vong lap den cuoi file
	{
		//BUOC1: doc thong tin 1 sinh vien
		SinhVien sv;	// khai bao sinhvien de nhap du lieu tu file
		readStudent(sv,fileIn);
		
		//BUOC2: doc so luong mon hoc sinh vien da hoc
		int n;
		fileIn>>n;    // so luong mon hoc

		string temp;		// doc ky tu '\n' cua dong ben tren
		getline(fileIn, temp);		// sua loi khi search theo ho ten, co 2 sv ten giong nhau ma chi xuat ra 1 sv


		//BUOC 3: doc danh sach cac mon hoc:
		for(int i = 1; i<=n; i++)
		{
			MonHoc mh;
			readSubject(mh, fileIn);
			getline(fileIn, temp);       // doc ky tu '\n' dong ben tren	sua loi khi search theo ho ten, co 2 sv ten giong nhau ma chi xuat ra 1 sv
			sv.cacMonHoc.push_back(mh);	// them 1 mon hoc vao cuoi vector danh sach mon hoc cua sinh vien tuong ung
		}
			//sau khi doc xong du lieu mon hoc, luu thong tin mon hoc vao sinh vien
		// BUOC 4: them thong tin sinh vien vao mang 1 chieu vector dssv
		dssv.push_back(sv);	// them sinh vien vao cuoi mang
	}
}
// xuat thong tin 1 sinh vien 
void OutputSV(SinhVien sv)
{
	cout << "Name: " << sv.Name << ", MSSV: " << sv.MSSV << ", Nam sinh: " << sv.namSinh << endl;
}

	

// xuat thong tin 1 mon hoc
void OutputMH(MonHoc mh)
{
	cout << "\t"<<mh.tenMonHoc << ": " << mh.diem << endl;

}

// xuat tat ca thong tin cua sinh
void OutputDSSV(vector <SinhVien> dssv)
{
	for (int i = 0; i < dssv.size(); i++)
	{
		// thong tin co ban cua sinh vien:
		OutputSV(dssv[i]);

		// thong tin cua mon hoc:
		for (int j = 0; j < dssv[i].cacMonHoc.size(); j++)
		{
			cout << "mon thu " << j + 1;
			OutputMH(dssv[i].cacMonHoc[j]);
		}
	}
}
//tim theo ho ten va xuat thong tin sinh vien

void Search(vector <SinhVien> dssv, string name)
{
	for (int i = 0; i < dssv.size(); i++)
	{
		if (stricmp(dssv[i].Name.c_str(), name.c_str()) == 0)	//stricmp: ham so sanh chuoi khong phan biet viet hoa va viet thuong.  == 0 la trung khop
			// .c_str: chuyen tu string thanh char* ( khi nay moi dung dc ham stricmp(char*, char*))
		{
			//B1: Xuat thong tin sinh vien:
			OutputSV(dssv[i]);
			for (int j = 0; j < dssv[i].cacMonHoc.size(); j++)
			{
				OutputMH(dssv[i].cacMonHoc[j]);
			}

		}
		else
		{
			break;
			cout << "The name is not exist!";
			
		}
	}


}