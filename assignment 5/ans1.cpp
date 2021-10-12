#include<iostream>
using namespace std;
 const int node=9;
 char tree[]={'\0','D','A','F','E','B','R','T'};
 int get_rightchild(int index)
 {
     if(tree[index]!='\0'&&((2*index+1)<=node)




       cout<<(2*index+1);
       }

 }
 int get_leftchild(int index)
 {
     if(tree[index]!='\0'&&(2*index)<=node)
        return 2*index;
        return 1;
 }
 void preorder(int index)
 {
     if(index>0 && tree[index]!='\0')
     {
         cout<<tree[index];
         preorder(get_leftchild(index));
         preorder(get_rightchild(index));
     }
 }
 void postorder(int index)
 {
     if(index>0 && tree[index]!='\0')
     {

         postorder(get_leftchild(index));

         postorder(get_rightchild(index));
         cout<<tree[index];
     }
 }
 void inorder(int index)
 {
     if(index>0 && tree[index]!='\0')
     {

         inorder(get_leftchild(index));
         cout<<tree[index];
         inorder(get_rightchild(index));
     }
 }
 int main()
 {
     cout<<"preorder";
     preorder(1);
     cout<<"postorder";
     postorder(1);
     cout<<"inorder";
     inorder(1);
 }
