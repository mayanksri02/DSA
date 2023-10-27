// Insertion in an sorted array
#include <stdio.h>
int main()
{
int i, j, n, m, temp, v, pos,x;
printf("Enter number of elements:\n");
scanf("%d", &n);
int arr[n+1];
printf("Enter the elements \n");
for (i = 0; i < n; i++){
    scanf("%d", &arr[i]);
}
printf("Input array elements are \n");
for (i = 0; i < n; i++){
     printf("%d \t", arr[i]);
}
for (i = 0; i < n; i++){
     for (j = i + 1; j < n; j++){
        if (arr[i] > arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
printf("\nSorted list is \n");
for (i = 0; i < n; i++)
{
    printf("%d \t", arr[i]);
}
printf("\nEnter the element to be inserted \n");
scanf("%d", &v);

if(v>arr[n-1]){
    arr[n]= v;
} else{
    for(int i=0;i<n;i++){
        if(v>=arr[i] && v<=arr[i+1]){
            x=i;
            break;
        }
    }
    for(i=n-1;i>x;i--){ 
        arr[i+1]=arr[i];
    }
    arr[x+1]= v;
}


printf("Final array is \n");
for (i = 0; i < n + 1; i++)
{
    printf("%d \t", arr[i]);
}
return 0;
}