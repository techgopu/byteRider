#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    int r1 = 0, r2 = 0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++)
    {
       for(int a_j = 0;a_j < n;a_j++)
       {
          cin >> a[a_i][a_j];
       }
    }
    for(int i = 0; i<n; i++)
       {
           for(int j = 0; j<n; j++)
           {
                if(i==j)
                    r1 += a[i][j];
                if(i+j == n)
                    r2 += a[i][j];
           }
        }
    cout<<abs(r1-r2);
    cout<<(2/6);
    return 0;
}
