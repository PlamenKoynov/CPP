#include <iostream>
using namespace std;
class Rectangle
{ 
      private:
              double a, b;
      public:
             Rectangle()
             {
                        a=0;
                        b=0;
             }
             Rectangle(int x, int y)
             {
                           a=x;
                           b=y;
             }
             Rectangle(Rectangle &A)
             {
                                 a=A.a;
                                 b=A.b;
             }
             void Enter()
             {
                  cin>>a>>b;
             }
             void Show()
             {
                  cout<<a<<" "<<b<<endl;
             }
             double S() 
             {
                    return a*b;
             }
};
int main ()
{
      Rectangle rect[100];
      int n;
      cin>>n;
      for(int i=0; i<=n-1; i++) rect[i].Enter();
      for (int i=0; i<=n-1; i++) cout << rect[i].S()<<endl;
      system("pause");
      return 0;
}
