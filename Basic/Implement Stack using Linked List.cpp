void MyStack ::push(int x) {
    StackNode *t=new StackNode(x);
    t->next=top;
    top=t;
}

int MyStack ::pop() {
    if(!top)
        return -1;
    int x=top->data;
    top=top->next;
    return x;
}

