<div align="justify">

# Lab Exercise 2
Date: 14 Nov 2025

We are given 30 minutes to convert the following flowchart into C++ code and submit the .cpp file in elearning.

![pt1 lab2_page-0001](https://github.com/user-attachments/assets/a0e514b5-d774-458a-8f39-5420fe0b7ef8)

My attempt using nested `while` loop:
```
#include <iostream>
using namespace std;
//Cheng Zhi Min A25CS0050

int main(){
	int N, i, j;
	cout<<"Enter the number of lines: ";
	cin>>N;
	i=1;
	while(i<=N){
		j=1;
		while(j<=i){
			cout<<j<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
    return 0;
}
```
Example output when `N` is 5:
```
Enter the number of lines: 5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```
[Click here](https://github.com/zhiminnnnn/PT1/blob/main/Lab%20Exercise%202.cpp) to download the .cpp file.
</div>
