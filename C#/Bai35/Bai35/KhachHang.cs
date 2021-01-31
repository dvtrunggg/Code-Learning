using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai35
{
    public class KhachHang
    {
        const double GIA = 20000;
        public string Ten { get; set; }
        public int SoLuongMua { get; set; }
        public bool LaSinhVien { get; set; }
        public double TinhTien
        {
            get
            {
                if (LaSinhVien == true)
                    return SoLuongMua * GIA * 0.95;
                else
                    return SoLuongMua * GIA;
            }
        }
    }
}
