using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai31
{
    public class HinhThucThanhToan
    {
        public int Ma { get; set; }
        public string HinhThuc { get; set; }
        public int PhiThanhToan { get; set; }
        public override string ToString()
        {
            return this.HinhThuc;
        }
    }
}
