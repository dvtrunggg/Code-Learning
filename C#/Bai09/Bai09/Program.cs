using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai09
{
    class Program
    {
        static void TestToanHoc()
        {
            Console.OutputEncoding = Encoding.UTF8;
            Console.WriteLine("Mời bạn nhập vào số a:");
            int a = int.Parse(Console.ReadLine());
            Console.WriteLine("Căn bậc 2 của {0}={1}", a, Math.Sqrt(a));
            Console.WriteLine("Mời bạn nhập vào số b:");
            int b = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("{0}^{1}={2}",a,b,Math.Pow(a,b));

            Console.WriteLine("Mời bạn nhập vào 1 góc:");
            int goc = Convert.ToInt32(Console.ReadLine());
            double radian = Math.PI * goc / 180;
            Console.WriteLine("sin({0})={1}",goc,Math.Sin(radian));
            Console.WriteLine("cos({0})={1}", goc, Math.Cos(radian));
            Console.WriteLine("tan({0})={1}", goc, Math.Tan(radian));
            Console.WriteLine("Cotan({0})={1}", goc, 1/ Math.Tan(radian));

            double x = 7.7865434;
            Console.WriteLine("x ban đầu ={0}", x);
            Console.WriteLine("x sau khi làm tròn={0}",Math.Round(x,2));

            Console.ReadLine();
        }
        static void TestRandom()
        {
            Console.OutputEncoding = Encoding.UTF8;
            //hãy xuất số ngẫu nhiên trong đoạn [0->100]
            Random rd = new Random();
            int x = rd.Next(101);
            Console.WriteLine("Máy ra số ngẫu nhiên ={0}",x);

            double d = rd.NextDouble();
            Console.WriteLine("Máy ra số ngẫu nhiên ={0}", d);

            int y = rd.Next(50, 150);

            Console.ReadLine();
        }
        static void TestDateTime()
        {
            Console.OutputEncoding = Encoding.UTF8;
            DateTime d = new DateTime(1970, 1, 27); ;
            Console.WriteLine(d.ToString("dd/MM/yyyy"));
            Console.WriteLine(d.ToString("d/M/yyyy"));

            Console.WriteLine("Mời bạn nhập vào năm sinh:");
            string s = Console.ReadLine();
            DateTime birthday = DateTime.Parse(s);
            Console.WriteLine("Bạn sinh tháng "+birthday.Month);
            Console.WriteLine("Bạn sinh năm " + birthday.Year);
            Console.WriteLine("Bạn sinh ngày " + birthday.Day);

            Console.ReadLine();
        }
        static void Main(string[] args)
        {
            TestDateTime();
            //TestRandom();
            //TestToanHoc();
        }
    }
}
