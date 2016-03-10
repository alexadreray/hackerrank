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
  vector< vector<int> > a(n,vector<int>(n));
  int sum1=0;
  int sum2=0;
  
  for(int a_i = 0;a_i < n;a_i++){
   for(int a_j = 0;a_j < n;a_j++){
    cin >> a[a_i][a_j];
  }
}

   //soma diagonal principal 
for(int a_i = 0;a_i < n;a_i++){
 for(int a_j = 0;a_j < n;a_j++){
  if (a_i == a_j){
    sum1+=a[a_i][a_j];
  }
}
       //cout << endl;
}

    //soma diagonal nao principal
for(int a_i = 0;a_i < n;a_i++){
 for(int a_j = 0;a_j < n;a_j++){
  if (a_j == n - 1 - a_i){
    sum2+=a[a_i][a_j];
  }
}
       //cout << endl;
}

    //cout << endl << sum1 << endl;
    //cout << sum2;

cout << abs(sum1-sum2);

return 0;
}
