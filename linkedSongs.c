#include <stdio.h>
#include <stdlib.h>
#include "linkedSongs.h"
#include <time.h>

struct node * insert_front(struct node *pointer, char *name, char *artist){
  struct node *begin = malloc(sizeof(struct node));
  begin -> name = name;
  begin -> artist = artist;
  begin -> next = pointer;
  return begin;
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

struct node * free_list(struct node *pointer) {
  struct node *slider = pointer;
  while(slider != NULL) {
    printf("\nfreeing node: %d", pointer -> i);
    slider = slider->next;
    free(slider);
    pointer = slider;
  }
  return pointer;
}

struct node * randomNode(struct node *pointer){
  int size;
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
