#include <iostream>

using namespace std;
class grandfatheranimal
{
    public:
    void eat()
    {
    cout<<"Grand Father Eat\n";
    }
};
class fatheranimal:public grandfatheranimal
{
    public:
    void eat()
    {
        cout<<"Father eat\n";
        grandfatheranimal::eat();
    }
};
class sonanimal:public fatheranimal
{
    public:
     void eat()
    {
        cout<<"son eat\n";
        fatheranimal::eat();
    }
    
};
class grandchild:public sonanimal
{
    public:
     void eat()
    {
        cout<<"grandchild eat\n";
        sonanimal::eat();
    }
    
};

int main()
{
    grandchild g;
    g.eat();
    return 0;
    
}
