using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai14
{
    class Program
    {
        /// <summary>
        /// Tạo 1 mảng M có n phần tử, sau đó:
        /// 1) Nhập giá trị ngẫu nhiên cho các phần tử trong mảng M
        /// 2) Xuất các giá trị trong mảng
        /// 3) Đảo ngược mảng
        /// 4) Sắp xếp mảng
        /// 5) Tính tổng các phần tử trong mảng
        /// 6) tìm kiếm mảng
        /// </summary>
        static void HocMang1Chieu()
        {
            Console.WriteLine("Mời bạn nhập vào số phần tử trong mảng:");
            int n = int.Parse(Console.ReadLine());
            int[] M = new int[n];
            //1. Nhập giá trị ngẫu nhiên:
            Random rd = new Random();
            for (int i = 0; i < M.Length; i++)
                M[i] = rd.Next(100);
            //2. Xuất các giá trị trong mảng:
            Console.WriteLine("Mảng ngẫu nhiên là:");
            for (int i= 0;i < M.Length;i++)
            {
                Console.Write(M[i] + "   ");
            }
            //3. Đảo mảng
            Array.Reverse(M);
            Console.WriteLine("\nMảng sau khi đảo chiều là:");
            foreach(int i in M)
            {
                Console.Write(i + "   ");
            }
            //4. Sắp xếp mảng:
            Array.Sort(M);
            Console.WriteLine("\nMảng sau khi sắp xếp là:");
            foreach (int i in M)
            {
                Console.Write(i + "   ");
            }
            //5. Tính tổng mảng:
            int sum = 0;
            foreach (int x in M)
                sum += x;
            Console.WriteLine("\nTổng mảng là {0}",sum);
            //6. Tìm kiếm mảng
            Console.WriteLine("Mời bạn nhập vào số muốn tìm:");
            int k = int.Parse(Console.ReadLine());
            int kq = Array.BinarySearch(M, k);
            if (kq < 0)
                Console.WriteLine("Không tìm thấy {0} trong mảng", k);
            else
                Console.WriteLine("Tìm thấy {0} tại vị trí thứ {1}",k,kq);
            //7. tìm theo tuyến tính (ko quan tâm M đã sắp hay chưa)
            Console.WriteLine("Mời bạn nhập vào số muốn tìm:");
            k = int.Parse(Console.ReadLine());
            kq = -1;
            for (int i = 0; i < M.Length; i++)
            {
                if (M[i] == k)
                {
                    kq = i;
                    break;
                }
            }
            if (kq <0)
                Console.WriteLine("Không tìm thấy {0} trong mảng", k);
            else
                Console.WriteLine("Tìm thấy {0} tại vị trí thứ {1}", k, kq);
        }
        static void HocMang2Chieu()
        {
            Console.WriteLine("Mời bạn nhập vào số dòng :");
            int dong = int.Parse(Console.ReadLine());
            Console.WriteLine("Mời bạn nhập vào số cột :");
            int cot = int.Parse(Console.ReadLine());
            int[,] M = new int[dong, cot];
            Random rd = new Random();
            for(int i=0;i<M.GetLength(0);i++)
            {
                for(int j=0;j<M.GetLength(1);j++)
                {
                    M[i, j] = rd.Next(100);
                }
            }
            Console.WriteLine("Mảng 2 chiều là:");
            for(int i=0;i<M.GetLength(0);i++)
            {
                for(int j=0;j<M.GetLength(1);j++)
                {
                    Console.Write(M[i, j] + "\t");
                }
                Console.WriteLine();
            }
            
        }
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            HocMang2Chieu();
            //HocMang1Chieu();
            Console.ReadLine();
        }
    }
}
