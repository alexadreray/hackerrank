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


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int menor_zero=0;
    int maior_zero=0;
    int zero=0;
    
    for(int arr_i = 0;arr_i < n;arr_i++){
     cin >> arr[arr_i];
 }
 
 for(int i = 0;i<n;i++){
    if (arr[i] < 0)
        menor_zero+=1;
    else if (arr[i] > 0)
        maior_zero+=1;
    else
        zero+=1;
}

cout << (float)maior_zero/(float)n << endl;
cout << (float)menor_zero/(float)n << endl;
cout << (float)zero/(float)n;
return 0;
}
