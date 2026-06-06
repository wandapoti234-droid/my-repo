#include <iostream>
#include <cctype>

using namespace std;




int main(){
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i){
		string line;
		cin >> line;
		toUpper(line);
		cout << line << endl;
	}
	return 0;
}
