//You’re given an unsorted array arr of n integers and an integer x. Find the floor and ceiling of x in arr[0..n-1].
#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int floor = -1;
    int ceil = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            floor = arr[mid];
            ceil = arr[mid];
            break;
        }
        else if (arr[mid] < x) {
            floor = arr[mid];
            low = mid + 1;
        }
        else {
            ceil = arr[mid];
            high = mid - 1;
        }
    }
    return {floor, ceil};
}

int main() {
    
    return 0;
}