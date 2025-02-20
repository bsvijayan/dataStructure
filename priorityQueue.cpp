#include <stdio.h>
#include <array>
#include <iostream>
#include <queue>
#include <vector>
int main()
{
    std::array<int,6>intArray={1,3,5,6,8,9};
    std::priority_queue<int,std::vector<int>,std::greater<int>>intQueue;
    //std::priority_queue<int>intQueue;
    int k=2;
    for(int& x:intArray)
    {
        intQueue.push(x);
      if(intQueue.size() >k)
        intQueue.pop();
    }
    while(!intQueue.empty())
    {
        std::cout<<" Element : "<<intQueue.top()<<"\n";
        intQueue.pop();
    }
    
    
    return 0;
}
