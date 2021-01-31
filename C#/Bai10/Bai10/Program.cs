using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bai10
{
    class Program
    {
        static void Choi()
        {
            Console.OutputEncoding = Encoding.UTF8;
            Random rd = new Random();
            int soCuaMay = rd.Next(501);
            int soCuaNguoi;
            int soLanDoan = 0;
            Console.WriteLine("Máy đã ra 1 số [0..500], mời bạn đoán");
            while (true)
            {
                soCuaNguoi = int.Parse(Console.ReadLine());
                soLanDoan++;
                Console.WriteLine("Bạn đoán lần thứ {0}",soLanDoan);
                if(soCuaNguoi==soCuaMay)//thắng, vì đoán đúng
                {
                    Console.WriteLine("Chúc mừng bạn đã đoán đúng, số của máy ={0}",soCuaMay);
                    break;
                }
                if(soCuaNguoi<soCuaMay)
                {
                    Console.WriteLine("Số bạn đoán < số của máy");
                }
                else
                {
                    Console.WriteLine("Số bạn đoán > số của máy");
                }
                if (soLanDoan == 7)
                {
                    Console.WriteLine("GAME OVER! bạn đã đoán quá 7 lần");
                    Console.WriteLine("Số của máy là {0}",soCuaMay);
                    break;
                }
            }
            
        }
        static void Main(string[] args)
        {
            while (true)
            {
                Choi();
                Console.WriteLine("Chơi nữa không?(c/k):");
                string s = Console.ReadLine();
                if (s == "k")
                    break;
            }
            Console.ReadLine();
        }
    }
}
