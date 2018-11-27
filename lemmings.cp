#include <iostream>
using namespace std;

struct node {
    node *next;
    string num;

    node (string num) {
        this->num = num;
        this->next = nullptr;
    }

}typedef node;

class stack {
    node *top;

public:
    stack() {
        this->top = new node("");
    }

    void stack_push (string num) {
        node *n = new node(num);

        if(top->next == NULL) {
            top->next = n;
        } else {
            n->next = top->next;
            top->next = n;
        }
    }

    node* stack_pop () {
        node* removed = top->next;
        top->next = removed->next;
        return removed;
    }

    bool hasNext () {
        if(top->next != nullptr)
            return true;
        return false;
    }

    string num() {
        return top->next->num;
    }
};

class queue {
    node *front;
    node *rear;

public:queue() {
        this->front = new node("");
        this->rear = front;
    }

    void enqueue (string num) {
        node *n = new node(num);
        rear->next = n;
        rear = n;
    }

    node* dequeue () {
        node *removed = front->next;
        front->next = removed->next;
        return removed;
    }


    bool hasNext () {
        if(front->next != nullptr)
            return true;
        return false;
    }

    string num() {
        return front->next->num;
    }

};

int main() {
    int cases, lemmings;
    string num;
    for(int q = 0;q<cases;q++) {
        queue *entrance = new queue();
        queue *exit = new queue();
        stack *stack = new stack();
        cin >> lemmings;
        

    }
}
