#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	cout << "Greetings, this is my code for getting square root:\n";
	int a;
	cout << "Enter a perfect square: ";
	scanf("%d",&a);
	for(int b = 0; b <= a; b++){
		if((b * b) == a){
			cout << "Answer: " << b << "\n";
			b = a;
		}else{
			if(b == a){
				cout << "Not a perfect square root\n";
			}
		}
	}
}