void sample(const std::vector<int>& v){
	int sum = 0;
	for (auto it = v.begin(); it != v.end(); it++){
		sum += *it;
	}
	double average = sum / v.size();
}
