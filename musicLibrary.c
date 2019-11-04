#include <stdio.h>
#include <stdlib.h>
#include "linkedSongs.h"
#include "musicLibrary.h"

void addNode(struct node ** musiclibrary, char * name, char * artist){
  char first = artist[0];
  int i = first - 97;
  if (i < 0 || i > 26) {i = 26;}
  musiclibrary[i] = insert_order(musiclibrary[i], name, artist);
}

void printLetter(struct node ** musiclibrary, char letter){
  int i = letter - 97;
  if (i < 0 || i > 26) {i = 26;}
  print_list(musiclibrary[i]);
}

struct node * artistSearch(struct node ** musiclibrary, char * artist){
  char first = artist[0];
  int i = first - 97;
  if (i < 0 || i > 26) {i = 26;}
  struct node *firstSongofArtist = find_artist(musiclibrary[i], artist);
  return firstSongofArtist;
}

struct node * artistsongSearch(struct node ** musiclibrary, char * name, char * artist){
  char first = artist[0];
  int i = first - 97;
  if (i < 0 || i > 26) {i = 26;}
  struct node *songNode = find_node(musiclibrary[i], name, artist);
  return songNode;
}

void printArtist(struct node ** musiclibrary, char * artist){
  print_list(artistSearch(musiclibrary, artist));
}

void printLibrary(struct node **musiclibrary){
  int i = 0;
  while(i < 27){
    if (i < 26) {printf("%c: ", i + 97);}
    else{printf("Others: ");}
    print_list(musiclibrary[i]);
    i++;
  }
}
