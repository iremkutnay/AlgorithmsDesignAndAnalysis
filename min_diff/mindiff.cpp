#include <stdio.h>
#include <stdlib.h>

int findMinDiff(int arr[], int n){
    int i=0;
    int j=0;
    int temp;
    for(int i = 0; i < n-1; ++i)
    {
        for(j=i+1; j<n;j++){
            if(arr[i]< arr[j]){
                temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
      
    }
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Greatest number is = %d", arr[0]);
    printf("\n");
    
    int diff = arr[0];
    

    for(int i=0; i<n-1; i++)
      for(int j=i+1; j<n; j++)
        if(abs(arr[i]-arr[j]) < diff)
          diff = abs(arr[i] - arr[j]);
    

return diff;
    
}
int main()
{

int n;

printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];

int i =0;
for(i=0; i<n; i++){
    printf("enter %d. number: ",i+1);
    scanf("%d",&arr[i]);
}

printf("\n");

printf("min diff is: %d", findMinDiff(arr,n));


    return 0;
}
