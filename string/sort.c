# include <stdio.h>
# include <string.h>
int myStrCmp(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
void bubbleSort(char arr[][100], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (myStrCmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}


int main(){
    int n=5;
    char str[100][100];
    for(int i=0;i<5;i++) scanf("%s",str[i]);
    
    bubbleSort(str, n);

    printf("\nSorted strings:\n");
    for (int i = 0; i < n; i++)   printf("%s\n", str[i]);
    
    return 0;
}