#include <iostream>

using namespace std;
class calculated
{
    public:
         void Add(int a,int b)
         {   cout<<"\n2 int parameters";
             cout<<"\n"<<a+b;
         }
         void Add(double a,double b)
         {
            cout<<"\n2 float parameters";
            cout<<"\n"<<a+b<<"\n";
         }
         void Add(int z,int y,int x)
          {
              cout<<"\n3 int parameters";
              cout<<"\n"<<x+z+y;
          }
          void Add(double a,double b,double c)
          {
              cout<<"\n3 double parameters";
              cout<<"\n"<<a+b+c;
          }
       
             
};

int main()
{
   calculated o,o1,o2,o3;
   o.Add(2,1);
   o1.Add(1.2,2.2);
   o2.Add(1,2,1);
   o3.Add(3.5,2.1,3.1);
   return 0;
}
