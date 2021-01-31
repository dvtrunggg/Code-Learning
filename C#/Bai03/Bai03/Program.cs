using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai03
{
    class Program
    {
        static void Main(string[] args)
        {
            int soLuong=0;
            double diemToan = 9.5;
            int x1=1;

            string name = "Trần Duy Thanh";
            string ten = "Ông Thanh";

            //long long= 15; sai

            Console.OutputEncoding = Encoding.UTF8;

            Console.WriteLine("điểm toán ={0}", diemToan);

            Console.WriteLine("Tên ={0}, điểm ={1}", name, diemToan);

            double d = 1 / 2;
            Console.WriteLine("d={0}/{1}={2}", 1, 2, d);
            double d2 = (double)1 / 2;
            Console.WriteLine("d2={0}/{1}={2}", 1, 2, d2);
            double d3 = 1.0 / 2;
            Console.WriteLine("d3={0}/{1}={2}", 1, 2, d3);

            var t = 5;
            Console.WriteLine("Kiểu của t={0}", t.GetType().ToString());
            t = 113;
            //t = 115.2;

            const double PI = 3.14;
            //const double pi = 3.14;

            Console.ReadLine();
        }
    }
}
