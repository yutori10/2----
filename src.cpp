//pow()関数の引数がfloatだった...
#include <bits/stdc++.h>
using namespace std;

#define INDEX (float)2
#define FIRST_QUIZ_LEN 30
int main() {
    int ans;
    for(int i=0;i<FIRST_QUIZ_LEN;i++) {
        cout << i+1 << "^2=";
        cin >> ans;
        if(ans==pow((float)(i+1), INDEX)) {
            cout << "correct" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }
    return 0;
}
