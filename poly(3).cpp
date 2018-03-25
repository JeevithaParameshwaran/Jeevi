#include<iostream>
using namespace std;
class over
{
    public:
     int i;
     over()
     {
         i=0;
     }
     void operator ++()
     {
         ++i;
     }
     void show()
     {
         cout<<"\n"<<i<<"\n";
     }
};
int main()
{
    over o;
    o.show();
    ++o;
    o.show();
    return 0;
}
