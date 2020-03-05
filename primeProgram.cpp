#include <iostream>
using namespace std;
int main (){
	
	int num, primestatus = 1;
	int arr[]= {1,3,4,6};
	
	for(int i = 2;i<=arr[i]/2;i++){
		if(arr[i] % i== 0){
		primestatus=0;	
		}
		
		
	}
	
	if(primestatus==1){
		cout<<"Number is prime";
	}
	else {
		cout<<"Number is not prime";
	}
	 
	return 0;
}
