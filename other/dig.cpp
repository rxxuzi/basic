#include <iostream>
using namespace std;

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int num, flag = 0;
  
  cout << "Enter a number to search: ";
  cin >> num;
  
  for(int i = 0; i < 10; i++) {
    if(arr[i] == num) {
      flag = 1;
      break;
    }
  }
  
  if(flag == 1)
    cout << num << " found in the array" << endl;
  else
    cout << num << " not found in the array" << endl;
  
  return 0;
}
