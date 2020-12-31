#include <iostream>
using namespace std;
struct node
{
  char data;
  struct node *left;
  struct node *right;
};

void preorder(node *p)
{
  if(p)
  {
    cout << p->data << " ";
    preorder(p->left);
    preorder(p->right);
  }
}

void inorder(node *p)
{
  if(p)
  {
    inorder(p->left);
    cout << p->data << " ";
    inorder(p->right);
  }
}
void postorder(node *p)
{
  if(p)
  {
    postorder(p->left);
    postorder(p->right);
    cout << p->data << " ";
  }
}
 
void A1()
{
  node *root,*p1,*p3,*p7,*p15,*p31,*p63,*p127;
  p1=new node;
  p1->data='1';
  root=p1;
  p3=new node;
  p3->data='2';  
  p7=new node;
  p7->data='3';
  p15=new node;
  p15->data='4';
  p31=new node;
  p31->data='5';  
  p63=new node;
  p63->data='6';
  p127=new node;
  p127->data='7';

  p1->left=NULL;
  p1->right=p3;
  p3->left=NULL;
  p3->right=p7;
  p7->left=NULL;
  p7->right=p15;
  p15->left=NULL;
  p15->right=p31;
  p31->left=NULL;
  p31->right=p63;
  p63->left=NULL;
  p63->right=p127;
  p127->left=NULL;
  p127->right=NULL;
 
  cout<<" ---TREE--- \n";
  preorder(root);
  cout << endl;
 
  cout<<"前序";
  preorder(root);
  cout<<"中序";
  inorder(root);
  cout<<"後序";
  postorder(root);

}

void A2()
{
  node *root,*p1,*p2,*p4,*p8,*p16,*p32,*p64;
  p1=new node;
  p1->data='7';
  root=p1;
  p2=new node;
  p2->data='6';  
  p4=new node;
  p4->data='5';
  p8=new node;
  p8->data='4';
  p16=new node;
  p16->data='3';  
  p32=new node;
  p32->data='2';
  p64=new node;
  p64->data='1';

  p1->left=p2;
  p1->right=NULL;
  p2->left=p4;
  p2->right=NULL;
  p4->left=p8;
  p4->right=NULL;
  p8->left=p16;
  p8->right=NULL;
  p16->left=p32;
  p16->right=NULL;
  p32->left=p64;
  p32->right=NULL;
  p64->left=NULL;
  p64->right=NULL;
 
  cout<<" ---TREE--- \n";
  preorder(root);
  cout << endl;
 
  cout<<"前序";
  preorder(root);
  cout<<"中序";
  inorder(root);
  cout<<"後序";
  postorder(root);

}

void A3()
{
  node *root,*p1,*p2,*p3,*p4,*p5,*p6,*p7;
  p1=new node;
  p1->data='4';
  root=p1;
  p2=new node;
  p2->data='2';  
  p3=new node;
  p3->data='6';
  p4=new node;
  p4->data='1';
  p5=new node;
  p5->data='3';  
  p6=new node;
  p6->data='5';
  p7=new node;
  p7->data='7';

  p1->left=p2;
  p1->right=p3;
  p2->left=p4;
  p2->right=p5;
  p3->left=p6;
  p3->right=p7;
  p4->left=NULL;
  p4->right=NULL;
  p5->left=NULL;
  p5->right=NULL;
  p6->left=NULL;
  p6->right=NULL;
  p7->left=NULL;
  p7->right=NULL;
 
  cout<<" ---TREE--- \n";
  preorder(root);
  cout << endl;
 
  cout<<"前序";
  preorder(root);
  cout<<"中序";
  inorder(root);
  cout<<"後序";
  postorder(root);

}

int main()
{
  A1();
  cout<<endl;
 
  A2();
  cout << endl;
 
  A3();
  cout<<endl;
 
  return 0;
}

