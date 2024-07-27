#include <iostream>
#include <stack>

int main() {
    // Declare a stack of integers
    std::stack<int> s;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Access the top element
    std::cout << "Top element: " << s.top() << std::endl;

    // Pop an element from the stack
    s.pop();

    // Access the top element after popping
    std::cout << "Top element after pop: " << s.top() << std::endl;

    // Check if the stack is empty
    if (s.empty()) {
        std::cout << "The stack is empty." << std::endl;
    } else {
        std::cout << "The stack is not empty." << std::endl;
    }

    // Get the size of the stack
    std::cout << "Size of the stack: " << s.size() << std::endl;

    return 0;
}
