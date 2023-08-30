#include <stdio.h>

int main() {
    int s1[3] = {1, 2, 3};
    int s2[2] = {4, 5};
    int uni[5] = {0}; // Initialize the union array with zeros
    int uni_size = 0;

    for (int i = 0; i < 3; i++) uni[uni_size++] = s1[i];
    

    for (int i = 0; i < 2; i++) {
        int exists_in_uni = 0;
        for (int j = 0; j < uni_size; j++) {
            if (s2[i] == uni[j]) {
                exists_in_uni = 1;
                break;
            }
        }

        if (!exists_in_uni) uni[uni_size++] = s2[i];
        
    }

    printf("Union of s1 and s2: ");
    for (int i = 0; i < uni_size; i++) {
        printf("%d ", uni[i]);
    }
    printf("\n");

    return 0;
}
