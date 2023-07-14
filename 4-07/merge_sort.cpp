#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int h) {
    // int n1 = m - l + 1, n2 = h - m;
    // int L[n1], R[n2];
    // for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    // for (int i = 0; i < n2; i++) R[i] = arr[m + 1 + i];
    // int i = 0, j = 0, k = l;
    // while (i < n1 && j < n2) {
    //     if (L[i] <= R[j]) arr[k++] = L[i++];
    //     else arr[k++] = R[j++];
    // }
    // while (i < n1) arr[k++] = L[i++];
    // while (j < n2) arr[k++] = R[j++];
    int k = 0;
    int temp[h - l + 1];
    int left = l, right = m + 1;
    while(left<=m && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp[k]=arr[left];
            left++;
            k++;
        }
        else
        {
            temp[k]=arr[right];
            right++;
            k++;
        }
    }
    while (left <= m) {
        temp[k] = arr[left];
        left++;
        k++;
    }
    while (right <= high) {
        temp[k] = arr[right];
        right++;
        k++;
    }
        
}
    

void merge_sort(int arr[], int l, int h) {
    if (l >= h) return;
    int m = l + (h - l) / 2;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, h);
    merge(arr, l, m, h);
}
int main() {
    
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}