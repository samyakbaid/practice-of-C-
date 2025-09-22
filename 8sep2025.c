#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void swap(int *a, int i, int j ){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void shuffleArray(int *a, int n){
    srand(12);
    for(int i=n-1;i>0; i=i-1){
        int j= rand()%n;
        swap(a,i,j);
    }
}

void rotateArray(int *a, int n, int rot ){
    int *buf= (int *) malloc (rot *sizeof(int));
    memcpy(buf, a, rot * sizeof(int));
    
    for(int i=rot; i< n; i++){
        a[i-rot]=a[i];
    }
   memcpy(&a[n-rot], buf , rot * sizeof(int));
    
}
int main() {
     srand(time(NULL));
    int s[26];
    

     FILE *ptr;
     FILE *ptr2;
    ptr = fopen("abd.txt", "r");
    ptr2 = fopen("abc.txt", "w");
    if (ptr == NULL) {
        printf("file failed to open");
        return 1;
    }

    char c;
    for (int i = 0; i < 26; i++) {
        s[i] = i;
    }

    // while ((c = fgetc(ptr)) != EOF){

    // }
    // shuffleArray(s,26);
    rotateArray(s,26,5);
    while ((c = fgetc(ptr)) != EOF) {
        if(c>='a' && c<='z'){
            c= 'a' + s[c -'a'];
        }
        fputc(c, ptr2);
    }
     
    
    
    // for(int i=0;i<26;i++){
    //     printf("%d\n", s[i]);
    // }
    return 0;

}
