#ifndef WEBLINKS_H_INCLUDED
#define WEBLINKS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct web Web;
typedef struct webLinks WebLinks;

WebLinks* init();

void add_start(WebLinks** list_link, char* link, char* keyword);
void add_middle(WebLinks** list_link, char* link, char* keyword);
void add_end(WebLinks** list_link, char* link, char* keyword);

int list_null(WebLinks* list_links);

void toString(WebLinks* list_link);
void close(WebLinks* list_link);
#endif // WEBLINKS_H_INCLUDED
