#include <iostream>

using namespace std;
class ope
{
    public:
         ope(int a,int b,int c)
         {   cout<<"\nLength:"<<a<<"\nBreadth"<<b<<"\nHeight:"<<c;
             cout<<"\nArea of rectangle:"<<a*b*c;
         }
         ope(int x)
         {
            cout<<"\nside:"<<x;
            cout<<"\nArea of square is"<<x*x<<"\n";
         }
         ope(int z,int y)
          {
              cout<<"\nBase:"<<z<<"\nheight:"<<y;
              cout<<"\nArea of triangle is"<<0.5*z*y;
          }
       
             
};

int main()
{
   ope o(2),o1(1,2,3),o2(3,2);
   return 0;
}
