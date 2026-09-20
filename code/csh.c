// Includes.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Project internal includes

#include "command.h"

// Some definitions

#define BUFFER_SIZE 1024
#define MAX_WORDS 3
#define MAX_COMMAND_LENGTH 32

void clear_screen() {
    #ifdef WIN_32
        system("cls");
    #else
        system("clear");
    #endif
}

int split (const char *line, char words[MAX_WORDS][MAX_COMMAND_LENGTH]) {
    int word_index = 0;
    int char_index = 0;
    int i = 0;

    while (line[i] != '\0' && word_index < MAX_WORDS) {
        if (line[i] == ' ' || line[i] == '\t') {
            if (char_index > 0) {
                words[word_index][char_index] = '\0';
                word_index++;
                char_index = 0;
            }
        } else {
            if (char_index < MAX_COMMAND_LENGTH - 1) {
                words[word_index][char_index++] = line[i];
            }
        }
        i++;
    }
    if (char_index > 0 && word_index < MAX_WORDS) {
        words[word_index][char_index] = '\0';
        word_index++;
    }
    return word_index;
}

typedef struct {
    int stack[1024];
    int stack_pointer;
} Stack;

void push_stack(int number, Stack *stack) {
    if (stack->stack_pointer >= 1024) {
        printf("ERROR: Stack overflow!\n");
        return;
    }
    stack->stack[stack->stack_pointer] = number;
    stack->stack_pointer++;
}

int pop_stack(Stack *stack) {
    if (stack->stack_pointer == 0) {
        printf("ERROR: Stack underflow!\n");
        return 0; 
    }
    stack->stack_pointer--;
    int temp = stack->stack[stack->stack_pointer];
    stack->stack[stack->stack_pointer] = 0;
    return temp;
}


char* input(char buff[BUFFER_SIZE]) {
    if (fgets(buff, BUFFER_SIZE, stdin) != NULL) { 
        buff[strcspn(buff, "\n")] = '\0';
        return buff;
    } else {
        return "EOF ERROR";
    }
}

int main() {
    Stack stack;
    stack.stack_pointer = 0;
    clear_screen();
    while (1) {
        char buff[BUFFER_SIZE];
        printf("csh > ");
        strcpy(buff, input(buff));
        char line[MAX_WORDS][MAX_COMMAND_LENGTH];
        int count = split(buff, line);
        
        char operator[OPERATOR_SIZE];
        strcpy(operator, line[0]);
        operator[OPERATOR_SIZE-1] = '\0';
        int a; int b; int c;
        Commands command = to_command_enum(operator);
        switch (command)
        {
            case PUSH:
                printf("PUSHING VALUE IN STACK.\n");
                push_stack(atoi(line[1]), &stack);
                break;
            
            case POP:
                printf("POPPING VALUE FROM STACK.\n");
                pop_stack(&stack);
                break;

            case ADD:
                printf("ADDING NUMBERS.\n");
                a = pop_stack(&stack);
                b = pop_stack(&stack);
                c = b + a;
                push_stack(c, &stack);
                break;

            case SUBTRACT:
                printf("SUBTRACTING NUMBER.\n");
                a = pop_stack(&stack);
                b = pop_stack(&stack);
                c = b - a;
                push_stack(c, &stack);
                break;

            case MULTIPLY:
                printf("MULTIPLYING NUMBER.\n");
                a = pop_stack(&stack);
                b = pop_stack(&stack);
                c = b * a;
                push_stack(c, &stack);
                break;

            case DIVIDE:
                printf("DIVIDING NUMBER.\n");
                a = pop_stack(&stack);
                b = pop_stack(&stack);
                c = b / a;
                push_stack(c, &stack);
                break;

            case MOD:
                printf("MODDING NUMBER.\n");
                a = pop_stack(&stack);
                b = pop_stack(&stack);
                c = b % a;
                push_stack(c, &stack);
                break;

            case XOR:
                printf("XORING NUMBER.\n");
                a = pop_stack(&stack);
                b = pop_stack(&stack);
                c = b ^ a;
                push_stack(c, &stack);
                break;

            case AND:
                printf("ANDING NUMBER.\n");
                a = pop_stack(&stack);
                b = pop_stack(&stack);
                c = b & a;
                push_stack(c, &stack);
                break;

            case OR:
                printf("ORING NUMBER.\n");
                a = pop_stack(&stack);
                b = pop_stack(&stack);
                c = b | a;
                push_stack(c, &stack);
                break;

            case NOT:
                printf("NOTING NUMBER.\n");
                a = pop_stack(&stack);
                c = ~a;
                push_stack(c, &stack);
                break;

            case SHOW:
                if (stack.stack_pointer > 0)
                    printf("TOP OF STACK = %d\n", stack.stack[stack.stack_pointer - 1]);
                else
                    printf("STACK IS EMPTY\n");
                break;

            default:
                printf("UNKNOWN COMMAND.\n");
                break;

        }
    }
}
