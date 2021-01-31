using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai15
{
    class Program
    {
        static void HocList()
        {
            //cấp phát bộ nhớ để sử dụng đối tượng List
            List<string> ds = new List<string>();
            //thêm một phần từ vào danh sách:
            ds.Add("An");
            ds.Add("Bình");
            ds.Add("Hạnh");
            ds.Add("Phúc");
            ds.Insert(2, "Giải thoát");
            ds.Remove("Bình");
            ds.RemoveAt(0);

            Console.WriteLine("Danh sách các phần tử trong List là:");
            for(int i=0;i<ds.Count;i++)
            {
                string v = ds[i];
                Console.WriteLine(v);
            }
        }
        static void HocList2()
        {
            List<int> ds = new List<int>();
            Random rd = new Random();
            for (int i = 0; i < 10; i++)
                ds.Add(rd.Next(100));
            Console.WriteLine("Các phần tử trong danh sách gốc là:");
            foreach (int x in ds)
                Console.Write(x + "\t");
            ds.Sort();
            Console.WriteLine("\nCác phần tử trong danh sách săp xếp là:");
            foreach (int x in ds)
                Console.Write(x + "\t");
            int k;
            Console.WriteLine("\nMời bạn nhập vào số muốn tìm:");

            k =Convert.ToInt32( Console.ReadLine());
            int kq = ds.IndexOf(k);
            if (kq < 0)
                Console.WriteLine("Không tìm thấy {0} trong danh sách",k);
            else
                Console.WriteLine("Tìm thấy {0} tại vị trí {1}", k,kq);
        }
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            //HocList();
            HocList2();
            Console.ReadLine();
        }
    }
}
