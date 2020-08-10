void MyQueue :: push(int x) {
    QueueNode *t=new QueueNode(x);
    if(!front) {
        front=t;
        rear=t;
    }
    else {
        rear->next=t;
        rear=t;
    }
}
int MyQueue :: pop() {
    if(!front)
        return -1;
    int x = front->data;
    front=front->next;
    return x;
}
