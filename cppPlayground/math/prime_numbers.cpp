#include <iostream>
#include <algorithm>  
template<typename RandomAccessIterator>
template<typename Integer>

//template <RandomAccessIterator I, Integer N>
//void mark_sieve(I first, I last, N factor);

template <RandomAccessIterator I, Integer N>
void mark_sieve(I first, I last, N factor) {
	*first = false;
	whle(last - first > factor) {
		first = first + factor;
		*first = false;
	}
}
template <RandomAccessIterator I, Integer N>
void sieve(I first, N n) {
	I last = first + n
	std::fill(first, last, true);
	N i(0);
	N index_sqr(3);
	N factor(3);
	while (index_sqr < n) {
		if first[i]{
			mark_sieve(first+ index_sqr,last,factor)
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
	//TODO
}