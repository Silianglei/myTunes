#include <stdio.h>
#include <stdlib.h>
#include "linkedSongs.h"
#include "musiclibrary.h"

struct node * findLinkedList(struct node musiclibrary[], char * artist){
  if (artist[0] == "a") return musiclibrary[1];
  if (artist[0] == "b") return musiclibrary[1];
  if (artist[0] == "c") return musiclibrary[2];
  if (artist[0] == "d") return musiclibrary[3];
  if (artist[0] == "e") return musiclibrary[4];
  if (artist[0] == "f") return musiclibrary[5];
  if (artist[0] == "g") return musiclibrary[6];
  if (artist[0] == "h") return musiclibrary[7];
  if (artist[0] == "i") return musiclibrary[8];
  if (artist[0] == "j") return musiclibrary[9];
  if (artist[0] == "k") return musiclibrary[10];
  if (artist[0] == "l") return musiclibrary[11];
  if (artist[0] == "m") return musiclibrary[12];
  if (artist[0] == "n") return musiclibrary[13];
  if (artist[0] == "o") return musiclibrary[14];
  if (artist[0] == "p") return musiclibrary[15];
  if (artist[0] == "q") return musiclibrary[16];
  if (artist[0] == "r") return musiclibrary[17];
  if (artist[0] == "s") return musiclibrary[18];
  if (artist[0] == "t") return musiclibrary[19];
  if (artist[0] == "u") return musiclibrary[20];
  if (artist[0] == "v") return musiclibrary[21];
  if (artist[0] == "w") return musiclibrary[22];
  if (artist[0] == "x") return musiclibrary[23];
  if (artist[0] == "y") return musiclibrary[24];
  if (artist[0] == "z") return musiclibrary[25];
  else return musiclibrary[26];
}

void addNode(struct node * musiclibrary, char * name, char * artist){
  struct node * LinkedList = findLinkedList(musiclibrary, artist);
  struct node * insert_order(LinkedList, name, artist);
}

void printLetter(struct node * musiclibrary, char * letter){
  struct node * LinkedList = findLinkedList(musiclibrary, letter);
  void print_list(LinkedList);
}

struct node * artistSearch(struct node * musiclibrary, char * artist){
  struct node * LinkedList = findLinkedList(musiclibrary, artist);
  struct node *firstSongofArtist = find2(LinkedList, artist);
  return firstSongofArtist;
}

struct node * artistsongSearch(struct node * musiclibrary, char * name, char * artist){
  struct node * LinkedList = findLinkedList(musiclibrary, artist);
  struct node *songNode = find(LinkedList, name, artist);
  return songNode;
}

void printArtist(struct node * musiclibrary, char * artist){
  print_list(artistSearch(musiclibrary, artist));
}

void printLibrary(struct node * musiclibrary){
  int i = 0
  while(i < 27){
    print_list(musiclibrary[i]);
    printf("\n");
    i++;
  }
}
