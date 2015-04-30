#include<iostream>
#include<string>
using namespace std;
void menu();
void game();
void help();
char submenu();
char matrix[5][5] = {'.'}, x, y, symbol;
string pl1Name, pl2Name, move, shortAns;
int counter = 1, i, j, index, countX[2][4] = {0}, countY[4][2] = {0}, intX, intY;
int main()
{
    menu();
    cout<<"Bye bye! Thanks for playing :)"<<endl;
    system("pause");
    return 0;
}

void menu()
{
     int ans;
     do
     {
         cout<<"Welcome to the 'GAME'"<<endl;
         cout<<"1. Let's play!"<<endl;
         cout<<"2. I need some help! Please! ---> :( Under construction"<<endl;
         cout<<"3. I don't want to play anymore. Exit!"<<endl;
         cout<<"Please choose what you want to do: ";
         cin>>ans;
         switch(ans)
         {
                    case 1: system("cls"); game(); break;
                    //case 2: system("cls"); help(); break;
                    case 3: break;
                    default: cout<<"That is not a valid option!";
         }
     }
         while(ans < 1 || ans > 3);
}

char submenu()
{
     char r; 
     do
     {
            cout<<"Do you want to play again? Y/N ";   
            cin>>r;
     }
     while(tolower(r) != 'y' && tolower(r) != 'n');
     return r;
}  
void game()
{
     counter = 1;
     matrix[0][0] = '0';
     for(i = 1; i <= 3; i++) matrix[i][0] = char(i - 1 + 65);
     for(i = 1; i <= 3; i++)
      for(j = 1; j <= 3; j++) matrix[i][j] = '.';
     for(j = 1; j <= 3; j++) matrix[0][j] = char(j - 1 + 49);
     for(i = 0; i <= 1; i++)
      for(j = 0; j <= 4; j++) countX[i][j] = countY[j][i] = 0;
     do
     {
                   cout<<"Enter your names :)"<<endl;
                   cout<<"Player 1: ";
                   cin>>pl1Name;
                   cin.get();
                   cout<<"Player 2: ";
                   cin>>pl2Name;
                   cin.get();
     }
     while(pl1Name == " " || pl2Name == " ");
     system("cls");
     for(int p = 120; p >= 1; p--)
     {
             cout<<"Game will start in: "<<p<<endl;
             system("cls");
     }
     while(counter <= 9)
     {
                   if(counter % 2 != 0) 
                   {
                              cout<<pl1Name<<"'s turn ---> X"<<endl;
                              symbol = 'X';
                              index = 0;
                   }
                   else 
                   {
                              cout<<pl2Name<<"'s turn ---> 0"<<endl;
                              symbol = '0';
                              index = 1;
                   }
                   for(i = 0; i <= 3; i++)
                   {
                         for(j = 0; j <= 3; j++) cout<<matrix[i][j]<<" ";
                         cout<<endl;
                   }
                   cout<<"Where you want to put "<<symbol<<"? ";
                   cin>>move;
                   cin.get();
                   x = tolower(move[0]);
                   y = move[1];
                   intX = int(x - 'a') + 1;
                   intY = int(y - '1') + 1;
                   while(x < 'a' || x >'c' || y <'1' || y > '3' || matrix[int(x) - 96][int(y) - 48] != '.')
                   {
                                    cout<<"Invalid input! Try again!"<<endl;
                                    cin>>move;
                                    x = tolower(move[0]);
                                    y = move[1];
                   }
                   matrix[int(x) - 96][int(y) - 48] = symbol; 
                   countX[index][int(y) - 48] ++;
                   countY[int(x) - 96][index]++;
                   if((matrix[1][1] == matrix[2][2] && matrix[2][2] == matrix[3][3] && (matrix[2][2] == 'X' || matrix[2][2] == '0')) || (matrix[3][1] == matrix[2][2] && matrix[2][2] == matrix[1][3] && (matrix[2][2] == 'X' || matrix[2][2] == '0')))
                   {
                                             system("cls");
                                             for(i = 0; i <= 3; i++)
                                             {
                                                   for(j = 0; j <= 3; j++) cout<<matrix[i][j]<<" ";
                                                   cout<<endl;
                                             }        
                                             cout<<"We have a winner!"<<endl;
                                             cout<<"Congratulations, ";
                                             if(index == 0) cout<<pl1Name<<"!"<<endl;
                                             else cout<<pl2Name<<"!"<<endl;
                                             if(submenu() == 'y') 
                                             {
                                                          system("cls");
                                                          game();
                                             }
                                             else break;
                   }
                   if(countX[index][int(y) - 48] == 3 || countY[int(x)- 96][index] == 3)
                   {
                                             system("cls");
                                             for(i = 0; i <= 3; i++)
                                             {
                                                   for(j = 0; j <= 3; j++) cout<<matrix[i][j]<<" ";
                                                   cout<<endl;
                                             }        
                                             cout<<"We have a winner!"<<endl;
                                             cout<<"Congratulations, ";
                                             if(index == 0) cout<<pl1Name<<"!"<<endl;
                                             else cout<<pl2Name<<"!"<<endl;
                                             if(submenu() == 'y')
                                             {
                                                          system("cls");
                                                          game();
                                             }
                                             else break;
                   }
                   system("cls");
                   counter++;

     }
     if(counter > 9) 
     {
                cout<<"That game is tied!"<<endl;
                if(submenu() == 'y')
                {
                             system("cls");
                             game();
                }
     }
}
