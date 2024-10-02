#include <iostream>
#define MAX 5  // Define the maximum size of the stack

using namespace std;

class ArrayStack {
private:
    int arr[MAX];   // Array to hold the stack elements
    int top;        // Index of the top element

public:
    // Constructor to initialize stack
    ArrayStack() {
        top = -1;  // Stack is empty initially
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (top == MAX - 1) {
            cout << "Stack Overflow! Cannot push " << value << ".\n";
        } else {
            top++;
            arr[top] = value;
            cout << value << " pushed to the stack.\n";
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! No elements to pop.\n";
        } else {
            int poppedValue = arr[top];
            top--;
            cout << poppedValue << " popped from the stack.\n";
        }
    }

    // Function to display all elements of the stack
    void display() {
        if (top == -1) {
            cout << "Stack is empty!\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }

    // Function to exit the program
    void exitProgram() {
        cout << "Exiting the program.\n";
        exit(0);  // Exit the program
    }
};

// Main function
int main() {
    ArrayStack stack;
    int choice, value;

    while (true) {
        // Menu for stack operations
        cout << "\n----- Stack Menu -----\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:  // Push operation
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:  // Pop operation
                stack.pop();
                break;
            case 3:  // Display operation
                stack.display();
                break;
            case 4:  // Exit operation
                stack.exitProgram();
                break;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    }
    return 0;
}
