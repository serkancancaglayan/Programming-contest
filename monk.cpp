#include <iostream>
#include <vector>
#include <bits/stdc++.h> // std::find()
int main(){
	int t;
	std::cin >> t;
	for(auto i = 0; i < t; i++){
		int m, n;
		std::cin >> n >> m;
		std::vector<int> vn;
		for(auto j = 0; j < n; j++){
			int temp;
			std::cin >> temp;
			vn.push_back(temp);
		}
		for(auto j = 0; j < m; j++){
			int temp;
			std::cin >> temp;
			if(std::find(vn.begin(), vn.end(), temp) != vn.end()){
				std::cout << "YES" << std::endl;
			}else{
				std::cout<< "NO" << std::endl;
				vn.push_back(temp);
			}
		}
	}
	return 0;
}
