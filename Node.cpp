#include<iostream>
using namespace std;
struct Node
{
       int data;
       Node *left, *right;
};
void AddNode(Node *&t, int x)
{
     if(t==NULL)
     {
                t=new Node;
                t->data=x;
                t->left=t->right=NULL;
     }
     else if(x<t->data) AddNode(t->left,x);
      else if(x>t->data)  AddNode(t->right,x);
       else cout<<"Alreaaedy exist"<<endl;
}
void Create(Node *&t)
{
     t=NULL;
     int x;
     while(cin>>x) AddNode(t,x);
}
void LKD(Node *t)
{
     if(t!=NULL)
     {
                LKD(t->left);
                cout<<t->data<<" ";
                LKD(t->right);
     }
}
void print_tree(Node *t, int h)
{
     if(t!=NULL)
     {
                print_tree(t->left,h+3);
                for(int i=0;i<=h;i++) cout<<" ";
                cout<<t->data<<endl;
                print_tree(t->right,h+3);
     }
}     
int broi(Node *t)
{
    int br=0;
    if(t!=NULL)
     br=1+broi(t->left)+broi(t->right);
    return br;
}        
int sum(Node *t)
{
    int s=0;
    if(t!=NULL) s=t->data+sum(t->left)+sum(t->right);
    return s;
}
int height(Node *t)
{
    int h;
    if(t==NULL) h=-1;
    else
    {
        int l=height(t->left);
        int r=height(t->right);
        if(l>r) h=1+l;
        else h=1+r;
    }
    return h;
}
int min(Node *t)
{
    while(t->left!=NULL) t=t->left;
    return t->data;
}
int max(Node *t)
{
    while(t->right!=NULL) t=t->right;
    return t->data;
}
Node *search(Node *t, int x)
{
     while(t!=NULL&&t->data!=x)
      if(x<t->data) t=t->left;
      else t=t->right;
     return t;
}
Node *path(Node *t, int x, int y)
{
     Node *q=search(t,x);
     while(q!=NULL&&q->data!=y)
      if(y<q->data) q=q->left;
      else q=q->right;
     return q;
}
int main()
{
    int h;
    Node *t;
    Create(t);
    /*LKD(t);
    cout<<endl;
    print_tree(t,0);
    cout<<endl;
    cout<<broi(t)<<endl;
    cout<<sum(t)<<endl;
    cout<<height(t)<<endl;
    cout<<min(t)<<endl;
    cout<<max(t)<<endl;
    int x;
    cin.clear();
    cin>>x;
    if(search(t,x)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    cin.clear();*/
    int x,y;
    cin.clear();
    cin>>x>>y;
    if(path(t,x,y)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
    system("pause");
    return 0;
}
