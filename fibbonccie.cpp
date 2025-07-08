#include<iostream>
using namespace std;
//int count = 0;
//int fib(int num1 ,int num2 ,int n ){
//	if(count<n){
//		int newnum = num1 + num2;
//	    cout<<newnum<<' ';
//	    num1 = num2;
//	    num2 = newnum;
//	    count++;
//	    fib(num1,num2,n);
//		
//	}}
int main(){
	int numbers[] = {2,1,4,5,3,7};
		for(int i = 0;i<6;i++){
			cout<<numbers[i]<<" ";
		}
		cout<<"\n";
	for(int i = 0;i<5;i++){
	for(int j = i + 1;j<6;j++){
		if(numbers[j]<numbers[i]){
			swap(numbers[j],numbers[i]);
		}
	}
}

		for(int i = 0;i<6;i++){
			cout<<numbers[i]<<" ";
		}
}
