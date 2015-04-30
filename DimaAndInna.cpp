#include<iostream>
using namespace std;
int main()
{
    int n, chock1, juice1, chock2, juice2, current = 0, pos = 0, first = 0, second = 0;
    bool flag = 0;
    cin>>n;
    for(int i = 0; i <= 3; i++)
    {
            cin>>chock1>>juice1>>chock2>>juice2;
            current = n - chock1;
            if(flag == 0)
            {
                    if(current >= chock2 || current >= juice2)
                    {
                               pos = i+1;
                               first = chock1;
                               second = current;
                               flag = 1;
                    }
                    else
                    {
                        current = n - juice1;
                        if(current >= chock2 || current >= juice2)
                        {
                                   pos = i+1;
                                   first = juice1;
                                   second = current;
                                   flag = 1;
                        }
                    }
                    current = 0;
            }
    }
    if(flag == 1) cout<<pos<<" "<<first<<" "<<second<<endl;
    else cout<<-1<<endl;
    system("pause");
    return 0;
}
