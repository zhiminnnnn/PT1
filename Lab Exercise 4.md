<div align="justify">

# Lab Exercise 4
Date: 9 Jan 2026

We are given 30 minutes to complete the following task:
> Write a complete C++ program that use the concept of dynamic memory allocation. Prompt the user to enter the number of a list of integers. The numbers should be stored dynamically and accessed using pointer. Find the total of the numbers stored and display using another pointer. The dynamic memory allocation should be deleted at the end of the program.

Example output:
```yaml
Enter number of values:3
Enter values in array:
10
30
50
Total of the values in the array is 90
```
My attempt using pointers:
```
#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter number of values:";
    cin>>num;

    int *arr=new int[num];

    cout<<"Enter values in array:\n";
    for(int i=0; i<num; i++){
        cin>>*(arr+i);
    }

    int sum=0;
    int *ptr_sum=&sum;
    for(int i=0; i<num; i++){
        *ptr_sum+=*(arr+i);
    }

    cout<<"Total of the values in the array is "<<*ptr_sum;

    delete[] arr;

    return 0;
}
```
</div>
