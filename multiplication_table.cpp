#include<iostream>
using namespace std;
int main(){
	cout << "Multiplication table C++ code:\n- Challenge by Rovie Francisco (My Mentor)" << endl;
	int a;
	cout << "Enter a number: ";
	cin >> a;
	for(int b = 1; b <= a; b++){
		for(int c = 1; c <= a; c++){
			if(c%a == c){
				if(c * b < 10){
					cout << "0" << c * b << "\t";
				}else{
					cout << c * b << "\t";
				}
			}else{
				if(c * b < 10){
					cout << "0" << c * b << endl;
				}else{
					cout << c * b << endl;
				}
			}
		}
	}
}