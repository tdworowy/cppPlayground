#include <cassert>l
long int GCM(long int segment1, long int segment2);

int main() {
	assert(GCM(196, 42) == 14);
	assert(GCM(63, 13) == 1);
	assert(GCM(10, 10) == 10);
	assert(GCM(42, 196) == 14);
}

long int GCM(long int segment1, long int segment2) {
	if (segment1 == segment2) return segment1;
	if (segment1 > segment2) return GCM(segment1 - segment2, segment2);
	if (segment2 > segment1) return GCM(segment1, segment2-segment1);
}