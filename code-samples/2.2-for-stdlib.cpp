#include <vector>
#include <algorithm>

void sample1(const std::vector<int>& v){
	int sum = 0;
	std::for_each(v.begin(), v.end(), [&sum](int e){ sum += e; } );
	double average = double(sum) / v.size();
}

void sample2(const std::vector<int>& v){
	int sum = std::accumulate(v.begin(), v.end(), 0);
	double average = double(sum) / v.size();
}

template<typename T>
void sample3(const std::vector<T>& v){
	T sum = std::accumulate(v.begin(), v.end(), T(0));
	double average = double(sum) / v.size();
}
