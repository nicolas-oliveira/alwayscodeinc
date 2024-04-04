#include <stdio.h>
#include <stdlib.h>

typedef struct ArrayList ArrayList;
typedef ArrayList* ArrayListPtr;

struct ArrayList {
  size_t capacity;
  size_t size;
  int *data;
  ArrayListPtr parent;
  ArrayListPtr child;
};

const size_t ARRAY_LIST_CHUNCK_SIZE = 64;

ArrayListPtr array_list_create_with_parent_and_chunck_size(ArrayListPtr parent,size_t chunck_size) {
  ArrayListPtr result = (ArrayListPtr)calloc(sizeof(ArrayList), 1);
  result->parent = parent;
  result->capacity = chunck_size;
  result->data = (int*)malloc(sizeof(int) * chunck_size);
  return result;
}

ArrayListPtr array_list_create_with_parent(ArrayListPtr parent) {
  return array_list_create_with_parent_and_chunck_size(
      parent, ARRAY_LIST_CHUNCK_SIZE
  );
}

ArrayListPtr array_list_create() {
  return array_list_create_with_parent_and_chunck_size(
      NULL, ARRAY_LIST_CHUNCK_SIZE
  );
}

void array_list_push_back(ArrayListPtr list, int value) {
  if (list->size >= list->capacity) {
      if (!list->child) {
          list->child = array_list_create_with_parent(list);
      }
      array_list_push_back(list->child, value);
  } else {
      list->data[list->size++] = value;
  }
}

int* array_list_get_value_by_index(ArrayListPtr list, size_t index) {
  if (index >= list->capacity || index >= list->size) {
      if (list->child) {
          return array_list_get_value_by_index(list->child,
                                                index - list->size);
      } else {
          return NULL;
      }
  }
  return list->data + index;
}

int main(int argc, char *argv[]) {
  ArrayListPtr vetor = array_list_create();
  int i=0;
  int n=0,control = 0,j;
      
  r: while (control == 0){
      
    scanf("%d",&n);
    if (n == 0){
      control = 1;
      goto r;
    }
    array_list_push_back(vetor, n);
    n = 0;
    i++;
  }
  for (j=0;j < i;j++){
    int* result = array_list_get_value_by_index(vetor, j);
    printf("Vetor[x] = %d\n", j, *result);
  }
}