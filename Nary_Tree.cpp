#include<iostream>
using namespace std;
class Tree{
 int data;
 class Child{
 int data;
 Child *next;
 };
 Child* head=NULL;
 Tree(int data){
   this->data=data;
 }
};
Tree *CreateTree(Tree *root,int data){
  if(root==NULL) {
     return new Tree(data);
  }
  else {
    
  }
}
int main(){
Tree *root=NULL;
int n=0;
while(n!=-1){
  cout<<"Enter the data (If u want to stop press -1) : ";
  cin>>n;
  root=CreateTree(root,n);
}
return 0;
}
