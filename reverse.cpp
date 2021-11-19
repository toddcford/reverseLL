#include<stdio.h>


struct Node {    
  struct Node *next;
  int value;
};


Node* reverse(Node* linked_list) {
  Node* previous = linked_list;
  Node* current  = linked_list->next;
  previous->next = NULL;

  while (current != NULL) {
    Node* f_next = current->next;
    current->next = previous;
    previous = current;
    current = f_next;
  }

  return previous;
}

void printList(Node* linked_list) {
  Node* current = linked_list;
  while (current != NULL) {
    printf("%d --> ", current->value); 
    current = current->next;
  }
  printf("NULL\n");
}

int main() {
  
  Node* my_node0  = new Node;
  Node* new_node1 = new Node;
  Node* new_node2 = new Node;
  Node* new_node3 = new Node;
  Node* new_node4 = new Node;

  my_node0->value = 10;
  my_node0->next = new_node1;
  new_node1->value = 20;
  new_node1->next = new_node2;
  new_node2->value = 30;
  new_node2->next = new_node3;
  new_node3->value = 40;
  new_node3->next  = new_node4;
  new_node4->value = 50;
  new_node4->next  = NULL;


  printList(my_node0);
  my_node0 = reverse(my_node0);
  printList(my_node0);


  
  return 0;
}
