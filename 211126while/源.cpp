/*
#include<iostream>
using namespace std;
void main()
{
 int l,s;
 cout<<"请输入利润：";
 cin>>l;
 if(l>8000)
 {
  s=1000+l*0.25;
 }
 else if(l>6000)
 {
  s=1000+l*0.2;
 }
 else if(l>4000)
 {
  s=1000+l*0.15;
 }
 else if(l>2000)
 {
  s=1000+l*0.12;
 }
 else if(l>1000)
 {
  s=1000+l*0.1;
 }
 else
 {
  s=1000;
 }
 cout<<"你的工资为"<<s<<endl;
}
*/

/*
#include<iostream>
using namespace std;
void main()
{
 int l,s;
 cout<<"请输入利润";
 cin>>l;
 switch(l/1000)
 {
 case 0:s=1000;break;
 case 1:s=1000+l*0.1;break;
 case 2:case 3:s=1000+l*0.12;break;
 case 4:case 5:s=1000+l*0.15;break;
 case 6:case 7:s=1000+l*0.2;break;
 default:s=1000+l*0.25;break;
 }
 cout<<"你的工资为"<<s<<endl;
}
*/

/*
#include<iostream>
using namespace std;
void main()
{
 int i,sum;
 i=1;sum=0;
 while(i<=50)
 {
  sum=sum+i;
  i++;
 }
 cout<<"1+2+3+.....+100="<<sum<<endl;
}
*/

/*

#include<iostream>
using namespace std;
void main()
{
 int i,sum,fh;
 i=1;sum=0;fh=1;
 while(i<=100)
 {
  sum=sum+fh*i;
  i++;
  fh=-fh;
 }
 cout<<"1-2+3-4+5.....-100="<<sum<<endl;
}
*/

/*

#include<iostream>
using namespace std;
void main()
{
 int i,n1,n2,n3;
 i=100;
 while(i<=999)
 {
  n1=i%10;
  n2=i/10%10;
  n3=i/100;
  if(i==n1*n1*n1+n2*n2*n2+n3*n3*n3)
  {cout<<i<<endl;}
  i++;
 }
}

*/

