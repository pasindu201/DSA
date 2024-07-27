#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    // Adding elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Accessing the front and back elements
    std::cout << "Front element: " << q.front() << std::endl;
    std::cout << "Back element: " << q.back() << std::endl;

    // Removing an element from the queue
    q.pop();

    // Accessing the front element after pop
    std::cout << "Front element after pop: " << q.front() << std::endl;

    // Checking if the queue is empty
    if (q.empty()) {
        std::cout << "The queue is empty." << std::endl;
    } else {
        std::cout << "The queue is not empty." << std::endl;
    }

    // Getting the size of the queue
    std::cout << "Size of the queue: " << q.size() << std::endl;

    return 0;
}
