#include <iostream>
#include <map>
#include <string>

int main() {
    // Declare a map where the key is a string and the value is an integer
    std::map<std::string, int> ageMap;

    // Insert key-value pairs into the map
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    ageMap["Charlie"] = 35;

    // Another way to insert key-value pairs
    ageMap.insert(std::make_pair("David", 40));

    // Accessing elements by key
    std::cout << "Alice's age: " << ageMap["Alice"] << std::endl;

    // Iterating over the map
    std::cout << "All entries in the map:" << std::endl;
    for (const auto& pair : ageMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Checking if a key exists
    if (ageMap.find("Eve") != ageMap.end()) {
        std::cout << "Eve's age: " << ageMap["Eve"] << std::endl;
    } else {
        std::cout << "Eve not found in the map." << std::endl;
    }

    // Removing an element by key
    ageMap.erase("Bob");

    // Iterating over the map after removal
    std::cout << "Map after removing Bob:" << std::endl;
    for (const auto& pair : ageMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
