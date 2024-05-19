#include <cassert>
#include <iostream>

long int compute_rest(long int segment1, long int segment2);
long int biggest_doubling(long int segment1, long int segment2);
long int half(long int number);
long int GCM_euklides3(long int segment1, long int segment2);

int main() {

  assert(compute_rest(196, 42) == 28);
  assert(compute_rest(63, 13) == 11);
  assert(compute_rest(42, 196) == 42);
  assert(compute_rest(5, 5) == 0);
  assert(compute_rest(3, 5) == 3);

  assert(GCM_euklides3(196, 42) == 14);
  assert(GCM_euklides3(63, 13) == 1);
  assert(GCM_euklides3(10, 10) == 10);
  assert(GCM_euklides3(42, 196) == 14);
}

long int biggest_doubling(long int segment1, long int segment2) {
  while (segment1 - segment2 >= segment2)
    segment2 = segment2 + segment2;
  return segment2;
}
long int compute_rest(long int segment1, long int segment2) {
  if (segment1 < segment2)
    return segment1;
  long int segment3 = biggest_doubling(segment1, segment2);
  segment1 = segment1 - segment3;
  while (segment3 != segment2) {
    segment3 = half(segment3);
    if (segment3 <= segment1)
      segment1 = segment1 - segment3;
  }
  return segment1;
}

long int half(long int number) { return number >> 1; }
long int GCM_euklides3(long int segment1, long int segment2) {
  while (segment2 != 0) {
    segment1 = compute_rest(segment1, segment2); // same as segment1 % segment2
    std::swap(segment1, segment2);
  }
  return segment1;
}