//
//  Created by Alexandr Talanov on 12/8/19.
//  Copyright © 2019 WristyLotus. All rights reserved.
//

#include "linkedlist.h"

struct LinkedList *list_init(void *value){
    struct LinkedList *list = malloc(sizeof(struct LinkedList));
    list -> value = value;
    list -> next = NULL;
    return list;
}

void append(struct LinkedList *head, void *value){
    if (head -> next == NULL){
        struct LinkedList *node = malloc(sizeof(struct LinkedList));
        node -> value = value;
        node -> next = NULL;
        
        head -> next = node;
        return;
    }
    else append(head -> next, value);
}

void foreach(struct LinkedList *head, consumer callback){
    if (head == NULL) return;
    else {
        callback(head -> value);
        foreach(head -> next, callback);
    }
}

void list_clean(struct LinkedList *head){
    if (head -> next == NULL) return;
    else {
        list_clean(head -> next);
        free(head);
    }
}
