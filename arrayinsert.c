#include<stdio.h>
#define MAX_SIZE 100
// function to insert element at given position
void insertElement(int arr[],int*size, int element, int position){
if(*size>=MAX_SIZE){
    printf("Array is full,insertion  failed.\n");
    return;
}
if (position <0 || position> *size){
printf("invalid position , insertion failed.\n");
    return;
}
// shift element to the right to make space for the new element
for (int i=*size; i>position; i--){
    arr[i]=arr[i-1];
}
// insert the element at the specified position
arr[position]=element;
//update the size of array
(*size)++;
}
int main(){
int arr[MAX_SIZE]={1,2,3,4,5};
int size = 5;
int element = 10;
int position = 2;
printf("original array:");
for(int i = 0; i <size; i++){
    printf("%d ", arr[i]);
}
printf("\n");
// insert element specified position
insertElement(arr,&size,element,position);
printf("array after insertion:");
for(int i=0; i<size; i++){
    printf("%d",arr[i]);
}
printf("\n");
return 0;
}
