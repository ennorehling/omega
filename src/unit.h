#pragma once

typedef struct unit_type {
    char *name;
    int flags;
} unit_type;

typedef struct unit {
    unit_type *type;
    int id;
    char *name;
    struct unit *next;
    struct unit *child;
    struct unit *parent;
    int flags;
} unit;

unit *unit_create(unit_type *type);
void unit_free(unit *u);

void unit_stack(unit *u, unit *parent);
void unit_unstack(unit *u);
