


int isempty(int *stack, int* top){
    if((*top) == -1)
        return 1;
    return 0;
}

void push(int *stack, int* top, int val){
    stack[++(*top)] = val;
}

void pop(int *stack, int* top){
    (*top)--;
}

bool validateStackSequences(int* pushed, int pushedSize, int* popped, int poppedSize){
    int MAXSIZE = 1001;       
    int stack[1001];     
    int top = -1;            

    int n = pushedSize;
    int m = poppedSize;
    int j = 0;
    for(int i = 0;i<n; i++){
        push(stack, &top, pushed[i]);
        
        while(!isempty(stack, &top) && j<m && popped[j] == stack[top]){
            pop(stack, &top);
            j++;
        }
    }
    if(j == m)
        return true;
    return false;
}