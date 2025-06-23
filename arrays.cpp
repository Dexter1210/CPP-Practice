#include <iostream>
using namespace std;


int maxElementInArray(int arr[5]){
  int max = INT_MIN;
  for (int i =0; i<5; i++) {
    if(arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int linearSearch(int arr[5], int targetValue){
  for(int i=0; i<5; i++){
    if(arr[i] == targetValue) {
      return i;
    }
  }
  return -1;
}

// two pointer approach to reverse an array
void reverseAnArray(int arr[], int n){
  int start=0;
  int end=n-1;
  while(start<end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// unique values in an array
// [1, 2, 2, 4, 5, 4]
void uniqueValueInArray(int arr[], int s){
  for(int i=0; i<s; i++){
    int countElement = 0;
    for(int j=i+1; j<s; j++) {
      if(arr[i] == arr[j]){
        countElement++;
      }
    }
    if(countElement == 0){
      cout << arr[i];
    }
  }
}

void interesectionOfArrays(int arr1[], int s1, int arr2[], int s2){
  int size = s1 < s2 ? s1 : s2;
  int intersection[size];
  int count=0;
  for(int i=0; i< s1; i++) {
    for(int j=0; j< s2; j++) {
      if(arr1[i] == arr2[j]) {
        intersection[count] = arr1[i];
        count++;
      }
    }
    if (count >= size) {
      break;
    }
  }

  for(int i=0; i< size; i++) {
    cout << intersection[i];
  }
}

int main() {
  // int price [] = { 100, 200, 300 };
  // cout << price[0] << endl;
  // cout << sizeof(price); 

  // int arr[5];
  // cout << "Enter the elements of the array" << endl;
  // for(int i =0; i<5; i++) {
  //   cin >> arr[i];
  // }
  // int valueToSearch;
  // cout << "Enter the value to search: "<< endl;
  // cin >> valueToSearch;
  // // cout << "The largest element of the array is : "<< maxElementInArray(arr);
  // int index = linearSearch(arr, valueToSearch);
  // index != -1 ? cout << "The value is found at" << index << endl : cout << "Value not found";
  //reverseAnArray(arr, 5);
  // int arr1[9] = {1,1,2,2,2,3,4,5,6};
  // uniqueValueInArray(arr1, 9);
  int arr1[4] = {1, 2, 4, 1};
  int arr2[3] = {1, 2, 3};
  interesectionOfArrays(arr1, 4, arr2, 3);
  return 0;
 }

