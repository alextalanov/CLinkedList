//
//  linkedlist.h
//
//  Created by Alexandr Talanov on 12/8/19.
//  Copyright © 2019 WristyLotus. All rights reserved.
//

#ifndef linkedlist_h
#define linkedlist_h

#include <stdio.h>
#include <stdlib.h>

typedef void (* consumer)(void *);

struct LinkedList {
    struct LinkedList *next;
    void *value;
};

struct LinkedList *list_init(void *value);

void append(struct LinkedList *head, void *value);

void foreach(struct LinkedList *head, consumer callback);

void list_clean(struct LinkedList *head);

#endif
