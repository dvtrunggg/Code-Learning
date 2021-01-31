using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai21
{
    class Program
    {
        static List<PhongBan> dsPB = new List<PhongBan>();
        static void TestQLNV()
        {
            PhongBan pNS = new PhongBan();
            pNS.MaPhongBan = 1;
            pNS.TenPhongBan = "Phòng Nhân Sự";
            dsPB.Add(pNS);

            NhanVien teo = new NhanVien();
            teo.MaNhanVien = 1;
            teo.TenNhanVien = "Tèo";
            teo.ChucVu = LoaiChuVu.TRUONG_PHONG;
            pNS.ThemNhanVien(teo);

            NhanVien ty = new NhanVien();
            ty.MaNhanVien = 2;
            ty.TenNhanVien = "Tèo";
            ty.ChucVu = LoaiChuVu.NHAN_VIEN;
            pNS.ThemNhanVien(ty);

            NhanVien met = new NhanVien();
            met.MaNhanVien = 100;
            met.TenNhanVien = "Mẹt ơi Mẹt";
            met.ChucVu = LoaiChuVu.NHAN_VIEN;
            pNS.ThemNhanVien(met);

            PhongBan pkt = new PhongBan();
            pkt.MaPhongBan = 2;
            pkt.TenPhongBan = "Phòng Kế Toán";
            dsPB.Add(pkt);
            NhanVien bin = new NhanVien();
            bin.MaNhanVien = 3;
            bin.TenNhanVien = "Bin bin bin ";
            bin.ChucVu = LoaiChuVu.PHO_PHONG;
            pkt.ThemNhanVien(bin);

            Console.WriteLine("Danh sách toàn bộ nhân viên trong công ty:");

            foreach(PhongBan pb in dsPB)
            {
                Console.WriteLine(pb.TenPhongBan);
                pb.XuatToanBoNhanVien();
            }
            NhanVien old = pkt.TimNhanVien(3);
            if(old!=null)
            {
                old.TenNhanVien = "Bỉm bỉm bỉm";
            }

            Console.WriteLine("Danh sách toàn bộ nhân viên trong công ty sau khi sửa:");

            foreach (PhongBan pb in dsPB)
            {
                Console.WriteLine(pb.TenPhongBan);
                pb.XuatToanBoNhanVien();
            }
            if(pNS.XoaNhanVien(113)==false)
            {
                Console.WriteLine("Không tìm thấy mã nhân viên =113 để xóa");
            }
            else
                {
                Console.WriteLine("Danh sách toàn bộ nhân viên trong công ty sau khi xóa:");

                foreach (PhongBan pb in dsPB)
                {
                    Console.WriteLine(pb.TenPhongBan);
                    pb.XuatToanBoNhanVien();
                }
            }

            Console.WriteLine("Danh sách nhân viên thuộc phòng Nhân Sự:");
            pNS.XuatToanBoNhanVien();
            pNS.SapXep();
            Console.WriteLine("Danh sách nhân viên thuộc phòng Nhân Sự sau khi sắp xếp:");
            pNS.XuatToanBoNhanVien();

            long sum = 0;
            foreach (PhongBan pb in dsPB)
                sum += pb.TongLuong();
            Console.WriteLine("Tổng lương phải thanh toán cho 1 tháng ={0}",sum);
        }
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            TestQLNV();
            Console.ReadLine();
        }
    }
}
