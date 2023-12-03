#include <iostream>
using namespace std;
#define REP(i,a,b) for ( int i = a; i < b; i++)

//initial array
int s = 5;
int arr[5] = {1, 20, 5, 78, 30};

//insert function
void insert(int element, int pos, int &currentSize) {
    if (pos <= currentSize && pos >= 0) {
        for (int i = currentSize; i > pos; i--) arr[i] = arr[i - 1];
        arr[pos] = element;
        currentSize++;
    }
}

//delete function
void deleteElement(int pos, int &currentSize) {
    if (pos < currentSize && pos >= 0) {
        REP(i,pos,currentSize) arr[i] = arr[i + 1];
        currentSize--;
    }
}

//print function
void print(int currentSize) {
    REP(i,0,currentSize) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int currentSize = s; 
    print(currentSize);
    insert(30, 2, currentSize);
    print(currentSize);
    deleteElement(3,currentSize);
    print(currentSize);
    return 0;
}
