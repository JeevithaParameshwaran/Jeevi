#include <iostream>

using namespace std;
class Example1
{
    public:
    void test1()
    {
        cout<<"test1 in base\n";
    }
   static void test3()
   {
       cout<<"test3 in base\n";
   }
   void test4()
  {
      cout<<"test4 in base\n";
  }

 void test2()
 {
     cout<<"test2 in base\n";
 }
 
};
class Example2:public Example1
{
    public:
    void test1()
    {
        cout<<"test1 in sub class\n";
    }
   static void test3()
   {
       cout<<"test3 in sub class\n";
   }
   void test4()
  {
      cout<<"test4 in sub class\n";
  }

 void test2()
 {
     cout<<"test2 in sub class\n";
 }
 
};
int main()
{
    Example1 e1;
    Example2 e2;
    e1.test1();
    e1.test2();
    e1.test3();
    e1.test4();
    e2.test1();
    e2.test2();
    e2.test3();
    e2.test4();
    return 0;
    
}



