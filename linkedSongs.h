struct node{
  char name[100];
  char artist[100];
  struct node *next;
};


struct node * insert_front(struct node *pointer, char *name, char *artist);

struct node * insert_order(struct node *pointer, char *name, char *artist);

void print_list(struct node *pointer);

struct node * find(struct node * pointer, char *name, char *artist);

struct node * randomNode(struct node *pointer);

struct node * remove_node(struct node *front, char *name, char *artist);

struct node * free_list(struct node *pointer);
