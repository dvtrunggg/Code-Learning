using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai21
{
    public class NhanVien
    {
        public const long LUONG_CO_BAN = 10000000;
        public int MaNhanVien { get; set; }
        public string TenNhanVien { get; set; }
        public DateTime NgaySinh { get; set; }
        public LoaiChuVu ChucVu { get; set; }
        public PhongBan Phong { get; set; }
        public long TinhLuong
        {
            get
            {
                if (ChucVu == LoaiChuVu.GIAM_DOC)
                    return LUONG_CO_BAN + (long)(LUONG_CO_BAN * 0.25);
                if (ChucVu == LoaiChuVu.TRUONG_PHONG)
                    return LUONG_CO_BAN + (long)(LUONG_CO_BAN * 0.15);
                if(ChucVu==LoaiChuVu.PHO_PHONG)
                    return LUONG_CO_BAN + (long)(LUONG_CO_BAN * 0.05);
                return LUONG_CO_BAN;
            }
        }
        public override string ToString()
        {
            return this.MaNhanVien+"\t"
                   +this.TenNhanVien+"\t"
                   +this.ChucVu+"\t==>"
                   +this.TinhLuong;
        }
    }
}
