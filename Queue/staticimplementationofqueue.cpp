#include <bits/stdc++.h> 
class Queue {
public:
    int *a;
    int size;
    int rear;
    int f;

    Queue() {
        size = 1001;
        rear = -1;
        f = -1;
        a = new int[size];
    }

    bool isEmpty() {
        return (rear == -1 && f== -1);
    }

    void enqueue(int data) {
        if (rear == size - 1)
            return;
        else {
            if (isEmpty()) {
                f = 0;
                rear = 0;
                a[rear] = data;
            } else {
                rear++;
                a[rear] = data;
            }
        }
    }

    int dequeue() {
        if (isEmpty())
            return -1;
        int ans = a[f];
        if (rear == f) {
            rear = -1;
            f = -1;
        } else {
            f++;
        }
        return ans;
    }

    int front() {
        if (isEmpty())
            return -1;
        else
            return a[f];
    }
};
