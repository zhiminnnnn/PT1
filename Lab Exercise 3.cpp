// Cheng Zhi Min
// A25CS0050
// 30-12-2025

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
