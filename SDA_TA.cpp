#include <iostream>
using namespace std;

int main (){
	int data[100];
	int x;
	
	cout << "Masukkan banyaknya data: ";
	cin >> x;
	
	for (int i = 1; i < x + 1; i++){
		cout << "Input data ke-" << i << ": ";
		cin >> data[i];
	}
	
	cout << "Tampilkan data: ";
	for (int i = 1; i < x + 1; i++){
		cout << data[i] << " ";
	}
}
 