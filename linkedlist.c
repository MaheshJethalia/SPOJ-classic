// A simple C program to introduce
// a linked list
#include<stdio.h>
#include<stdlib.h> 
struct Node 
{
  int data;
  struct Node *next;
};
void printList(struct Node *n)
{
  while (n != NULL)
  {
     printf(" %d ", n->data);
     n = n->next;
  }
} 
// Program to create a simple linked 
// list with 3 nodes
int main()
{
  struct Node* head = NULL;
  struct Node* second = NULL;
  struct Node* third = NULL;
   
  // allocate 3 nodes in the heap  
  head = (struct Node*)malloc(sizeof(struct Node)); 
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));
  getch(head->data);
  head->next = second;
  getch(second->data);
  second->next=third;
  getch(third->data);
  third->next=NULL;
  printList(head);
  return 0;
}