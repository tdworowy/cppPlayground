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
	testStruct struct_array[3]=
	{
		{"DUpa1",2,3},
		{"DuPa2",4,5},
		{"DupA3",6,7}

	};
	cout << t3.nestedStruct2.name << endl;
	for (int i = 0; i < 3; i++) {
		cout << struct_array[i].name << endl;
		cout << struct_array[i].number1 << endl;
		cout << struct_array[i].numver2 << endl;
	}

}

