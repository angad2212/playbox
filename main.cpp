// Entry point for running your test cases and testing the cache.

#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, std::string> cache;

    // Insert data into cache
    cache["user_1"] = "Angad";
    cache["user_2"] = "Bobby";

    // Retrieve data from cache
    std::cout << "user_1: " << cache["user_1"] << std::endl;
    std::cout << "user_2: " << cache["user_2"] << std::endl;

    return 0;
}
