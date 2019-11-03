#include <stdio.h>
#include <stdlib.h>
#include "musicLibrary.h"
#include "linkedSongs.h"

int main(){
  printf("LINKED LIST TESTS\n====================================\n\n");

  struct node *anode = NULL;
  struct node *bnode = NULL;
  struct node *cnode = NULL;
  printf("Printing empty list:\n");
  print_list(anode);
  anode = insert_front(anode, "street spirit", "radiohead");
  anode = insert_front(anode, "thunderstruck", "ac/dc");
  anode = insert_front(anode, "lose yourself", "eminem");
  anode = insert_front(anode, "god's plan", "drake");
  anode = insert_front(anode, "in my feelings", "drake");

  printf("\nTesting insert_front:\n");
  print_list(anode);
  printf("====================================\n\n");
  printf("Test free_list:\n");
  anode = free_list(anode);
  printf("\nPrinting new list:\n");
  print_list(anode);


  printf("\nTesting insert_order:\n");
  anode = insert_order(anode, "street spirit", "radiohead");
  anode = insert_order(anode, "thunderstruck", "ac/dc");
  anode = insert_order(anode, "lose yourself", "eminem");
  anode = insert_order(anode, "god's plan", "drake");
  anode = insert_order(anode, "in my feelings", "drake");
  anode = insert_order(anode, "the real slim shady", "eminem");
  anode = insert_order(anode, "hotline bling", "drake");
  anode = insert_order(anode, "single ladies", "beyonce");

  print_list(anode);
  printf("====================================\n\n");

  struct node * table[27];
  struct node * musicLibrary = table;
}
