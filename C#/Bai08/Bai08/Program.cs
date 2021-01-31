using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai08
{
    class Program
    {
        static int TinhGiaiThua(int n)
        {
            int gt = 1;
            for (int i = 1; i <= n; i++)
                gt *= i;
            return gt;
        }
        static string GiaiPhuongTrinhBac1(double a,double b)
        {
            if (a == 0 && b == 0)
                return "Vô số nghiệm";
            if (a == 0 && b != 0)
                return "Vô nghiệm";
            return "x=" + (-b / a);
        }
        static int Min(int a,int b)
        {
            return Math.Min(a, b);
        }
        static void fn1(int a)
        {
            a = a + 5;
            Console.WriteLine("a trong hàm fn1 ={0}", a);
        }
        static void fn2(ref int b)
        {
            b = b + 2;
            Console.WriteLine("b trong hàm fn2 ={0}", b);
        }
        static void fn3(out double c)
        {
            c = 8;
            Console.WriteLine("c trong hàm fn3 ={0}", c);
            
        }
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            double c=10;
            Console.WriteLine("c trước khi gọi hàm fn3 ={0}", c);
            fn3(out c);
            Console.WriteLine("c sau khi gọi hàm fn3 ={0}", c);
            Console.ReadLine();

            /*Console.OutputEncoding = Encoding.UTF8;
            int b=10;
            Console.WriteLine("b trước khi gọi hàm fn2 ={0}", b);
            fn2(ref b);
            Console.WriteLine("b sau khi gọi hàm fn2 ={0}", b);
            Console.ReadLine();
            */

            /* int a = 5;
             Console.WriteLine("a trước khi gọi hàm fn1 ={0}", a);
             fn1(a);
             Console.WriteLine("a sau khi gọi hàm fn1 ={0}", a);
             Console.ReadLine();
             */

            /* int x = 8;
             int y = 15;

             int t = Min(x, y);
             */

            /*Console.OutputEncoding = Encoding.UTF8;
            int kq = TinhGiaiThua(5);
            Console.WriteLine("{0}!={1}",5,kq);

            string nghiem = GiaiPhuongTrinhBac1(0, 8);
            Console.WriteLine(nghiem);

            Console.ReadLine();*/
        }
    }
}
