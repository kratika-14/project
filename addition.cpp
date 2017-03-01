#include<iostream>
#include<conio.h>
using namespace std;
class node
{
  public:
    int a;
    node *next;
    node *pre;
};
int main()
{
  int char_to_int(char);
  int i=0;
  node *first1=NULL;
  node *first2=NULL;
  node *curr1=NULL;
  node *curr2=NULL;
  node *first3=NULL;
  node *curr3=NULL;
  char ch;

  //input first number
  cout<<"Enter the first number: " ;

  do
  {
    ch=getche();

    if(ch>='0' && ch<='9')
    {
      node *new_node=new node;
      new_node->a=char_to_int(ch);
      if(first1==NULL)
      {
	 new_node->pre=NULL;
	 new_node->next=NULL;
	 first1=new_node;
	 curr1=first1;
      }
      else
      {
	 new_node->next=NULL;
	 curr1->next=new_node;
	 new_node->pre=curr1;
	 curr1=curr1->next;
      }
    }
  }while(ch>='0' && ch<='9');

  //input second number
  cout<<"\nEnter the second number: " ;
  do
  {
    ch=getche();
    if(ch>='0' && ch<='9')
    {
      node *new_node=new node;
      new_node->a=char_to_int(ch);

      if(first2==NULL)
      {
	 new_node->pre=NULL;
	 new_node->next=NULL;
	 first2=new_node;
	 curr2=first2;
      }
      else
      {
	 new_node->next=NULL;
	 curr2->next=new_node;
	 new_node->pre=curr2;
	 curr2=curr2->next;
      }
    }
  }while(ch>='0' && ch<='9');

  cout<<"\n\n";


  //adding both nubers
  do
  {
     node *new_node=new node;
     new_node->a=i+curr1->a+curr2->a;
     i=0;
     if(new_node->a>9)
     {
      new_node->a=new_node->a-10;
      i=1;
     }
     if(first3==NULL)
     {
	 new_node->next=NULL;
	 new_node->pre=NULL;
	 first3=new_node;
     }
     else
     {
	 new_node->next=first3;
	 first3->pre=new_node;
	 new_node->pre=NULL;
	 first3=new_node;
     }
     curr1=curr1->pre;
     curr2=curr2->pre;
  }while(curr1!=NULL && curr2!=NULL);

  if(curr1==NULL || curr2==NULL)
  {
    if(curr1==NULL && curr2==NULL)
    {
       if(i==1)
       {
	 node *new_node=new node;
	 new_node->a=1;
	 new_node->next=first3;
	 new_node->pre=NULL;
	 first3=new_node;
       }
       goto outer;

    }

    else
    {
      if(curr1==NULL)
      {
	node *new_node=new node;
	new_node->a=i+curr2->a;
	new_node->next=first3;
	first3=new_node;
	curr2=curr2->pre;
	curr2->next=first3;
	first3=first2;
      }
      else
      {
	node *new_node=new node;
	new_node->a=i+curr1->a;
	new_node->next=first3;
	first3=new_node;
	curr1=curr1->pre;
	curr1->next=first3;
	first3=first1;
      }
    }
  }

  //printing the output
  outer:  cout<<"\nthe sum of numbers are:  ";
  curr3=first3;
  do
  {
    cout<<curr3->a;
    curr3=curr3->next;
  }while(curr3!=NULL);

   return 0;
}

int char_to_int(char ch)
{
      if(ch=='1')
	  return 1;
      if(ch=='2')
	  return 2;
      if(ch=='3')
	  return 3;
      if(ch=='4')
	  return 4;
      if(ch=='5')
	  return 5;
      if(ch=='6')
	  return 6;
      if(ch=='7')
	  return 7;
      if(ch=='8')
	  return 8;
      if(ch=='9')
	  return 9;
      if(ch=='0')
	  return 0;
}
