#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N; //numero total de alunos
    int K; //numero minimo para o professor cancelar a aula
    int T; //numero de inputs
    int temp;
    int aux;
    cin >> T;    
    
    for (unsigned int i=0; i<T; i++) {
        aux=0;
        cin >> N >> K;   
        //cout << N << ' ' << K << endl; 
        for (unsigned int j=0; j<N; j++) {
            cin >> temp;
            if (temp<=0) {
                aux+=1;
            }
            //cout << temp << ' ';
        }
        
        if (aux<K){
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
        
        //cout << endl;
    }
    
    
    
    return 0;
} 
