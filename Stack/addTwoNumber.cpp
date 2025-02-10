#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

class Stack
{
private:
    char arr[MAX_SIZE]; // Change the data type to char
    int top;

public:
    Stack()
    {
        top = -1;
    }
    bool isEmpty()
    {
        return (top == -1);
    }

    bool isFull()
    {
        return (top == MAX_SIZE - 1);
    }

    void push(char element)
    { // Accept char type
        if (!isFull())
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack is full. Cannot push element " << element << ".\n";
        }
    }

    void pop()
    {
        if (!isEmpty())
        {
            char poppedElement = arr[top]; // Change the data type to char
            top--;
        }
        else
        {
            cout << "Stack is empty. Cannot pop from an empty stack.\n";
        }
    }

    char topElement()
    {
        if (!isEmpty())
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty.\n";
            return '\0';
        }
    }
    string reverseString(const string &input)
    { 
      
    

    }
};

int main()
{

    Stack myStack;
    string input = "Educative";
    cout << "Original string: " << input << endl;
    string reversed = myStack.reverseString(input);
    cout << "Reversed string: " << reversed << endl;

    return 0;

}