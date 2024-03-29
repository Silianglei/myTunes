#include <stdio.h>
#include <stdlib.h>
#include "musicLibrary.h"
#include "linkedSongs.h"

int main(){
  printf("\n\nLINKED LIST TESTS\n====================================\n\n");

  struct node *anode = NULL;
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


  printf("Testing find_node:\n");
  printf("Looking for [eminem: the real slim shady]\n");
  struct node *someNode = malloc(sizeof(struct node));
  someNode = find_node(anode, "the real slim shady", "eminem");
  if (someNode != NULL){printf("Found it: "); print_list(someNode); printf("\n");}
  else {printf("Song not found\n\n");}
  free(someNode);

  printf("Looking for [drake: hotline bling]\n");
  struct node *someNode2 = malloc(sizeof(struct node));
  someNode2 = find_node(anode, "hotline bling", "drake");
  if (someNode2 != NULL){printf("Found it: "); print_list(someNode2); printf("\n");}
  else {printf("Song not found\n\n");}
  free(someNode2);

  printf("Looking for [kanye west: stronger]\n");
  struct node *someNode3 = malloc(sizeof(struct node));
  someNode3 = find_node(anode, "stronger", "kanye west");
  if (someNode3 != NULL){printf("Found it: "); print_list(someNode3); printf("\n");}
  else {printf("Song not found\n");}
  free(someNode3);

  printf("====================================\n\n");

  printf("Testing find_artist:\n");

  printf("Looking for beyonce\n");
  struct node *someArtist = malloc(sizeof(struct node));
  someArtist = find_artist(anode, "beyonce");
  if (someArtist != NULL){printf("Found it: "); print_list(someArtist); printf("\n");}
  else {printf("Artist not found\n\n");}
  free(someArtist);

  printf("Looking for drake\n");
  struct node *someArtist2 = malloc(sizeof(struct node));
  someArtist2 = find_artist(anode, "drake");
  if (someArtist != NULL){printf("Found it: "); print_list(someArtist2); printf("\n");}
  else {printf("Artist not found\n\n");}
  free(someArtist2);

  printf("Looking for kanye\n");
  struct node *someArtist3 = malloc(sizeof(struct node));
  someArtist3 = find_artist(anode, "kanye");
  if (someArtist3 != NULL){printf("Found it: "); print_list(someArtist3); printf("\n");}
  else {printf("Artist not found\n\n");}
  free(someArtist3);

  printf("====================================\n\n");
  printf("Testing randomNode (Run multiple times to see randomness): \n\n");

  struct node * song1 = randomNode(anode);
  printf("Randomly chosen song... %s: %s\n", song1->artist, song1->name);
  printf("====================================\n\n");
  printf("Testing remove_node: \n\n");
  printf("Removing [eminem: lose yourself]\n");
  anode = remove_node(anode, "lose yourself","eminem");
  printf("Removing [ac/dc: thunderstruck]\n");
  anode = remove_node(anode, "thunderstruck","ac/dc");
  printf("Removing [kanye: stronger]\n");
  anode = remove_node(anode, "stronger", "kanye");

  printf("\nOur new list is:\n");
  print_list(anode);
  printf("====================================\n\n");
  printf("MUSIC LIBRARY TESTS\n\n====================================\n\n");


  struct node * table[27];
  int index;
  for(index = 0; index<27; index++ ){
    table[index]=NULL;
  }


  printf("\nPrinting Empty Library...\n");
  printLibrary(table);

  printf("\nAdding Songs...\n");
  addNode(table, "street spirit", "radiohead");
  addNode(table, "thunderstruck", "ac/dc");
  addNode(table, "lose yourself", "eminem");
  addNode(table, "without me", "eminem");
  addNode(table, "stan", "eminem");
  addNode(table, "god's plan", "drake");
  addNode(table, "in my feelings", "drake");
  printLibrary(table);

  printf("\nAll songs by Artists starting in 'd'\n");
  printLetter(table, 'd');

  printf("\nRemoving 'in my feelings' by drake...\n");
  removeNode(table, "in my feelings", "drake");
  printLibrary(table);

  printf("\nAll songs by Eminem: ");
  printArtist(table, "eminem");

  printf("\nFinding thunderstruck by ac/dc ....");
  printNode(artistsongSearch(table, "thunderstruck","ac/dc"));
  printf("\n");

  printf("\nPrinting two random songs: ");
  shuffle(table, 2);


  printf("\n\nClearing Library...\n");
  clearLibrary(table);
  printLibrary(table);
  printf("\n");



}
