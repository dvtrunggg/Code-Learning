using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai33
{
    public class DanhMuc
    {
        private Dictionary<string, SanPham> dsSp =
            new Dictionary<string, SanPham>();
        public string MaDM { get; set; }
        public string TenDM { get; set; }
        public void ThemSanPham(SanPham sp)
        {
            if (this.dsSp.ContainsKey(sp.MaSP) == false)
            {
                this.dsSp.Add(sp.MaSP, sp);
                sp.Nhom = this;
            }
        }
        public Dictionary<string,SanPham> Sanphams
        {
            get { return this.dsSp; }
            set { this.dsSp = value; }
        }
        public override string ToString()
        {
            return this.TenDM;
        }
    }
}
