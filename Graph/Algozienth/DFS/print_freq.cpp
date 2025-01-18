#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    std::vector<int> arr = {1, 2, 2, 1, 1, 1, 3, 3, 3};
    std::unordered_map<int, int> frequency;

    // Count frequencies
    for (int num : arr) {
        frequency[num]++;
    }

    // Print frequencies
    for (const auto& pair : frequency) {
        std::cout << "Element: " << pair.first << ", Count: " << pair.second << std::endl;
    }

    return 0;
}
