#include<iostream>
using namespace std;

int main() {
    int SIZE, n, choice, item;
    
    cout << "Enter size of queue: ";
    cin >> SIZE;

    int queue[50];  
    int front = -1, rear = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    if(n > SIZE) {
        cout << "Queue Overflow";
        return 0;
    }

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> item;
        if(front == -1)
            front = 0;
        rear++;
        queue[rear] = item;
    }

    do {
        cout << "\n---QUEUE OPERATIONS---\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: 
                if(rear == SIZE - 1) {
                    cout << "Queue Overflow";
                } else {
                    cout << "Enter element: ";
                    cin >> item;
                    if(front == -1)
                        front = 0;
                    rear++;
                    queue[rear] = item;
                }
                break;

            case 2: 
                if(front == -1 || front > rear) {
                    cout << "Queue Underflow";
                } else {
                    cout << "Deleted element: " << queue[front];
                    front++;
                }
                break;

            case 3: 
                if(front == -1 || front > rear) {
                    cout << "Queue is Empty";
                } else {
                    cout << "Front element: " << queue[front];
                }
                break;

            case 4: 
                if(front == -1 || front > rear) {
                    cout << "Queue is Empty";
                } else {
                    cout << "Queue elements: ";
                    for(int i = front; i <= rear; i++) {
                        cout << queue[i] << " ";
                    }
                }
                break;

            case 5:
                cout << "Exit";
                break;

            default:
                cout << "invalid choice ";
        }

    } while(choice !=0);

    return 0;
}
