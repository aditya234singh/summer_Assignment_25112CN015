// question - swap the nodes of a linked list
#include <iostream>
using namespace std;
Node* swappair(head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* first = head;
    Node* secound=head->next;
    Node* prev=NULL;
    while(first!=NULL && secound!=NULL){
        Node* thirdsecound->next;
        secound->next=first;
        first->next=third;
        if(prev!=NULL){
 prev->next=secound; 

        }
        else head=secound;
         prev=first;
        first=third;
        if(third!=NULL){
        secound=third->next;
        }
        else secound = NULL;
       
      

    }
}
int main(){
  
    return 0;
}
