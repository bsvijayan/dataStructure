std::vector<long long>memo(100,-1);
long long fib(int n)
{
    if(n<=1)
       return 1;
    if(memo[n-1]!=-1) return memo[n];
    else
       return memo[n]= fib(n-1)+fib(n-2);
       
    
}
int main()
{
    std::cout<<" Fib "<<fib(100);

    return 0;
}
