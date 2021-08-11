/*############################################################################
#Author:polya polyaluthor@gmail.com
#717_1-bit_and_2-bit_Characters.cpp
#Last updated:2019.10.14
#Version: 1.0 run first
#need do list:
#1. add parameter commond ;
#2. class split to function;
#3. set up class error;
#Purpose:
#Main logic principle:
#Usage:
#     example: 717_1-bit_and_2-bit_Characters.cpp
#g++ 717_1-bit_and_2-bit_Characters.cpp -o 717 -std=gnu++11
#make 717
#./717
############################################################################*/
//logic outline:print information
//include input and out library
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
//define class for solution
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size(), i = 0;
        while (i < n - 1) {
            i+=bits[i]+1;
        }
        return i==n-1;
    }
};
//call main function
int main(int argc, char* argv[])
{
// self test ################################
    Solution bitsChar;
    bool out_ends;
    //vector<int> arr={1,0,0};
    //cout<<arr[1]<<endl;
    vector<int> arr={1,0,1,0};
    out_ends=bitsChar.isOneBitCharacter(arr);
    //travel each vector
    cout<<out_ends<<endl;
    //printf("%s/n",out_ends);
// out file test ############################
/*
   for(int i=0;i<argc;i++){
      cout<<"Argument "<<i<<" is "<<argv[i]<<endl;
   }
return EXIT_SUCCESS;
*/
//unit test      ############################
    return 0;
}
