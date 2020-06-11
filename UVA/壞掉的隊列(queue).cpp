#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.sync_with_stdio(false), cin.tie(0);
	long long buffer, firstAmount = 0, secondAmount = 0;
	string input,ans="";
	while (cin >> input) {
		if (input == "push"){
			cin >> buffer;
			cout<<'1';
			firstAmount++;
		}
		else{
			if (secondAmount){
				cout<<'4';
                secondAmount--;
			}
			else {
				for (int i = 0; i < firstAmount; i++)
					cout<<'5';
				secondAmount = firstAmount, firstAmount = 0;
				cout<<'4', secondAmount--;
			}
		}
	}
}
