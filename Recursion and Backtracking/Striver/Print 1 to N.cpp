#include <iostream>
using namespace std;

void print(int n){
    if(n==0) return;
    cout<<n;
    print(n-1);
}

void reverseArray(int nums[],int left,int right){
    if(left>=right) return;
    swap(nums[left],nums[right]);
    reverseArray(nums,left+1,right-1);
}

void printArray(int nums[],int i){
    if(i==5) return;

    cout<<nums[i]<<" "<<nums.size()<<endl;
    printArray(nums,i+1);
}
void reverseArray(int nums[],int i){
    if(i==2) return;

    swap(nums[i],nums[4-i]);
    reverseArray(nums,i+1);
}

void sortArray(int nums[],int i){
    if(i==0) return;

    sortArray(nums[],i-1);
    for(int x = 0; x<i;x++){
        if(nums[x]>nums[i]){
            int temp=nums[x];
            nums[x]=nums[i];a
        }
    }
}


int main(){
    // print(7);
    int arr[5] = {1,2,3,4,5};
    reverseArray(arr,0);
    printArray(arr,0);
}