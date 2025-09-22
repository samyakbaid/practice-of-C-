#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    FILE *infile = fopen("blah.txt", "r");
    char s[256]; //   char i will result in an infinite loop because after the 255 bit the i++ will become zero 
    for(int i =0 ; i< 256; i=i+1){
        s[i]=i;

    }
    for(int i =0 ; i< 256; i=i+1){
        printf("%d ->%d \n", i , s[i]);
        
    }
    return 0;
    
}


while (c= fgetc(file) !=EOF){
//    if(F[c]==0){
//     count++;
//    } 
   F[c]++;
}
int count=0;
for (int i=0 ; i<256; i=i+1){
    if(F[c]>0){ count++}
}
