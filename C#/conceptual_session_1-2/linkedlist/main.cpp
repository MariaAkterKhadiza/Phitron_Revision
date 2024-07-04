#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* link;//save memory block
};
class Linkedlist
{
    private:
      Node* head;
    public:
     Linkedlist()
       {
        head=NULL;
       }

void push_back(int element)
{
     Node* newNode = new Node();
     newNode->data = element;
     newNode->link =NULL;
        if(head == NULL)
         {
            head = newNode;
         }
         else
         {
            Node* tmp =head;
            while(tmp != NULL)
              {
                tmp = tmp->link;
              }
            tmp->link = newNode;
         }
    }

 void printlist()
 {
      {
        Node* tmp = head;
            while(tmp != NULL)
            //cout<<"this list contains:";
              {
                //cout<<tmp->data<<" ";
                tmp = tmp->link;
              }
      }
    }
};

int main()
{
       Linkedlist mylist;

       mylist.push_back(10);
       mylist.push_back(20);
       mylist.push_back(30);
       mylist.printlist();

    return 0;
}
