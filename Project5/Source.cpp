#include <iostream>
#include <string>
using namespace std;


void main(){
	int size;
	cin >> size;
	int* vector = new int[size];
	for (int i = 0; i < size; i++) {
		vector[i] = rand();
	}
	string msg;
	for (int i = 0; i < size; i++) {
		msg += to_string(vector[i]) + " ";
	}
	cout << msg;
	system("pause");
}