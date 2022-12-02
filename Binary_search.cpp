#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int size, int x) {

    int start = 0;
    int end = size-1;

    while(start <= end) {
        int mid = (start+end)/2;

        if(a[mid] == x) return mid; // item found;
        else if( x < a[mid]) {
            end = mid-1;            // item lower then mid;
        } else start = mid+1;       // Item bigger then mid;
    };

    return -1;
}

int main () {
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,14,17,23,34,54,66};

    int res = binarySearch(arr, 18, 11);
    cout << "found in index: " << res <<endl;

    return 0;
}

// Time complexity
// Binary search complexity is (WC): O(log n);
// BC: O(1).


