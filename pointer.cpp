//pointer.cpp

#include <iostream>

using namespace std;

int main()
{
	int updates = 6;
	int* p_updates;
	p_updates = &updates;

	cout << "Values: updates = " << updates
		<< ", *p_updates = " << *p_updates << endl;

	cout << "Address: &updates = " << &updates
		<< ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1;
	cout << "New update = " << *p_updates << endl;

	return 0;
}
