#include <iostream>
#include <vector>
#include <list>
#include <chrono>

#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>

int main() {
    std::vector<int> vec;
    std::list<int> lst;

    int n = 10000; // количество элементов

    // замеряем память для вектора
    for (int i = 0; i < n; i++) {
        vec.push_back(rand());
    }
    std::cout << "Memory used by vector: " << sizeof(vec) << " bytes" << std::endl;

    // замеряем память для списка
    for (int i = 0; i < n; i++) {
        lst.push_back(rand());
    }
    std::cout << "Memory used by list: " << sizeof(lst) << " bytes" << std::endl;

    return 0;
}