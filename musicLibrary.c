#include <stdio.h>
#include <stdlib.h>
#include "linkedSongs.h"
#include "musicLibrary.h"

struct node * findLinkedList(struct node * musicLibrary, char *artist){
  if (artist[1] == "a") return table[0];
  if (artist[1] == "b") return table[1];
  if (artist[1] == "c") return table[2];
  if (artist[1] == "d") return table[3];
  if (artist[1] == "e") return table[4];
  if (artist[1] == "f") return table[5];
  if (artist[1] == "g") return table[6];
  if (artist[1] == "h") return table[7];
  if (artist[1] == "i") return table[8];
  if (artist[1] == "j") return table[9];
  if (artist[1] == "k") return table[10];
  if (artist[1] == "l") return table[11];
  if (artist[1] == "m") return table[12];
  if (artist[1] == "n") return table[13];
  if (artist[1] == "o") return table[14];
  if (artist[1] == "p") return table[15];
  if (artist[1] == "q") return table[16];
  if (artist[1] == "r") return table[17];
  if (artist[1] == "s") return table[18];
  if (artist[1] == "t") return table[19];
  if (artist[1] == "u") return table[20];
  if (artist[1] == "v") return table[21];
  if (artist[1] == "w") return table[22];
  if (artist[1] == "x") return table[23];
  if (artist[1] == "y") return table[24];
  if (artist[1] == "z") return table[25];
  else return table[26]
}

void addNode(struct node * musicLibrary, char *name, char *artist){
  struct node * LinkedList = findLinkedList(musicLibrary, artist);
  struct node * insert_order(LinkedList, name, artist);
}

void printLetter(struct node * musicLibrary, char *letter){
  struct node * LinkedList = findLinkedList(musicLibrary, letter);
  void print_list(LinkedList);
}

struct node * artistSearch(struct node * musicLibrary, char *artist){
  struct node * LinkedList = findLinkedList(musicLibrary, artist);
  struct node *firstSongofArtist = find2(LinkedList, artist);
  return firstSongofArtist;
}
