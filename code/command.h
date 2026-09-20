#pragma once

#include <string.h>

#define OPERATOR_SIZE 9

typedef enum { 
    ADD = 0,
    SUBTRACT = 1,
    MULTIPLY = 2,
    DIVIDE = 3,
    MOD = 4,
    XOR = 5,
    AND = 6,
    OR = 7,
    NOT = 8,
    PUSH = 9,
    POP = 10,
    SHOW = 11,
    EXIT = 99
} Commands;

Commands to_command_enum(char operator[OPERATOR_SIZE]); 