/*############################################################################
#Author:polya 
#Emalil:polyaluthor@gmail.com
#model.cpp
#Last updated:2019.time
#history version
#Version: 0.1
#Purpose:
#Main logic principle:
#Usage:
#     example: model.cpp
g++ model.cpp -o model -std=gnu++11
make model
./model
############################################################################*/
//logic outline:print information
//include input and out library
//logic struture:
//
#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
//define class for solution
class Solution {
	
	public:
		double findMaxAverage(vector<int>& nums,int k){
			int n = nums.size();
			vector<int> sums = nums;
			for (int i = 1; i < n; ++i) {
				sums[i] = sums[i - 1] + nums[i];
			}
			double mx = sums[k - 1];
			for (int i = k; i < n; ++i) {
					mx = max(mx, (double)sums[i] - sums[i - k]);
			}
			return mx / k;
			}
};
//call main function
int main(int argc, char* argv[])
{
//self test ###################################################################
	clock_t begin = clock();
//run programming
	vector<int> arr={1,12,-5,-6,50,3};
	unsigned int k=4;
	float fmax_av;
	Solution fMax;
	fmax_av=fMax.findMaxAverage(arr,k);
	cout<<fmax_av<<" The average "<<endl;
	cout<<"Hello polya,welcome to the programming world" <<endl;
	clock_t end = clock();
	double elapsed_secs = static_cast<double>(end - begin) / CLOCKS_PER_SEC;
	time_t now = time(0);
	char* dt = ctime(&now);
	cout<<"The programming had finished at time : "<< dt << "==============================" <<endl;
	cout <<"The programming running time: "<< elapsed_secs << " s" << endl;
//out test ####################################################################
//unit test ###################################################################
	return 0;
}
