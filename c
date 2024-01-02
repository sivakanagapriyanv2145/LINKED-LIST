LINKED LIST

Design and implement a data structure for Swiggy, an online food delivery application, to manage and display the orders received in a linear format.

Each order consists of a corresponding food item. Implement a single linked list to store this information. The system should provide functionality to input the number of orders and the corresponding food names, and then display the orders in the order they were received.

Additionally, implement operations to add new orders to the end of the list and retrieve the details of a specific order based on its order number. Ensure efficient and scalable handling of orders as the application may receive a large number of orders over time.

struct node
{
    char fooditeem[20];
    struct node *next;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node{
    char f[20];
    struct node *next;
};
struct node *newnode,*head,*temp;
int main()
{
    int i,n;
    char s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%s",s);
        strcpy(newnode->f,s);
        if(head==NULL)
        {
            head=newnode;
        }
        else{
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            temp=newnode;
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%s ",temp->f);
        temp=temp->next;
    }
}
