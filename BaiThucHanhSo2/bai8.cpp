// Pham Dang Anh Duc - 20210207
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
// ham so sanh tong cac phan tu trong 2 vector và tra ve gia tri true/false
bool  comparison( const vector<int> &p,const vector<int>&q){
    int sum1 = accumulate(p.begin(), p.end(), 0);
    int sum2 = accumulate(q.begin(), q.end(), 0);
    return sum1>sum2 ;  
}


int main() {
    int val1, val2;
    cin >> val1 >> val2;
    vector< vector<int> > a = {
        {1, 3, 7},
        {2, 3, 4, val1},
        {9, 8, 15},
        {10, val2},
    };
  
    // sap xep cac vector trong a theo tong cac phan tu giam dan 
    
    sort (a.begin(),a.end(),comparison);

    for (const auto &v : a) {
        for (int it : v) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// Pham Dang Anh Duc - 20210207