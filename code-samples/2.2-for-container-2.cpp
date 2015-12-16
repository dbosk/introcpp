void sample1(const std::vector<int>& v){
	int sum = 0;
	for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); it++){
		sum += *it;
	}
	double average = double(sum) / v.size();
}

template <typename IT>
void sample2(IT begin, IT end){
	int sum = 0;
	for (IT it = begin; it < end; it++){
		sum += *it;
	}
	double average = double(sum) / v.size();
}

template <typename CONT>
void sample2(const CONT& v){
	sample2(std::begin(v), std::end(v));
}
