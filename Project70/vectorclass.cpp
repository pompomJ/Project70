// vectorはC++で動的配列を便利に扱うためのクラス

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1;

	v1.push_back(10);
	v1.push_back(11);
	v1.push_back(12);

	cout << "—v‘f‚Ì”:" << (int)v1.size() << endl;
	cout << "v1[0] = " << v1[0] << endl;
	cout << "v1[1] = " << v1[1] << endl;
	cout << "v1[2] = " << v1[2] << endl;

	return 0;
}
