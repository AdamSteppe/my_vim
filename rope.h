typedef struct node node;
struct node {
  int weight;
  node* left;
  node* right;
  char* text;
};

typedef struct {
  node* head;
} rope;
