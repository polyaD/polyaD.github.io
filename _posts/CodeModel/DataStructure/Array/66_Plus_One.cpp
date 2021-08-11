/*############################################################################
#Author:polya 
#Emalil:polyaluthor@gmail.com
#66_Plus_One.cpp
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
g++ 66_Plus_One.cpp -o 66 -std=gnu++11
make 66
./66
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
using namespace std;
//define class for solution
class Solution {
	public:
		vector<int> plusOne(vector<int>& digits){
			int n=digits.size();
			for(int i=n-1;i>-0;--i){
				if(digits[i]<9){
					digits[i]+=1;
					return digits;
				}else{
					digits[i]=0;
				}
			}
			if(digits.front()==0){
				digits.insert(digits.begin(),1);
			}
			return digits;
			}
	void displayInfo(vector<int>& nums,bool flag){
		if(flag==1){
			for (int i =0;i<nums.size();i++){
				cout<<nums[i]<<endl;
			}
		}else{
			// Convert vector to string
			ostringstream vts;
			vector<int> vec=nums;
			if (!vec.empty()){
			copy(vec.begin(), vec.end()-1,ostream_iterator<int>(vts, ", ")); 
			vts << vec.back();
			}
			cout<<vts.str()<<endl;
		}
	}
};
//call main function
int main(int argc, char* argv[])
{
//self test ###################################################################
	clock_t begin = clock();
	cout<<"Hello polya,welcome to the programming world" <<endl;
	cout<<"===========================================" <<endl;
	cout<<"//input element: " <<endl;
//run programming############################
	vector<int> arr;
	vector<int> f_plus;
//arr={1,12,-5,-6,50,3};
	arr={1,2,1};
	//unsigned int k=4;
	Solution fplusOne;
	fplusOne.displayInfo(arr,0);
	f_plus=fplusOne.plusOne(arr);
	cout<<" The out of ends:  "<<endl;
	fplusOne.displayInfo(f_plus,0);
	cout<<" The plus One "<<endl;
//###########################################
	cout<<"===========================================" <<endl;
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
