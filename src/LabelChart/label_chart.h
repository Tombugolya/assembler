#ifndef LABEL_CHART_H
#define LABEL_CHART_H
#include "../Common/common.h"

typedef struct label {
    char labelName[MAX_LABEL_CHARS];
    int address;
    line_type type;
    boolean external;
    boolean entry;
    struct label* next;
} Label;

void add_to_label_chart(Label**, char[], int, line_type, boolean, boolean);
void print_label_chart(Label**);
void update_label_value(Label**, char*, int);
void update_label_char(Label**, int);
boolean is_unique_label(Label**, char*);
#endif /* LABEL_CHART_H */