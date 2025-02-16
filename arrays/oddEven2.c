#include<stdio.h>

int main(){
    int i, arr[6];
    int oddCount=0, difference;
    int evenCount=0;
    for(i=0;i<6;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<6;i++){
       if(i%2==0){
        evenCount=evenCount+arr[i];
       } else if(i%2!=0){
        oddCount=oddCount+arr[i];
       }
       if(evenCount>oddCount){
        difference=evenCount-oddCount;
       } else{
        difference=oddCount-evenCount;
       }
    }
    printf("The difference of the elements at the odd indices and even indices is equal to %d.", difference);

    return 0;
}