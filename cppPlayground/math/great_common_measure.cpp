#include <cassert>
#include <iostream>
long int GCM(long int segment1, long int segment2);
long int rest(long int segment1, long int segment2);
long int biggest_doubling(long int segment1, long int segment2);
long int GCM_euklides(long int segment1, long int segment2);

int main() {
	assert(GCM(196, 42) == 14);
	assert(GCM(63, 13) == 1);
	assert(GCM(10, 10) == 10);
	assert(GCM(42, 196) == 14);

	assert(GCM_euklides(196, 42) == 14);
	assert(GCM_euklides(63, 13) == 1);
	assert(GCM_euklides(10, 10) == 10);
	assert(GCM_euklides(42, 196) == 14);

	assert(GCM_euklides2(196, 42) == 14);
	assert(GCM_euklides2(63, 13) == 1);
	assert(GCM_euklides2(10, 10) == 10);
	assert(GCM_euklides2(42, 196) == 14);


}

long int GCM(long int segment1, long int segment2) {
	if (segment1 == segment2) return segment1;
	if (segment1 > segment2) return GCM(segment1 - segment2, segment2);
	if (segment2 > segment1) return GCM(segment1, segment2-segment1);
}

long int GCM_euklides(long int segment1, long int segment2){
	while (segment1 != segment2) {
		if (segment1 > segment2) segment1 = segment1 - segment2;
		else segment2 = segment2 - segment1;
	
	}
	return segment1;

}

long int GCM_euklides2(long int segment1, long int segment2) {
	while (segment1 != segment2) {
		while (segment1 > segment2) {
			segment1 = segment1 - segment2;
		
		}
		std::swap(segment1, segment2);
		}
	return segment1;
	}


long int biggest_doubling(long int segment1, long int segment2) {
	while (segment1 - segment2 >= segment2) segment2 = segment2 + segment2;
	return segment2;
}
long int rest(long int segment1, long int segment2) {
	if (segment1 < segment2) return segment1;
	long int segment3 = biggest_doubling(segment1, segment2);
	segment1 = segment1 - segment3;
	while (segment3 != segment2)
	{
		segment3 = segment3 / 2;
		if (segment3 <= segment1) segment1 = segment1 - segment3;
	}
	return segment1;
}