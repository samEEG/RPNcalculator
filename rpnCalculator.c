#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

int main() {

    char c[100]; /*Highest digit input number */
    int num;
    scanf("%s", c);
    while(strcmp(c,"print")){
        int val = atoi(c);
        if(val != 0) {
            push(val);
        }
        else {
            if(c[0] == '+') {
                int num = pop() + pop();
                push(num);
            }
            else if(c[0] == '-') {
                int num1 = pop();
                int num2 = pop();
                push(num2 - num1);
            }
            else if (c[0] == '*') {
                int num1 = pop();
                int num2 = pop();
                push(num2 * num1);
            }
            else if (c[0] == '/') {
                int num1 = pop();
                int num2 = pop();
                push(num2 / num1);
            }
        }
        scanf("%s", c);

    }
    printf("Answer: %d\n", printStack());
}

