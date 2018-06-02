//CODE SNIPET
//https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem

/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *temp,*a;
    a=new Node;
    temp=head;
    a->data=data;a->next=NULL;
    if(temp==NULL)
    {
      //  temp->next=a;
//a->next=NULL;
        return a;
    }
    else
    {
        while(temp->next!=NULL)
            {
            temp=temp->next;
        }
                temp->next=a;
        //a->next=NULL;
        return head;
    }
}
