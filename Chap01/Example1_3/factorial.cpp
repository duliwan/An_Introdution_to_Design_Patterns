int factorial(long n)
{
    long ans(1);
    for (long i=2; i<=n; ++i ){
        ans=ans*i;
    }
    if (ans<0){
        return -1;
    }
    return ans;
};
