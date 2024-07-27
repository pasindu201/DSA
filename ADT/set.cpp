#include <iostream>
#include <set>

int main() {
    std::set<int> mySet;

    // Adding elements to the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(20); // Duplicate elements are ignored

    // Iterating through the set
    for (int value : mySet) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Checking if an element exists
    if (mySet.find(20) != mySet.end()) {
        std::cout << "20 is in the set." << std::endl;
    }

    // Removing an element
    mySet.erase(20);

    // Printing the modified set
    for (int value : mySet) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Size of the set
    std::cout << "Size of the set: " << mySet.size() << std::endl;

    return 0;
}
