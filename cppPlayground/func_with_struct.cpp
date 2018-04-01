#include <iostream>
struct test {
	int x;
	int y;
};
test sum1(test, test);
test sum2(const test*, const test*);

int main() {
	test test1{1,2};
	test test2{ 11,22 };
	std::cout <<"X: "<< sum1(test1, test2).x << " Y: " << sum1(test1, test2).y << std::endl;
	std::cout << "X: " << sum2(&test1, &test2).x << " Y: " << sum2(&test1, &test2).y << std::endl;
}

test sum1(test test1, test test2) {
	test res{
		test1.x + test2.x,
		test1.y + test2.y
	};
	return res;


}

test sum2(const test* pt1, const test* pt2) {
	test res  {
		pt1->x + pt2->x,
		pt1->y + pt2->y
	};
	return res;
}