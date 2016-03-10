#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    std::cin >> N;
    int A[N];
    int B[N];
    int aux=0;
    
    //le todos os elementos e coloca cada um em um elemento do vetor A
    for (int i=0; i<N; i++)
    {
        std::cin >> A[i];        
    }
    aux=N;
    for (int i=0; i<N; i++)
    {
        B[i] = A[aux-1];        
        aux=aux-1;
    }   
    
    for (int i=0; i<N; i++)
    {
        std::cout << B[i] << " ";
    }
    
    
    return 0;
}
