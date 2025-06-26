#include <iostream>
using namespace std;

vector <int> bubbleSort(vector <int> arr) {
    int n = arr.size();
    for(int i =0; i<n-1; i++){
        for(int j = 0; j< n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    return arr;
}

vector <int> selectionSort(vector <int> arr) {
    int n = arr.size();
    for(int i =0; i< n-1; i++){
        int smallestIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
    return arr;
}
vector <int> insertionSort(vector <int> arr) {
    int n = arr.size();
    for(int i =1; i< n; i++ ){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    return arr;
}

int main() {
    vector <int> arr = {11, 23, 43, 23, 76, 67, 82, 21, 53};
    vector <int> bubbleSortedArr = bubbleSort(arr);
    cout << "bubblesorted array is "<< endl;
    for(int i : bubbleSortedArr){
        cout << i << " ";
    }
    cout << endl;
    vector <int> selectionSortedArr = selectionSort(arr);
    cout << "selection sorted array is "<< endl;
    for(int i : selectionSortedArr){
        cout << i << " ";
    }
    cout << endl;
    vector <int> insertionSortedArr = insertionSort(arr);
    cout << "insertion sorted array is "<< endl;
    for(int i : insertionSortedArr){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}