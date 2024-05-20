#include <iostream>
#include <vector>
#include <list>
#include <chrono>

int main() {
    std::vector<int> vec;
    std::list<int> lst;

    int n = 1000000; // количество элементов

    // время для вектора
    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < n; i++) {
        vec.push_back(i);
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Time taken by vector: " << duration.count() << " seconds" << std::endl;

    // время для списка
    start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < n; i++) {
        lst.push_back(i);
    }

    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Time taken by list: " << duration.count() << " seconds" << std::endl;

    return 0;
}