#include <stdio.h>
#include <stdlib.h>
#include "linkedSongs.h"
#include <time.h>


int compare(struct node * song1, struct node * song2){
  if (strcmp(song1->artist, song2->artist) > 0){return 1;}
  else if (strcmp(song1->artist, song2->artist) < 0) {return 0;}
  else{
    return strcmp(song1->name,song2->name);
  }
}

struct node * insert_front(struct node *pointer, char *name, char *artist){
  struct node *begin = malloc(sizeof(struct node));
  strcpy(begin -> name, name);
  strcpy(begin -> artist, artist);
  begin -> next = pointer;
  return begin;
}

void insert(struct node *pointer, char *name, char *artist){
  struct node * prev = pointer;
  struct node * temp = pointer->next;
  struct node * toInsert;
  strcpy(toInsert->name, name);
  strcpy(toInsert->artist, artist);
  if (compare(toInsert, prev) < 0) {toInsert->next = prev;}
  while(compare(toInsert, temp) > 0) {
    temp = temp->next;
    prev = prev->next;
  }
  prev->next = toInsert;
  toInsert->next = temp;
}

void print_list(struct node *pointer) {
  if (pointer == NULL) {
    printf("[]\n");
  }
  else {
    printf("[");
    while(pointer != NULL){
      printf("'%s' by %s", pointer->name, pointer->artist);
      if (pointer -> next != NULL){
        printf(", ");
      }
      pointer = pointer->next;
    };
    printf("]");
  }
}

struct node * find(struct node * pointer, char *name, char *artist){
  struct node * temp = pointer;
  struct node * toFind;
  strcpy(toFind->name, name);
  strcpy(toFind->artist, artist);
  while(compare(toFind,pointer) != 0 && temp != NULL){
    temp = temp->next;
  }
  if (temp != NULL){
    return temp;
  }
  return NULL;
}

struct node * find2(struct node * pointer, char *artist){
  struct node * temp = pointer;
  struct node * toFind;
  return temp; // will fix
}

struct node * randomNode(struct node *pointer){
  int size = 0;
  int a = 0;
  struct node *temp = pointer;
  while(temp != NULL){
    temp = temp -> next;
    size++;
  }
  srand(time(0));
  a = rand() % size;
  while(a > 0){
    pointer = pointer->next;
    a--;
  }
  return pointer;
}

struct node * remove_node(struct node *front, char *name, char *artist){
  if(front == NULL) return front;
  struct node * slider = front;
  struct node * slider_before = NULL;
  while(slider != NULL){
    if(slider->name == name && slider-> artist == artist){
      struct node * temp = slider;
      if(slider_before == NULL) front = front -> next;
      else slider_before->next = temp->next;
      free(temp);
      temp = NULL;
    }
    slider_before = slider;
    slider = slider -> next;
  }
  return front;
}

struct node * free_list(struct node *pointer) {
  struct node *slider = pointer;
  while(slider != NULL) {
    printf("\nfreeing node: '%s' by %s", pointer->name, pointer->artist);
    slider = slider->next;
    free(slider);
    pointer = slider;
  }
  return pointer;
}
