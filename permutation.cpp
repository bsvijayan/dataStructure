#include <stdio.h>
#include <array>
#include <iostream>
#include <queue>
#include <vector>
void permute(std::string& str,int l,int r)
{

if(l == r)
{
   std::cout<<str<<"\n";
   return;
}

for(int i=l;i<=r;i++)
{

    std::swap(str[l],str[i]);
    permute(str,l+1,r);
    std::swap(str[l],str[i]);
}
}

int main()
{
    std::string s="TES";
    permute(s,0,s.size()-1);
    return 0;
}
