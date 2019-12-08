#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void print_value(void *value){
    printf("%s\n", value);
}

int main(int argc, const char * argv[]) {
    
    struct LinkedList *list = list_init("1");
    append(list, "2");
    append(list, "3");
    append(list, "4");
    append(list, "5");
    
    foreach(list, &print_value);
    
    list_clean(list);
    
    return 0;
}
