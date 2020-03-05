#include <iostream>
\
using namespace std;
int main (){
	char line[150];
	int count = 0;
	cout<<"Enter a line of string:\n";
    gets(line);
	 string letters[] = {"a","b","c","e"};
 for(int i=0;line[i]!='\0';++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
            ++count;
       
    }
    
	cout<<"Total vowels in array of String "<<count;
	return 0;
}
