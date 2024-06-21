#include <iostream>
#include <vector>
using namespace std;
//This program move the array 0 to the end of the array
int main() {
    vector<int> arr = { 1, 0, 2, 0, 3, 0 };
    int j = 0;
    // Printing the array after pushing all zeros to the front
    std:; cout << "Input Array" << std::endl;
    for (int x : arr) {
        cout << x << " ";
    }
    std::cout << std::endl<< "After moving " << std::endl;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    } 
         

    // Printing the array after pushing all zeros to the front
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
