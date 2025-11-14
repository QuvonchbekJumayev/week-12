//PROBLEM 1
#include <iostream>
using namespace std;
// int Max(int *arr, int size) {
//     int max = *arr;
//     for (int i = 1; i < size; i++) {
//         if (*(arr + i) > max) {
//             max = *(arr + i);
//         }
//     }
//     return max;
// }
// int main() {
//     int heights[] = {150, 165, 172, 160, 180};
//     int size = 5;
//     int maximum = Max(heights, size);
//     cout << "Maximum height = " << maximum << " cm" << endl;
//     return 0;
// }
//PROBLEM 2
// int main() {
//     int a, b;
//     cout << "Enter value for a: ";
//     cin >> a;
//     cout << "Enter value for b: ";
//     cin >> b;
//     int *ptrA = &a;
//     int *ptrB = &b;
//     cout << "Value of a using pointer: " << *ptrA << endl;
//     cout << "Value of b using pointer: " << *ptrB << endl;
//     return 0;
// }
//PROBLEM 3
// int main() {
//     int n;
//     cout << "How many numbers? ";
//     cin >> n;
//     int *arr = new int[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int *ptrMax = &arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > *ptrMax) {
//             ptrMax = &arr[i];
//         }
//     }
//     cout << "Max value is: " << *ptrMax << endl;
//     cout << "Pointer to max is: " << ptrMax << endl;
//     delete[] arr;
//     return 0;
// }
//problem4
// int main() {
//     srand(time(0));
//     int arr[10];
//     int *ptrA = arr;
//     for (int i = 0; i < 10; i++) {
//         arr[i] = rand() % 100;
//     }
//     for (int i = 0; i < 10; i++) {
//         cout << "Address: " << (ptrA + i)
//              << "  Value: " << *(ptrA + i) << endl;
//     }
//     return 0 ;
//     }
//problem 5
// int main() {
//     int message;
//     message = 42;
//     int *ptr;
//     ptr = &message;
//     cout << "Decided message: " << *ptr << endl;
//     return 0;
// }
//problem 6
// int main() {
//     int treasures[] = {10, 20, 30, 40, 50};
//     int *ptr = treasures;
//     ptr = ptr + 4;
//     cout << "Last treasure value: " << *ptr << endl;
//     return 0;
// }
//problem 7
// using namespace std;
// int main() {
//     int score = 75;
//     int *ptrScore = &score;
//     cout << "Original score: " << score << endl;
//     *ptrScore = *ptrScore + 10;
//     cout << "Updated score: " << score << endl;
//     return 0;
// }
//problem 8
// int main() {
//     int score = 75;
//     int *ptrScore = &score;
//     cout << "Original score: " << score << endl;
//     *ptrScore = *ptrScore + 10;
//     cout << "Updated score: " << score << endl;
//     return 0;
// }
//problem 9
// void reverseArray(int *arr, int size) {
//     int *left = arr;
//     int *right = arr + size - 1;
//     while (left < right) {
//         int temp = *left;
//         *left = *right;
//         *right = temp;
//         left++;
//         right--;
//     }
// }
// int main() {
//     int nums[] = {1, 2, 3, 4, 5};
//     int size = 5;
//     cout << "Original array: ";
//     for (int i = 0; i < size; i++)
//         cout << nums[i] << " ";
//     cout << endl;
//     reverseArray(nums, size);
//     cout << "Reversed array: ";
//     for (int i = 0; i < size; i++)
//         cout << nums[i] << " ";
//     cout << endl;
//     return 0;
// }
// //problem 10
// int main() {
//     int scores[] = {78, 95, 85, 62, 88};
//     int size = 5;
//     int *first = nullptr;
//     int *second = nullptr;
//     int *third = nullptr;
//     for (int i = 0; i < size; i++) {
//         int *ptr = &scores[i];
//         if (first == nullptr || *ptr > *first) {
//             third = second;
//             second = first;
//             first = ptr;
//         }
//         else if (second == nullptr || *ptr > *second) {
//             third = second;
//             second = ptr;
//         }
//         else if (third == nullptr || *ptr > *third) {
//             third = ptr;
//         }
//     }
//     cout << "Top 3 scores:" << endl;
//     cout << "1st: " << *first << endl;
//     cout << "2nd: " << *second << endl;
//     cout << "3rd: " << *third << endl;
//     return 0;
// }



