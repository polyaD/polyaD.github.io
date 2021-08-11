/*############################################################################
#Author:polya polyaluthor@gmail.com
#1_two_sum.cpp
#Last updated:2019.time
#Version: 0.1
#Purpose:
#Main logic principle:
#vector to travel ,unordered_map to store index
#travel each element
#Usage:
#     example: 1_two_sum.cpp
############################################################################*/
//logic outline:print information
//include input and out library
//struture:
//
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
//define class for solution
class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
  unordered_map<int, int> m;
  vector<int> result;
  for(int i=0; i<numbers.size(); i++){
    // not found the second one
    if (m.find(numbers[i])==m.end() ) {
      // store the first one position into the second one's key
      m[target - numbers[i]] = i;
    }else {
      // found the second one
      result.push_back(m[numbers[i]]);
      result.push_back(i);
      break;
    }
  }
  return result;
}
};
//call main function
int main(int argc, char* argv[])
{
    Solution ts;
    vector<int> arr={1,5,7,10,12};
    unsigned int target=12;
    vector<int> out_ends;
    out_ends=ts.twoSum(arr,target);
    //travel each vector
    cout<<"The index of two sum  : "<<endl;
    for (int i =0;i<out_ends.size();i++){
            cout<<out_ends[i]<<endl;
    };
    //cout << out_ends[0] << endl;
    return 0;
}
