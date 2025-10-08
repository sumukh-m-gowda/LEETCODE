struct stackusingll {
    char data;
    struct stackusingll * next;
};
typedef struct stackusingll * STACK;
int match(char a , char b){
    return (a == '(' && b == ')' || a == '{' && b == '}' || a == '[' && b == ']');
}
void push(STACK * s,char data){
    STACK new = (STACK) malloc (sizeof(struct stackusingll));
    new->data = data;
    new->next = *s;
    *s = new ;
}
int isempty(STACK s){
    return s == NULL;
}
char pop(STACK * s){
    if(isempty(*s)){
        return '\0';
    }
    STACK temp = *s;
    char data = temp->data;
    *s = (*s)->next;
    free(temp);
    return data;
}
bool isValid(char* str) {
    STACK s = NULL ;
    for (int i = 0 ; str[i] != '\0' ; i++) {
        char c = str[i];
        if (c == '(' || c == '{' || c == '['){
            push(&s,c);
        }
        else if(c == ')' || c == '}' || c == ']'){
            if(isempty(s)){
                return false;
            }
            char f = pop(&s);
            if(!match(f,c)){
                return false;
            }

        }
    }
    return isempty(s);
}
