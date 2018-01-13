#include <iostream>


struct testStruct {
	char name[20];
	float number1;
	int numver2;
};

struct testStruct2 {
	testStruct nestedStruct1;
	testStruct nestedStruct2;
};

int main()
{
	using namespace std;

	
	
	testStruct t1 {
		"Name1",
		2.20,
		10
	};
	testStruct t2 {
		"Name1",
		2.20,
		10
	};

	testStruct2 t3{
		t1,
		t2
	};
	cout << t3.nestedStruct2.name;

}

