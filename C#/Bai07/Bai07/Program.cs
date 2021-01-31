using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai07
{
    class Program
    {
        static void HocDoWhile()
        {
            int n;
            Console.WriteLine("Mời thím nhập số n:");
            n = int.Parse(Console.ReadLine());
            int gt = 1;
            int i = 1;
            do
            {
                gt *= i;
                i++;
            } while (i <= n);
            Console.WriteLine("{0}!={1}",n,gt);
            Console.ReadLine();
        }
        static void HocWhile()
        {
            Console.OutputEncoding = Encoding.UTF8;
            int n;
            Console.WriteLine("Mời thím nhập số n:");
            n = int.Parse(Console.ReadLine());
            int gt = 1;
            int i = 1;
            while(i<=n)
            {
                gt *= i;
                i++;
            };
            Console.WriteLine("{0}!={1}", n, gt);
            Console.ReadLine();
        }
        static void HocFor()
        {
            Console.OutputEncoding = Encoding.UTF8;
            int n;
            Console.WriteLine("Mời thím nhập số n:");
            n = int.Parse(Console.ReadLine());
            int gt = 1;
            int i;
           
            for(i=1; i<=n; i++)
            {
                gt = gt * i;
            }
            Console.WriteLine("{0}!={1}", n, gt);
            Console.ReadLine();
        }
        static void Main(string[] args)
        {
            //HocDoWhile();
            //HocWhile();
            HocFor();
        }
    }
}
