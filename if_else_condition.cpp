#include<iostream>
using namespace std;
int main(){
	int num;
	cout << "Hello, this is my basic code for condition (if else)" << endl;
	cout << "Enter number: ";
	cin >> num;
	for(int a = 1; a <= num; a++){
		if(a%2 == 0){
			cout << "Number " << a << " is an even number" << endl;
		}else{
			cout << "Number " << a << " is an odd number" << endl;
		}
	}
}