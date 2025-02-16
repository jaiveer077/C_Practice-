#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int is_Palindrome=1;
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            is_Palindrome=0;
            break;
        }
    }

    if(is_Palindrome){
        printf("The array is palindrome.\n");
    } else {
        printf("The array is not palindrome.\n");
    }

    return 0;
}