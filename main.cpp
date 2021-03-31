#include <iostream>
#include <string>
#include <ctype.h> 
#include <stdio.h>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	cout<<"Input Binary String:\n";
	
	string input;
	getline(cin, input);

input.erase( std::remove_if( input.begin(), input.end(), ::isspace ), input.end() );

  for(int i = 0; i<input.length(); i++) {
	  if(input.at(i) == '1'){
	  	cout<<input[i]<<" Yes"<<endl;
	  } else if(input.at(i) == '0') {
	  	cout<<input[i]<<" No"<<endl;
		} else {
		   	cout<<input[i]<<" Enter Binary Digit only"<<endl;
		   }
		   		   
}
system("pause");
return 0;
}
