#include <stdio.h>
#include <iostream>
#include <unordered_set>
int main()
{
    std::string str={"123415678910"};
    int length=0;
    std::unordered_set<char>charSet;
    int maxLength = 0;int left=0;
    for(int i=0;i<str.length();i++)
    {
        while(!charSet.insert(str[i]).second)
        {
           //already element presnt
           
           charSet.erase(str[left]);
           length--;
           left++;
            
        }
        charSet.insert(str[i]);
        length++;
        
        maxLength = std::max(length,maxLength);
    }
    std::string newStr;
    for(auto& x:charSet)
    {
        newStr+=x;
    }
    std::cout<<"Maximum length :"<<maxLength<<"Str :"<<newStr;
    return 0;
}
