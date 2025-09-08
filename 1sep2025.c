//this code includes ways to read and write into text files, the frequency of alphabets and other characters 

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *ptr;
    ptr = fopen("abc.txt", "r");
    if (ptr == NULL) {
        printf("file failed to open");
        return 1;
    }

    char c;
    int *a;
    a = malloc(27 * sizeof(int));  // this is long for int a[27]
    for (int i = 0; i < 27; i++) {
        a[i] = 0;
    }

    while ((c = fgetc(ptr)) != EOF) {
        int v = (int)c - 'a';
        if (v >= 0 && v < 26) {
            a[v] = a[v] + 1;
        } else {
            a[26] = a[26] + 1;
        }
    }

    for (int i = 0; i <= 26; i++) {
        printf("%d\n", a[i]);
    }

    fclose(ptr);
    free(a);
    return 0;
}
