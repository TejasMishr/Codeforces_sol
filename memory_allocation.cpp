//

#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int* n_malloc = (int*)malloc(10 * sizeof(int));
    int* n_calloc = (int*)calloc(10 , sizeof(int));
    cout << "Numbers (malloc):\n";
    for (int i=0;i<10;i++) cout<<n_malloc[i]<<" "; //my expected output was random values
    cout << endl;
    cout << "Numbers (calloc):\n";
    for (int i=0; i<10;i++) cout<<n_calloc[i]<<" "; //expected values all values 0
    cout<<endl;

    free(n_malloc);
    free(n_calloc);
    return 0;
}
