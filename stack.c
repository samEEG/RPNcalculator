#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

int stack[MAX_SIZE];
int top = 0;

void push(int value) {
    if(top > MAX_SIZE) {
        fprintf(stderr, "pushTokenStack: out of stack space, aborting\n");
        exit(1);
    }

    stack[top++] = value;
}

int pop(void) {
    if(top < 0) {
        fprintf(stderr,"popTokenStack: popping an empty stack, aborting\n");
        exit(1);
    }
	return stack[--top];
}

int printStack(void) {
    return stack[0];
}
