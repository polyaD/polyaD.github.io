/*############################################################################
#Author:polya 
#Emalil:polyaluthor@gmail.com
#724_Find_Pivot_Index.cpp
#Last updated:2019.1o.15
#history version
#Version: 0.1
#Purpose:
#Main logic principle:
#Usage:
#     example: model.cpp
g++ model.cpp -o model -std=gnu++11
make model
./model
#eg
g++ 724_Find_Pivot_Index.cpp -o 724 -std=gnu++11
make 724
./724
############################################################################*/
//logic outline:print information
//include input and out library
//logic struture:
//
#include <iostream>
#include <ctime>
#include <vector>
#include<numeric>
using namespace std;
//define class for solution
class Solution {
	float S;
	public:
		double pivotIndex(vector<int>& nums){
			S=accumulate(nums.begin(),nums.end(),0);
			float leftsum=0;
			for(unsigned int i = 0; i < nums.size(); ++i){
				cout<<nums[i]<<" ";
				if(leftsum==S-leftsum-nums[i]){
					return i;
				}
				leftsum +=nums[i];
			}
			return -1;
			}
};
//call main function
int main(int argc, char* argv[])
{
//self test ###################################################################
	clock_t begin = clock();
//run programming############################
	vector<int> arr;
//  arr={1,12,-5,-6,50,3};
	arr={1,2,1,2,1,3};
	float f_pivot;
	Solution pivotIn;
	f_pivot=pivotIn.pivotIndex(arr);
	cout<<"\nThe outs of programming: "<<f_pivot<<"  The index of pivot at  the array "<<endl;
//###########################################
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
