/*############################################################################
#Author:polya 
#Emalil:polyaluthor@gmail.com
#26.Remove_duplicates_from_sorted_array.cpp
#Last updated:2019.10.17
#history version
#Version: 0.1
#function list add template for avoid datatype
#Purpose:
#Main logic principle:
#Usage:
#     example: model.cpp
g++ model.cpp -o model -std=gnu++11
make model
./model
#eg
g++ 26.Remove_duplicates_from_sorted_array.cpp -o 26 -std=gnu++11
make 26
./26
############################################################################*/
//logic outline:print information
//include input and out library
//logic struture:
//
#include <iostream>
#include <typeinfo>
#include <ctime>
#include <vector>
#include <iterator>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <set>
using namespace std;
//define class for solution
template<class T>
class Solution {
	private:
		const vector<T>& nums_;
	public:
		Solution(const vector<T>& nums):nums_(nums){}
		int len_remove_duplicate();
};
template<class T>
int Solution<T>::len_remove_duplicate(){
	cout<<"The typeid: "<<typeid(nums_).name()<<endl;

	//for_each(nums_.begin(),nums_.end(),Display);
	//set<int>s(nums_.begin(),nums_.end());
	//nums_.assign(s.begin(),s.end());
	//sort(nums_.begin(),nums_.end());
//	nums_.erase(unique(nums_.begin(),nums_.end()),nums_.end());
	return nums_.size();
}
void Display(const int& data){
	cout << data << ' ' ;
}
void Display_float(const float& data){
	cout << data << ' ' ;
}
//call main function
int main(int argc, char* argv[])
{
//self test ###################################################################
	clock_t begin = clock();
//run programming############################
	int arr[] = {1,1,2,2,3,5,6,8};
	int len=sizeof(arr)/sizeof(arr[0]);
	vector<int> nums(arr,arr+len);
	cout << "The array is:" ;
	for_each(nums.begin(),nums.end(),Display);
	Solution<int> sol(nums);
	cout <<endl <<"The length of new array : " << sol.len_remove_duplicate() << endl;
cout<<"\n==================================================================="<<endl;
//###########################################
	cout<<"Hello polya,welcome to the programming world" <<endl;
	clock_t end = clock();
	double elapsed_secs = static_cast<double>(end - begin) / CLOCKS_PER_SEC;
	time_t now = time(0);
	char* dt = ctime(&now);
	cout<<"The programming had finished at time : "<< dt << "==============================" <<endl;
	cout <<"The programming running time: "<< elapsed_secs << " s" << endl;
cout<<"==================================================================="<<endl;
//out test ####################################################################
//unit test ###################################################################
	return 0;
}
