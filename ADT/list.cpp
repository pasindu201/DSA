#include <iostream>
#include <list>

int main() {
    std::list<int> myList;

    // Adding elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_front(5); // Adds an element to the front

    // Iterating through the list
    for (int value : myList) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Removing elements
    myList.pop_front(); // Removes the first element
    myList.pop_back();  // Removes the last element

    // Inserting an element at a specific position
    auto it = myList.begin();
    std::advance(it, 1); // Move the iterator to the second position
    myList.insert(it, 15);

    // Removing an element at a specific position
    myList.erase(it);

    // Printing the modified list
    for (int value : myList) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
