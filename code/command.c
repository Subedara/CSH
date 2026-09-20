#include "command.h"


Commands to_command_enum(char operator[OPERATOR_SIZE]) {
    
    if (strcmp(operator, "push") == 0) {
        return PUSH;
    } else if (strcmp(operator, "pop") == 0) {
        return POP;
    } else if (strcmp(operator, "add") == 0) {
        return ADD;
    } else if (strcmp(operator, "subtract") == 0) {
        return SUBTRACT;
    } else if (strcmp(operator, "multiply") == 0) {
        return MULTIPLY;
    } else if (strcmp(operator, "divide") == 0) {
        return DIVIDE;
    } else if (strcmp(operator, "mod") == 0) {
        return MOD;
    } else if (strcmp(operator, "xor") == 0) {
        return XOR;
    } else if (strcmp(operator, "and") == 0) {
        return AND;
    } else if (strcmp(operator, "or") == 0) {
        return OR;
    } else if (strcmp(operator, "not") == 0) {
        return NOT;
    } else if (strcmp(operator, "show") == 0) {
        return SHOW;
    }

    return -1;
}