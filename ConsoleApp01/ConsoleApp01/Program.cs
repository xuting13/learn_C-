using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp01
{
    internal class Program
    {
        struct student
        {
            public int xh;
            public string xm;
            public float sg;
            public bool zx;
            public char xb;
        };
        static void Main(string[] args)
        {
            /*
            double r, s;
            r = 1.56;
            s = 3.14 * r * r;
            Console.WriteLine("s=" + s);
            Console.ReadLine();*/
            /*
            double r, s;
            Console.Write("请输入半径: ");
            r = double.Parse(Console.ReadLine());
            s = 3.14 * r * r;
            Console.WriteLine("s=" + s);
            Console.ReadLine(); */
            /*
            float a, b, x, y;
            Console.Write("a=");
            a = float.Parse(Console.ReadLine());
            Console.Write("b=");
            b = float.Parse(Console.ReadLine());
            y = (986 - 56 * a) / (b - a);
            x = 56 - y;
            Console.WriteLine("甲种煤{0}吨, 乙种煤{1}吨", x, y);
            Console.ReadLine();*/
            student s1, s2;
            s1.xh = 2021001;
            s1.xm = "look";
            s1.sg = 1.65f;
            s1.zx = true;
            s1.xb = '男';
            s2 = s1;
            s2.xm = "kang";
            s2.xh = 2021002;
            Console.WriteLine("第一位同学的信息是: 学号{0}, 姓名{1}, 身高{2}, 在校{3}, 性别{4}", s1.xh, s1.xm, s1.sg, s1.zx, s1.xb);
            Console.WriteLine("第一位同学的信息是: 学号{0}, 姓名{1}, 身高{2}, 在校{3}, 性别{4}", s2.xh, s2.xm, s2.sg, s2.zx, s2.xb);
            Console.ReadLine();
        }
    }
}
