#include <stdio.h>
#include <stdlib.h>

#define MAX 100  

typedef struct {
    int top;
    int items[MAX];
} Stack;

void initialize(Stack* s);
int isFull(Stack* s);
int isEmpty(Stack* s);
void push(Stack* s, int item);
int pop(Stack* s);
void display(Stack* s);

int main() {
    Stack s;
    initialize(&s);

    int choice, value;

    while (1) {
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (isFull(&s)) {
                    printf("Stack is full. Cannot push more elements.\n");
                } else {
                    printf("Enter the value to push: ");
                    scanf("%d", &value);
                    push(&s, value);
                    printf("Pushed %d onto the stack.\n", value);
                }
                break;
            case 2:
                if (isEmpty(&s)) {
                    printf("Stack is empty. Cannot pop elements.\n");
                } else {
                    value = pop(&s);
                    printf("Popped %d from the stack.\n", value);
                }
                break;
            case 3:
                display(&s);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
                break;
        }
    }

    return 0;
}

void initialize(Stack* s) {
    s->top = -1;
}

int isFull(Stack* s) {
    return s->top == MAX - 1;
}

int isEmpty(Stack* s) {
    return s->top == -1;
}

void push(Stack* s, int item) {
    if (isFull(s)) {
        printf("Stack overflow.\n");
    } else {
        s->items[++(s->top)] = item;
    }
}


int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow.\n");
        return -1; 
    } else {
        return s->items[(s->top)--];
    }
}

void display(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements:\n");
        for (int i = s->top; i >= 0; i--) {
            printf("%d\n", s->items[i]);
        }
    }
}
