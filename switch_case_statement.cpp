#include<iostream> // for std::cout and std::cin
using namespace std; // for cout (no std::)
int main(){
	cout << "Greetings, this is an example of switch statement\n";
	int a;
	cout << "Enter a digit: ";
	cin >> a;
	
	switch(a){
		case 1:
			cout << "First";
		break;
		case 2:
			cout << "Second";
		break;
		default:
			cout << "Default: " << a;
		break;
	}
}