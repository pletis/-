#include <stdio.h>
#include <string.h>

void sorts(char *arr[],int length,int order) {
    char *temp;
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            if(order > 0){
                if(strcmp(arr[i],arr[j]) < 0){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            else{
                if(strcmp(arr[i],arr[j]) > 0){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}

int main() {
    char *arr[] = {"book","life","vine","python","java","covid19","endemic"};
    printf("정렬 전\n");
    for(int i=0; i< 7; i++) printf("%s\n", arr[i]);
    sorts(arr,7,8);
    printf("정렬 후\n");
    for(int i=0; i< 7; i++) printf("%s\n", arr[i]);
    return 0;
}

