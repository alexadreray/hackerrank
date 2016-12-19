// https://www.hackerrank.com/challenges/mini-max-sum

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

long int mymaximum(int a[], int numberOfElements) {
    long int mymaximum = 0;
    for(int i=0; i<numberOfElements; i++) {
        if(a[i] > mymaximum) {
            mymaximum = a[i];
        }
    }
    return mymaximum;
}

long int myminimum(int a[], int numberOfElements, long int myminimum) {
    for(int j=0; j<numberOfElements; j++) {
        if(a[j] < myminimum) {
            myminimum = a[j];
        }
    }    
    return myminimum;
}

int main(){
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    long int sum_min;
    long int sum_max;
    long int sum;
    int vet[5];
    
    cin >> a >> b >> c >> d >> e;

    vet[0] = b+c+d+e;
    vet[1] = a+c+d+e;
    vet[2] = a+b+d+e;
    vet[3] = a+b+c+e;
    vet[4] = a+b+c+d;
    
    sum_max = mymaximum(vet,5);
    sum_min = myminimum(vet,5,sum_max);
    cout << sum_min << " " << sum_max;
    
    return 0;
}
