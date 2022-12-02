#include<bits/stdc++.h>
using namespace std;

int main () {
    int x,y,temp=-1;
    cout << "enter your array size" <<endl;
    cin >>x;

    vector<int> v1;

    for(int i= 0 ; i<x; i++) {
        int y;
        cin >> y;
        v1.push_back(y);
    }

    cout << "find your number: " ;
    cin >> y;

    for(int i=0; i<v1.size(); i++) {
        if(v1[i]==y) {
            cout << "Item is found position at : " << i ;
            temp=0;
            break;
        }
    }
    if(temp == -1){
        cout << "Item is not found";
    }


    //cout << "item not found";

    return 0;
}
