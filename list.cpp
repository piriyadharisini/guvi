#include <cstdlib>
#include<iostream>
#include<ctype.h>
using namespace std;

/*
 * 
 */
struct Node
{
    int data;
    Node* next;
};

struct Node* Head;

void insert();
void printlist();
void rec_rev_list(struct Node* link);

int main() {
    Head=NULL;
    char proceed;
    cout<<"Enter y/Y to proceed  :  ";
    cin>>proceed;
    proceed=toupper(proceed);
//    if( proceed=='Y')
//    {
//        cout<< "\n To continue entering elements to list enter y/Y \n";
        while(proceed=='Y')
        {
            insert();
            cout<<"--------------- \nDo you want to continue inserting elements to list \n";
            cout<< "To continue entering elements to list enter y/Y \n";
            cin>>proceed;
            proceed=toupper(proceed);        
        }
//    }
    if(Head!=NULL)
    {
        cout<<"before \n";
        printlist();
        rec_rev_list(Head);
        cout<<"\n after \n";
        printlist();
    }
    
    return 0;
}

void insert()
{  Node* TEMP= new Node;
    cout<<"\nEnter the new number to be added to the list  :  ";
    cin>> TEMP->data;
    TEMP->next=NULL;
    
    if (Head==NULL)
    {
    Head=TEMP;
    return;
    }
    Node * temp1=Head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=TEMP;
}

void printlist()
{
    Node* TEMP=Head;
    while(TEMP!=NULL)
    {
        cout<<TEMP->data<<"  ";
        TEMP=TEMP->next;
    }
}

void rec_rev_list(struct Node* link)
{
    if(link->next==NULL) 
        {Head=link; 
           return;}
    rec_rev_list(link->next);
    struct Node* curr = link->next;
    curr->next=link;
    link->next=NULL;
    return;
}