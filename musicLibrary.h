
struct node * findLinkedList(struct node * musicLibrary, char *artist);

void addNode(struct node * musicLibrary, char *name, char *artist);

void printLetter(struct node * musicLibrary, char *letter);

struct node * artistSearch(struct node * musicLibrary, char *artist);

struct node * artistsongSearch(struct node * musicLibrary, char *name, char *artist);

void printArtist(struct node * musicLibrary, char *artist);
