#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    int sum;
    int number;
    
    std::cin >> N;
    
    for (int i=0; i<N; i++)
    {
        std::cin >> number;
        sum += number;
    }
    
    std::cout << sum;
    
    
    return 0;
}
