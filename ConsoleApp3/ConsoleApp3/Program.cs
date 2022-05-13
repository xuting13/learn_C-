using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp3
{
    internal class Program
    {
        struct friend
        {
            public string name;
            public string xb;
            public int age;
            public string zz;
            public bool zx;
        }
        static void Main(string[] args)
        {
            friend f1, f2;

            f1.name = "小信";
            f1.xb = "男";
            f1.age = 17;
            f1.zz = "辽宁省大连市";
            f1.zx = false;

            f2.name = "小南";
            f2.xb = "男";
            f2.age = 19;
            f2.zz = "河北省保定市";
            f2.zx = true;

            Console.WriteLine("我的一个朋友的名字叫 {0}，他是{1}生，年龄是{2}，他住在{3}，他的在校状态是{4}", f1.name, f1.xb, f1.age, f1.zz, f1.zx);
            Console.WriteLine("我的另一个朋友的名字叫 {0}，他是{1}生，年龄是{2}，他住在{3}，他的在校状态是{4}",f2.name, f2.xb, f2.age, f2.zz, f2.zx);
            Console.ReadLine();
        }
    }
}
