using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai11
{
    class Program
    {
        //ax^2+bx+c=0
        static string GiaiPhuongTrinhBac2(int a,int b,int c)
        {
            if(a==0)
            {
                if (b == 0 && c == 0)
                    return "Vô số nghiệm";
                if (b == 0 && c != 0)
                    return "vô nghiệm";
                return "x=" + (-c*1.0 / b);
            }
            else
            {
                double delta = Math.Pow(b, 2) - 4 * a * c;
                if (delta < 0)
                    return "Vô nghiệm";
                if(delta==0)
                {
                    double x = -b / 2 * a;
                    return "No kép x1=x2 = " + x;
                }
                else
                {
                    double x1 =( -b - Math.Sqrt(delta)) / (2 * a);
                    double x2 =( -b + Math.Sqrt(delta)) / (2 * a);
                    return "x1=" + x1 + "; x2 = " + x2;
                }
            }
        }
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            string kq = GiaiPhuongTrinhBac2(0, 0, 0);
            Console.WriteLine(kq);

            kq = GiaiPhuongTrinhBac2(0, 0, 5);
            Console.WriteLine(kq);

            //0x^2+8x+3=0
            //8x=-3
            //x=-c/b=-3/8=-0.375
            kq = GiaiPhuongTrinhBac2(0, 8, 3);
            Console.WriteLine(kq);

            //2x^2+5x-7=0
            kq = GiaiPhuongTrinhBac2(2, 5, -7);
            Console.WriteLine(kq);

            Console.ReadLine();
        }
    }
}
