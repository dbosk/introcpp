template <typename T>
void sample(const std::vector<T>& v){
	T sum = 0;
	for (auto e: v){
		sum += e;
	}
	double average = double(sum) / v.size();
}
