// operator overloading
#include <iostream>
using namespace std;
class loc
{
	int longitude, latitude;

public:
	loc()
	{
		longitude = 0;
		latitude = 0;
	}
	loc(int lg, int lt)
	{
		longitude = lg;
		latitude = lt;
	}
	void show()
	{
		cout << "\n longitude : " << longitude << "";
		cout << " latitude : " << latitude << "\n";
	}
	loc operator++();
	loc operator--();
};
loc loc ::operator--()
{
	loc temp;
	temp.longitude = longitude--;
	temp.latitude = latitude--;
	return temp;
}
loc loc ::operator++()
{
	loc temp;
	temp.longitude = longitude++;
	temp.latitude = latitude++;
	return temp;
}
int main()
{
	loc ob1(10, 20), ob3;
	ob1.show();
	--ob1;
	ob3 = ob1;
	cout << "\n After Decrement :";
	ob3.show();
	++ob1;
	++ob1;
	ob3 = ob1;
	cout << "\n After increment :";
	ob3.show();	
	
	return 0;
}

