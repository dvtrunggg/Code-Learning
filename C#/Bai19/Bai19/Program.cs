using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai19
{
    class Program
    {
        static void TestLop()
        {
            Console.OutputEncoding = Encoding.UTF8;

            SinhVien teo = new SinhVien();
            teo.Ten = "Nguyễn Văn Tèo";
            teo.Ma = 113;
            Console.WriteLine(teo);

            string s = teo.Ten;

            SinhVien ty = new SinhVien(114, "Hồ Thị Tý");
            Console.WriteLine(ty);

            SinhVien an = new SinhVien();
            an.Ma = 2;
            an.Ten = "Nguyễn Bình An";
            an.NamSinh = new DateTime(2012, 1, 1);

            an.XuatThongTin();

            Console.ReadLine();
        }
        static void TestParams()
        {
            ClassTestParam test = new ClassTestParam();
            Console.WriteLine(test.Sum(1, 2, 3, 4, 5, 6, 7));
            Console.WriteLine(test.Sum());
            Console.WriteLine(test.Sum(-4,2,5,4,-100));
        }
        static void TestKhachHang()
        {
            List<KhachHang> dsKH = new List<KhachHang>();
            dsKH.Add(new KhachHang() { Ma=1,Ten="Ông Tèo",Phone="0981234562"});
            KhachHang baty = new KhachHang();
            baty.Ma = 2;
            baty.Ten = "Bà Tý";
            baty.Phone = "0913642354";
            dsKH.Add(baty);
            dsKH.Add(new KhachHang()
                {
                    Ma=3,
                    Ten="Bin",
                    Phone="0914545346"
                }
            );
            foreach(KhachHang kh in dsKH)
            {
                Console.WriteLine(kh.Ma+"\t"+kh.Ten+"\t"+kh.Phone);
            }
        }
        static void TestAliasVaGomRac()
        {
            KhachHang teo = new KhachHang() { Ma = 1, Ten = "Tèo", Phone = "0913435" };
            KhachHang ty = new KhachHang() { Ma = 2, Ten = "Tý", Phone = "09872545" };
            teo = ty;
            Console.WriteLine("Tên của Tèo là [{0}]",teo.Ten);
            //như vậy lúc nào ô nhà mà teo đang trỏ trước lúc gán teo=ty bị thu hồi
            //và lúc này ô nhà tý đang trỏ có thêm tèo trỏ vào nữa
            //==>teo hoặc tý đổi thì cũng làm cho cả tèo và tý đổi:
            teo.Ten = "OBAMA";
            Console.WriteLine("Tên của Tý là [{0}]", ty.Ten);

            KhachHang an = new KhachHang() { Ma = 3, Ten = "An" };
            KhachHang binh = an.copy();
            //Lúc này theo MemberwiseClone thì nó sao chép toàn bộ thông tin của an
            //ra 1 ô nhớ mới hoàn toàn độc lập, ô nhớ này do binh quản lý
            //==>an và binh quản lý 2 ô nhớ hoàn toàn khác nhau
            //==>an đổi chả ảnh hưởng gì tới bình ngược lại
            binh.Ten = "BÌNH BÌNH BÌNH";
            Console.WriteLine("Tên của An là [{0}]",an.Ten);
        }
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;

            TestAliasVaGomRac();

            //TestKhachHang();
            //TestParams();

            Console.ReadLine();
        }
    }
}
