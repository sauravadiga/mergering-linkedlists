#include <iostream>

using namespace std;
class linked{
private:
    struct node{
    int data;
    node *link;
    }*p;
public:
        linked(){
    p=NULL;
    }
    void begadd(int num){
    node *temp;
    temp=new node;
    temp->data=num;
    temp->link=p;
    p=temp;
    }
    void display(){
   node *temp=p;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    }
    void merger(linked &l1,linked &l2){
 node *r;
  node *temp=l1.p;
  while(temp!=NULL){
        r=temp;
    temp=temp->link;
  }
cout<<endl;
    node *temp2=l2.p;
    p=l1.p;
   r->link=temp2;
 }
};
int main()
{
   linked l1,l2,l3;
   l1.begadd(2);
   l1.begadd(3);
    l1.begadd(4);
 l1.display();
 cout<<endl;
   l2.begadd(5);
   l2.begadd(6);
   l2.begadd(7);
   l2.display();
   cout<<endl;
   l3.merger(l1,l2);
   l3.display();
   cout<<endl;
   l3.begadd(10);
    l3.display();
    return 0;
}
