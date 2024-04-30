#include <iostream>
using namespace std;
int main() {
    const int size = 5;
    int firstArray[size] = { 1, 2, 3, 4, 5 };
    int secondArray[size];

    int* pFirstArray = firstArray;
    int* pSecondArray = secondArray;

    for (int i = 0; i < size; i++) {
        *pSecondArray = *pFirstArray;
        pSecondArray++;
        pFirstArray++;
    }

    for (int i = 0; i < size; i++) {
        cout << secondArray[i] << " ";
        cout << endl;
    }
    cout << "*************" << endl;

    const int b = 5;
    int array[b] = { 1, 2, 3, 4, 5 };

    int* pArray = array;

    for (int i = 0; i < b / 2; i++) {
        int temp = pArray[i];
        pArray[i] = pArray[b - i - 1];
        pArray[b - i - 1] = temp;
    }

    for (int i = 0; i < b; i++) {
        cout << array[i] << " ";
        cout << endl;
    }
    cout << "*************" << endl;

    const int a = 5;
    int firstArr[a] = { 1, 2, 3, 4, 5 };
    int secArray[a];

    int* pFirstArr = firstArr;
    int* pSecArray = secArray;

    for (int i = a - 1; i >= 0; i--) {
        *pSecArray = *pFirstArr;
        pSecArray++;
        pFirstArr++;
    }

    for (int i = 0; i < size; i++) {
        cout << secondArray[i] << " ";
    }
}