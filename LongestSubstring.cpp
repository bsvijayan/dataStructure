#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main()
{ 
    std::string str="abc1defghiksad";
    int right=0,left=0,maxLen=0;
    int len = str.length();

    std::unordered_set<char>charSet;
    while(right < len )
    {
        if(charSet.find(str[right])== charSet.end())
        {
            charSet.insert(str[right]);
            maxLen = std::max(right-left+1,maxLen);           
            right++;
        }
        else
        {
            charSet.erase(str[left]);
            ++left;
        }
    }
    std::cout<<"Max len : "<<maxLen;       
}
 
