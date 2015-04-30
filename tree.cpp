#include <iostream>
using namespace std;
struct Node
{
       int data;
       Node *left, *right;
};
void addNode(int x, Node *&t)
{ 
     if (t == NULL)
     { 
           t = new Node;
           t->data = x;
           t->left = t->right = NULL;
     }
     else
     {
         if(x<t->data) addNode(x, t->left);
         if(x>t->data) addNode(x, t->right);
     }
}
void Create (Node * &t)
{ 
     t = NULL;
     int x;
     while (cin >> x) addNode(x, t);
}
void printTree(Node *t, int h)
{
     if (t!=NULL)
     { 
                 printTree(t->right, h+1);
                 for (int i=0; i<h; i++)
                 cout<<" ";
                 cout << t->data <<endl;
                 printTree(t->left, h+3);
     }
}
void print_LKD(Node *t)
{
     if (t!=NULL)
     { 
                 print_LKD(t->left);
                 cout << t->data << " ";
                 print_LKD(t->right);
     }
}
int main()
{
    Node *t;
    Create (t);
    print_LKD(t);
    cout << endl;
    printTree(t,3);
    system("pause");
    return 0;
}
