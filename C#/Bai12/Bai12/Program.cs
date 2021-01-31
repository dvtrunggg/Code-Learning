using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai12
{
    class Program
    {
        static void HocBietLe1()
        {
            try
            {
                Console.OutputEncoding = Encoding.UTF8;
                Console.WriteLine("Mời bạn nhập vào ngày tháng năm sinh:");
                string s = Console.ReadLine();
                DateTime birthday = DateTime.Parse(s);
                Console.WriteLine("bạn vừa nhập năm sinh=" + birthday.ToString("dd/MM/yyyy"));
                Console.ReadLine();
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
            finally
            {
                Console.WriteLine("Lỗi hay không lỗi cũng vào đây");
            }
            Console.ReadLine();
        }
        static void HocBietLe2()
        {
            Console.OutputEncoding = Encoding.UTF8;
            Console.WriteLine("Mời bạn nhập vào tử số:");
            int tu = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Mời bạn nhập vào mẫu số:");
            int mau = Convert.ToInt32(Console.ReadLine());
            if (mau == 0)
                throw new ArithmeticException("Lỗi mẫu số =0");
        }
        static void Main(string[] args)
        {
            try
            {
                HocBietLe2();
            }
            catch(ArithmeticException ex)
            {
                Console.WriteLine(ex.Message);
            }
            Console.ReadLine();
        }
    }
}
