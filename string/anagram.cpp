#include <stdio.h>
int find_anagram(char str1[], char str2[]){
    int num1[26] = {0}, num2[26] = {0}, i = 0;
    while (str1[i] != '\0'){
        num1[str1[i] - 'a']++;
        i++;
    }
    i = 0;
    while (str2[i] != '\0'){
        num2[str2[i] -'a']++;
        i++;
    }
    for (i = 0; i < 26; i++) if (num1[i] != num2[i]) return 0;
    return 1;
}
int main(){
    char str1[100], str2[100];
    int flag;
    printf("Enter the string\n"); gets(str1);
    printf("Enter another string\n"); gets(str2);
    flag = find_anagram(str1, str2);
    if (flag == 1) printf("%s and %s are anagrams.\n", str1, str2);
    else printf(" %s and %s are not anagrams.\n", str1, str2);
    return 0;
}
