<div align="justify">

# Lab Exercise 3
Date: 30 Dec 2025

We are given 30 minutes to complete the task below:

>Write a complete C++ program that produce an "E" pattern as stated below. Your program should use 1-dimension array together with for/nested for/while/do...while loops and if/else...if/switch case control structures if needed. Your program should be simplified as much as possible to avoid unnecessary/repetitive codes.
```
XXXXXX
XX
XXXXXX
XX
XXXXXX
```

My attempt using nested `for` loop:
```yaml
#include <iostream>
using namespace std;

int main() {
    int size = 5;
    //total 5 rows

    int row[size] = {6,2,6,2,6};
    //1st row got 6 "X", 2nd row got 2 "X" and so on

    for(int i=0; i<size; i++){
    //loop through each row

        for(int j=0; j<row[i]; j++){
        //1st row print 6 "X", 2nd row print 2 "X" and so on

            cout<<"X";
        }
        cout<<endl;
        //separate each row
    }
    return 0;
}
```
[Click here](https://github.com/zhiminnnnn/PT1/blob/main/Lab%20Exercise%203.cpp) to download the .cpp file.
</div>
