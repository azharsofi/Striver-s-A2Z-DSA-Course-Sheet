class MyCircularQueue {
public:
    int *a;
    int size;
    int r;
    int f;

    MyCircularQueue(int k) {
        size = k;
        r = -1;
        f = -1;
        a = new int[size];
    }

    bool enQueue(int value) {
        if ((f == 0 && r == size - 1) || (f == (r + 1) % size))
            return false;
        else {
            if (r == -1 && f == -1) {
                f = 0;
                r = 0;
                a[r] = value;
            } else {
                r = (r + 1) % size;
                a[r] = value;
            }
        }
        return true;
    }

    bool deQueue() {
        if (f == -1 && r == -1)
            return false;
        else {
            if (f == r) {
                r = -1;
                f = -1;
            } else {
                f = (f + 1) % size;
            }
        }
        return true;
    }

    int Front() {
        if (f == -1 && r == -1)
            return -1;
        else
            return a[f];
    }

    int Rear() {
        if (f == -1 && r == -1)
            return -1;
        else
            return a[r];
    }

    bool isEmpty() {
        return (f == -1 && r == -1);
    }

    bool isFull() {
        return (f == 0 && r == size - 1) || (f == (r + 1) % size);
    }
};
