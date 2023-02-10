#include <iostream>
#include <vector>

void merge_arrays(int data1[], int data2[], unsigned size1, unsigned size2) {
    std::vector<int> a;
    for (size_t i {}; i < size1; ++i) {
        a.push_back(data1[i]);
    }
    for (size_t i {}; i < size2; ++i) {
        a.push_back(data2[i]);
    }
    for (const auto n : a) {
        std::cout << n << ' ';
    }
}

int main() {
    int data1[] {1,2,3,4,5,66,77};
    int data2[] {10,20,30,40,50,60};
    merge_arrays(data1, data2, 7, 6);
}