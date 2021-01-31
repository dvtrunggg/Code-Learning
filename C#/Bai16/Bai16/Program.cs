using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai16
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.OutputEncoding = Encoding.UTF8;
            Dictionary<int, string> dic = new Dictionary<int, string>();
            //Dictionary<string, double> dic2 = new Dictionary<string, double>();
            dic.Add(1, "Nguyễn Văn Tèo");
            dic.Add(2, "Trần Thị Mẹt");
            if(dic.ContainsKey(2)==false)
                dic.Add(2, "Hồ Văn Đồ");
            dic.Add(3,"Nguyễn Thị Tý");
            dic.Add(4, "Trần Văn Obama");
            //để duyệt toàn bộ dữ liệu trong dictionary ta làm như sau:
            foreach (KeyValuePair<int,string> item in dic)
            {
                Console.WriteLine("Mã="+item.Key+"; Tên="+item.Value);                
            }
            dic.Remove(2);
            //để duyệt toàn bộ dữ liệu trong dictionary ta làm như sau:
            Console.WriteLine("Sau khi xóa phần tử có khóa chính là 2 :");
            foreach (KeyValuePair<int, string> item in dic)
            {
                Console.WriteLine("Mã=" + item.Key + "; Tên=" + item.Value);
            }

            string value = dic[3];
            Console.WriteLine("Đối tượng có khóa chính =3 là:"+value);

            List<string> dsGiatri=  dic.Values.ToList();
            Console.WriteLine("Các giá trị là:");
            foreach (string v in dsGiatri)
                Console.WriteLine(v);
            List<int> dsKey = dic.Keys.ToList();
            Console.WriteLine("Các khóa chính là:");
            foreach(int k in dsKey)
            {
                Console.WriteLine(k);
            }
            Console.ReadLine();
        }
    }
}
