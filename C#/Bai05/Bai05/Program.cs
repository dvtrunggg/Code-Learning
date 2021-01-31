using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai05
{
    class Program
    {
        /// <summary>
        /// Hàm này dùng để tính toán ABC
        /// </summary>
        /// <param name="x">nhập x kiểu int</param>
        /// <param name="y">nhập y kiểu int</param>
        static void Ham1(int x,int y)
        {

        }
        /// <summary>
        /// Đây là hàm tính tổng 3 số
        /// </summary>
        /// <param name="x"></param>
        /// <param name="y"></param>
        /// <param name="z"></param>
        /// <returns></returns>
        static int Tong(int x,int y,int z)
        {
            return x + y + z;
        }
        static void Main(string[] args)
        {

            Ham1(4, 5);
            int t = Tong(4, 5, 6);

            //đây là biến a, dùng để lưu giá trị kiểu nguyên, ông Thanh thêm, 13/10/2016
            int a = 5;
            /*
             * Người sửa: Trần Duy Thanh
             * Ngày sửa: 13/10/2016
             * Lý do: Bổ sung thêm biến x, khởi tạo =8 để làm XYZ
             */ 
            int x = 8; 
            Console.WriteLine("a={0}",a);
        }
    }
}
