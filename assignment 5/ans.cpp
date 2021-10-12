#include<iostream>
using namespace std;
const int node=40;
int tree[node];
void Preorder(int root);
void Inorder(int root);
void Postorder(int root);

int main()
{int i;
    for(i=1;i<node;i++)

        tree[i]='\0';
        tree[1]=1;
        tree[2]=2;
        tree[3]=3;
        tree[4]=4;
        tree[5]=5;
        tree[6]=6;
        tree[7]=7;

        cout<<"pre order:";
        Preorder(1);
        cout<<endl;

        cout<<"in order:";
        Inorder(1);
        cout<<endl;

        cout<<"post order:";
        Postorder(1);
        cout<<endl;
        return 0;


}
void Preorder(int root)
{
    if(tree[root]=='\0')
        return;
    int left=root*2;
    int right=left+1;
    cout<<"->"<<tree[root];
    Preorder(left);
    Preorder(right);
}
void Inorder(int root)
{
    if(tree[root]=='\0');
    return;

    int left=root*2;
    int right=left +1;

    Inorder(left);

    Inorder(right);
    cout<<"->"<<tree[root];


}
void Postorder(int root)
{
    if(tree[root]=='\0')
        return;

    int left=root*2;
    int right=left+1;

    Postorder(left);
    Postorder(right);
    cout<<"->"<<tree[root];
}
