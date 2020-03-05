#include <iostream >
using namespace std;
int main(){
	int marks[]={20,48,3,7,70};
	int count_even=0;
	int count_odd = 0;
	
 for (int i= 0;i<5;i++){
 	
 	if(marks[i]%2 ==0){
 		count_even++;
	 }
	 else{
	 	count_odd++;
	 }
	 
	 }
 
 cout<<"Even numbers are "<<count_even<<endl;
 cout<<"Odd numbers are "<<count_odd;
	return 0;
}
