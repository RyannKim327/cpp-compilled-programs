#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
	srand(time(NULL));
	for(int a = 0; a < 3; a++){
		int b = rand()%6 + 1;
		cout << "Number " << a + 1 << ": " << b << "\n";
		if(a == 3){ 
			if(b[0] == b[1] && b[0] == b[2]){
				cout << "You\'ve got it\n";
			}else{
				cout << "Better luck next time\n";
			}
		}
	}
}