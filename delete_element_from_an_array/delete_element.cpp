#include<stdio.h>

#define size 5

int main()
{
    int arr[size] = {1, 20, 5, 78, 30};
    int key, i, index = -1;
    printf("Array elements : ");
    for(i = 0; i<5; i++){
    	printf("%d , ", arr[i]);
	}

    printf("\nEnter element to delete\n");
    scanf("%d",&key);
    for(i = 0; i < size; i++){
        if(arr[i] == key){
            index = i;
            break;
        }
    }
    if(index != -1){
        //shift all the element from index+1 by one position to the left
        for(i = index; i < size - 1; i++){
            arr[i] = arr[i+1];
        }
        printf("New Array : ");
        for(i = 0; i < size - 1; i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        printf("Element Not Found\n");
    }
    return 0;
}

