//write a program to search for an element in an array using linear search and binary search

#include <stdio.h>
void linear(int arr[], int n);
void binary(int arr[], int n);

int main(){
    int arr[20],n,i,choice;
    printf("enter the no of an array: ");
    scanf("%d", &n);
    printf("enter the elements of an array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n1. linear search\n2. binary search\n");
    scanf("%d", &choice);
    
    if(choice == 1){
        linear(arr, n);
    } else if(choice == 2){
        binary(arr, n);
    } else {
        printf("not found");
    }
    return 0;
}

void linear(int arr[], int n){
    int key,i,found=0;
    printf("enter the element for search: ");
    scanf("%d", &key);
    for(i=0; i<n; i++){
        if(arr[i] == key){
            found = 1;
            printf("found in idx %d", i);
            break;
        }
    }
    if(found==0){
        printf("not found");
    }
}

void binary(int arr[], int n){
    int key,found=0,mid,low=0,high;
    printf("enter the element for search(only sorted array): ");
    scanf("%d", &key);
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        }
    }
    high = n-1;
    while(low <= high){
        mid = (low + high)/ 2;
        if(arr[mid] == key) {
            printf("found in idx %d\n", mid);
            found = 1;
            break;
        }
        else if(arr[mid] < key) low = mid + 1;
        else high = mid -1;
    }
    if(found == 0){
        printf("not found");
    }
}