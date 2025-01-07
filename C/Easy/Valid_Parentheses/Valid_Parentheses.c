#include <stdbool.h>

bool isValid(char* s) {
    int n = strlen(s);
    if (n % 2 != 0) return false;

    char stack[n];
    int top = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        } else {
            if (top == -1) return false;
            char topElement = stack[top--];
            if ((s[i] == ')' && topElement != '(') || 
                (s[i] == ']' && topElement != '[') || 
                (s[i] == '}' && topElement != '{')) {
                return false;
            }
        }
    }

    return top == -1;
}