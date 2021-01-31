using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai04
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = 5, b = 8, c = 9;
            int z = ++a - --b + c++ - 2;
            Console.WriteLine("a={0},b={1},c={2},z={3}",a,b,c,z);
            Console.ReadLine();

            /*Console.OutputEncoding = Encoding.UTF8;
            int a = 5;
            a += 2;//tương đương a=a+2
            Console.WriteLine("a={0}", a);
           // Console.ReadLine();

            //Nhập vào 1 số, hỏi số này chẵn hay lẻ:
            int b;
            Console.WriteLine("Mời bạn nhập vào số b:");
            b = int.Parse(Console.ReadLine());
            //Console.ReadLine()==>chờ người dùng nhập 1 giá trị rồi nhấn enter
            //Nếu nhập 5==>hiểu là "5"==>cần đưa "5" về 5
            //==>int.Parse("5")
            if (b % 2 == 0)
                Console.WriteLine("{0} là số chẵn", b);
            else
                Console.WriteLine("{0} là số lẻ", b);

            int year;
            Console.WriteLine("Mời bạn nhập vào 1 năm:");
            year = int.Parse(Console.ReadLine());
            //Năm nhuần là năm chia hết cho 4 nhưng không chia hết cho 100
            //hoặc chia hết cho 400
            if((year%4==0 && year%100!=0)|| year%400==0)
            {
                Console.WriteLine("{0} là năm nhuần",year);
            }
            else
            {
                Console.WriteLine("{0} không là năm nhuần", year);
            }

            //Nhập vào 1 điểm, kiểm tra đậu hay rớt
            double diem;
            Console.WriteLine("Mời bạn nhập vào 1 điểm:");
            diem = double.Parse(Console.ReadLine());
            if(!(diem>5))
            {
                Console.WriteLine("Điểm ={0}==>Rớt",diem);
            }
            else
            {
                Console.WriteLine("Điểm ={0}==>Đậu",diem);
            }

            Console.ReadLine();*/
        }
    }
}
