#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int x[5] = {10,30,20,50,40};
    sort(x, x+5);
    for (int i=0;i<5;i++) {
        cout << x[i] << " ";
        if (i==4) cout <<endl;
    }
    cout << endl;
    sort(x, x+5, greater<int>());
    for(int i=0;i<5;i++) {
        cout << x[i] << " ";
        if (i==4) cout <<endl;
    }
    return 0;
}
