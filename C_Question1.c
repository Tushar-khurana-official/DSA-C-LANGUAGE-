#write a program for insertion and deletion operations in an array

#include<stdio.h>
int main(){
    int arr[10],n,i,choice,idx,num,temp1,temp2;
    printf("enter a numbers from 1 to 10: ");
    scanf("%d", &n);
    printf("enter %d numbers in an array: ", n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("the array is: ");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n1.delete\n2.insert\n");
    scanf("%d", &choice);
    if(choice==1){
        printf("enter the index from 1 to %d: ", n);
        scanf("%d", &idx);
        for(i=idx; i<n; i++){
            arr[i-1] = arr[i];
        }
        n -= 1;
        for(i=0;i<n;i++){
            printf("%d ", arr[i]);
        }
    } else if(choice==2){
        printf("enter the index and value for insert: ");
        scanf("%d", &idx);
        scanf("%d", &num);
        n += 1;
        temp1 = arr[idx-1];
        arr[idx-1] = num;
        for(i=idx; i<n; i++){
            temp2 = arr[i];
            arr[i] = temp1;
            temp1 = temp2;
        }
        for(i=0;i<n;i++){
            printf("%d ", arr[i]);
        }
    } else {
        printf("not found");
    }
    
    return 0;

}
