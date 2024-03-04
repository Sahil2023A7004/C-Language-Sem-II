//Impement a list using array and develop functions to perform insertion,deletion and linear search oprations
#include<stdio.h>
#include<stdbol.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
void insertion(int arr[],int n,int element,int capacity,int index)
{
    if(n>=capacity){
        printf("Array is full cannot insert\n");
    }
    for(int i=n-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
}
void deletion(int arr[],int n,int index){
    for(int i=index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
}
bool linear search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key == arr[i]){
            return i;
        }
    }
    printf("Not founf\n");
}
void perform oprations(int arr[],int n,int key,int choice,int element,int capicity,int index)
{
    switch(choice){
        case 1:
        printf("enter index wherw you want to insert element\n");
        scanf("%d",&index);
        printf("enter element\n");
        scanf("%d",&element);
        printf("thr resultant array is\n");
        insertion(arr,n,element,capicity,index);
        n+=1;
        display(arr,n);
        break;
        case 2:
        printf("enter the index to delete an element\n");
        scanf("%d",index);
        printf("the array after deletion is\n");
        deletion(arr,n,index);
        printf("the array after deletion\n");
        deletion(arr,n,index);
        break;
        case 3:
        printf("enter the element to search:");
        scanf("%d",&key);
        if(linearsearch(arr,n,key)){
            printf("Found\n");
        }
        break;
        default:
        printf("Invaild choice\n");
    }
}
int main(){
    int n,arr[1000],key,choice,element,capacity=1000,index;
    printf("enter size of the araay");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the array before any opration is \n");
    display(arr,n);
    printf("enter 1 for insertion\n 2 for deletion\n 3 for linear search");
    scanf("%d",&choice);
    performoprations(arr,n,key,choice,capacity,index);
    return 0;
}