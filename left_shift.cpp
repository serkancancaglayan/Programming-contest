#include <iostream>
#include <vector>


int main(){
	std::vector<int> v;
	int v_size, shift_count;
	std::cin >> v_size >> shift_count;
	for(auto i = 0; i < v_size; i++){
		int input;
		std::cin >> input;
		v.push_back(input);
	}
	for(auto i = 0; i < shift_count; i++){
		int temp = v[0];
		v.erase(v.begin(), v.begin() + 1);
		v.push_back(temp);
	}
	for(int i = 0; i < v_size; i++){
		std::cout << v[i] << " ";
	}

	return 0;
}


