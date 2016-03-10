#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    int aux=1;
    cin >> N;
    
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            if (j<N-aux)
            {
                cout << " ";    
            }
            else
            {
                cout << "#";
            }
        } 
        aux += 1;
        cout << endl;
    }

    return 0;
}
