/*Julian Fernandini
CPSC 122
11/14/22
Project 9

*/

#include <iostream>
using namespace std; 
#include "2-List.h"

List::List()
{
    length = 0; 
    head = NULL;
}

List::~List(){
    for(int i = 0; i < length; i++)
    {
        List::DeleteItemH();
    }
    head = NULL;
    length = 0; 
}

itemType List::GetIteH() const{
    return head->item;
}

void List::PutItemH(const itemType ItemIn)
{
    node * temp = new node;
    temp->item = itemIn;
    temp->next = head; 
    length++;
    head = temp;
    temp = NULL;
}

int List::DeleteItem(const itemType target){
    node* cur = head;
    int count = 0;
    while(cur->next != NULL)
    {
        if(head->item == target)
        {
            DeleteItemH();
            cur = head;
            count++;
        }
        else if((head->item == target) && (cur->next->next != NULL))
        {
            delete cur->next;
            cur->next = NULL;
            count++;
            length--;
        }
        else{
            cur = cur->next; 
        }
    }

    List::Find(const itemType target) const{
        node* temp = head;
        int count = 0;
        while(temp->next != NULL)
        {
            if(temp->item == target)
            {
                count++;
            }
            temp = temp->next;
        }
        if(temp->item == target)
        {
            count++;
        }
        //Wrote the second if statement again because I could not figure
        //out a way to delete without skipping the last item.
        temp = NULL;
        return count;
    }

    void List::Print() const {
        node* temp = head; 
        while(temp->next != NULL)
        {
            cout<< temp->item << endl;
            temp = temp->next;
        }
        cout<< temp->item << endl;
        temp = NULL;
    }

    bool List::IsEmpty() const {
        if(head == NULL)
        {
            return true
        }
        else
        return false;
    }
}

int List::GetLength() const{
    return length;
}
