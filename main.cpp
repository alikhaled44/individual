//author : Ali khaled ali
//ID : 20170170
//group :9

#include <iostream>

using namespace std;

void RecPermute(string soFar, string rest)
{
	if (rest == "") {
		cout << soFar << endl;
	} else {
		for (int i = 0; i < rest.length(); i++) {
			string next = soFar + rest[i];
			string remaining = rest.substr(0, i)
						+ rest.substr(i+1);
			RecPermute(next, remaining);
		}
	}
}
int main(){
RecPermute("","cat");

}

