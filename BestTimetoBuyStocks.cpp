int main() {
    int arr[10]={2,3,5,9,12,5,8,19,89};
    int profit=-1;
    size_t len = (sizeof(arr)/sizeof(arr[0]));
    int mini=100000; 
    int maxProfit = arr[0];
    for(auto i=0;i<=len-1;i++)
    {
         mini=min(mini,arr[i]);
         profit = arr[i]-mini;
         maxProfit = std::max(maxProfit,profit);
         
    }
    std::cout<<"Max Profilt : "<<maxProfit;
    return 0;
}
