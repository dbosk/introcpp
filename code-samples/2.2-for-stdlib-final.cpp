#include <iterator>
#include <algorithm>

namespace samples{

	template<typename IT>
	double mean(IT begin, IT end){
		using T = decltype(*begin);

		T sum = std::accumulate(begin, end, T(0));
		return double(sum) / std::distance(begin, end);
	}

	template <typename CONT>
	double mean(const CONT& c){
		return mean(std::begin(c), std::end(c));
	}
}
