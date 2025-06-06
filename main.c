#include <stdio.h>
#include <stdlib.h>
#include "rope.h"
//rope data structure to hold the text
//another (?) data structure to hold the line information
int main(){
  printf("rope data structure test");
  rope my_rope;
  node my_node;
  my_rope.head = &my_node;
  my_node.weight = 5;
  my_node.left = NULL;
  my_node.right = NULL;
  my_node.text = malloc(sizeof(char) * 5);
  *(my_node.text) = 't';
  *(my_node.text + sizeof(char)) = 'e';
  *(my_node.text + sizeof(char)*2) = 's';
  *(my_node.text + sizeof(char)*3) = 't';
  *(my_node.text + sizeof(char)*4) = '\0';
  printf("\n");
  printf(my_node.text);
  return 0;
}
