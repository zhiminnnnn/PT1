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
