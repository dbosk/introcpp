void sample(const std::vector<int>& v){
	int sum = 0;
	for (size_t i = 0; i < v.size(); i++){
		sum += v[i];
	}
	double average = double(sum) / v.size();
}


