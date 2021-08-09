/*############################################################################
#Author:polya 
#Emalil:polyaluthor@gmail.com
#35_Search_Insert_Position.cpp
#Last updated:2019.10.16
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
g++ 35_Search_Insert_Position.cpp -o 35 -std=gnu++11
make 35
./35
############################################################################*/
//logic outline:print information
//include input and out library
//logic struture:
//
#include <iostream>
#include <ctime>
#include <vector>
#include <iterator>
#include <sstream>
#include <algorithm>
#include <numeric>
using namespace std;
//define class for solution
template<class T>
class Solution {
	private:
		const vector<T>& nums_;
		const T& target_;
	public:
		Solution(const vector<T>& nums,const T& target):nums_(nums),target_(target) {}
		int SearInsertPos();
};
template<class T>
int Solution<T>::SearInsertPos(){
	int i;
	for(i = 0; i < nums_.size(); i++) {
		if(nums_[i] >= target_) {
				return i;
		}
	}
	return i;
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
	int arr[] = {2,1,5,6};
	vector<int> nums(arr,arr+4);
	cout << "The array is:" ;
	for_each(nums.begin(),nums.end(),Display);
	Solution<int> sol(nums,5);
	cout <<endl <<"The target is:" << int(5) << ",The index is:" << sol.SearInsertPos() << endl;
	float f_arr[] = {1.1,3,5.1,6};
	vector<float> f_nums(f_arr,f_arr+4);
	cout << "\nThe array float element is:" ;
	for_each(f_nums.begin(),f_nums.end(),Display_float);
	Solution<float> f_sol(f_nums,5);
	cout <<endl<< "The float target is:" << float(5.5) << ",The index is:" << f_sol.SearInsertPos() << endl;
cout<<"\n==================================================================="<<endl;
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
