#include <stdio.h>
#include <stdlib.h>
#include "musicLibrary.h"
#include "linkedSongs.h"

int main(){
  printf("LINKED LIST TESTS\n====================================\n\n");

  struct node *anode = NULL;
  printf("Printing empty list:\n");
  print_list(anode);
  anode = insert_front(anode, "street spirit", "radiohead");
  anode = insert_front(anode, "thunderstruck", "ac/dc");
  anode = insert_front(anode, "lose yourself", "eminem");
  anode = insert_front(anode, "god's plan", "drake");

  printf("\nPrinting new list:\n");
  print_list(anode);
  printf("====================================\n\n");
  printf("Test free_list: ");
  anode = free_list(anode);
  printf("\nPrinting new list:\n");
  print_list(anode);

}
