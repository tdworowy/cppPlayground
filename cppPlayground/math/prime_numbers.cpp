#include <iostream>

template <typename I, typename  N>
void mark_sieve(I first, I last, N factor);

template <typename  I, typename  N>
void sieve(I first, N n);


template <typename  I, typename  N>
void mark_sieve(I first, I last, N factor) {
	*first = false;
	while(last - first > factor) {
		first = first + factor;
		*first = false;
	}
}
template <typename  I, typename N>
void sieve(I first, N n) {
	I last = first + n;
	std::fill(first, last, true);
	N i(0);
	N index_sqr(3);
	N factor(3);
	while (index_sqr < n) {
		if (first[i]){
			mark_sieve(first + index_sqr,last,factor);
		}
		++i;
		//factor = i + i + 3;
		//index_sqr = 2 * i*(i + 3) + 3;
		index_sqr += factor;
		factor += N(2);
		index_sqr += factor;
	}
}


int main() {
	int test[14] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	sieve(test, 1);
}