#include <stdio.h>
#include <algorithm>
#include <iostream>
void genPermu(std::string str,int start,int end)
{
    if(start == end)
    {
        std::cout<<str<<"\n";
    }
    else
    {
        for(int i=start;i<=end;i++)
        {
            std::swap(str[start],str[i]);
            genPermu(str,start+1,end);
            std::swap(str[start],str[i]);
        }
    }
        
}
    
int main()
{

   std::string str="esa";
   genPermu(str,0,str.size()-1);
       
}
