#include <iostream>
#include <unordered_map>

int countMaxDuplicates(int arr[], int size) {
    std::unordered_map<int, int> frequency;

    // Count the frequency of each element
    for (int i = 0; i < size; ++i) {
        frequency[arr[i]]++;
    }

    // Find the maximum frequency
    int maxFreq = 0;
    for (auto& pair : frequency) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
        }
    }

    return maxFreq;
}

int main() {
    int arr1[] = {2, 2, 4, 4, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << "Maximum duplicates: " << countMaxDuplicates(arr1, size1) << std::endl;

    int arr2[] = {2, 3, 4, 3, 2, 3, 3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    std::cout << "Maximum duplicates: " << countMaxDuplicates(arr2, size2) << std::endl;

    return 0;
}
