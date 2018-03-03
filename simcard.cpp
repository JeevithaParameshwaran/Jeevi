#include<ostream>
#include<istream>
using namespace std;

class iplplayoffs
{
	public:
		char team[40];
		int win,loss;
		void fun()
		{
			cout<<"Enter the team name:";
	        cin>>team;
        	cout<<"Enter the number of matches win";
	         cin>>twin;
	         cout<<"Enter the number of matches loss";
          	cin>>loss;
	       if(twin>=9)
	       cout<<team<<"is eligible for playoffs!!!";
	       else
	       cout<<"Not eligible";
	     
        }

};
int main()
{
	iplplayoffs t1;
	t1.fun();
	return 0;
}
	

