#include <iostream>
#include <vector>


int main(){

	int t1, t2, n;
	std::cin >> t1 >> t2 >> n;
	std::vector<long long> v;
	v.push_back(t1);
	v.push_back(t2);
	for(auto i = 0; i < n; i++){
		v.push_back(v[i] + v[i + 1] * v[i + 1]);
	}
	std::cout << v[n - 1] << std::endl;

			
}
