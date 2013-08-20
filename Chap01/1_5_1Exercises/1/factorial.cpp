#include <iostream>

long long factorial(long n)
{
    long long ans(1);
    for (long long i=2; i<=n; ++i ){
        ans=ans*i;
//        std::cout<<ans<<std::endl;
    }
    if (ans<0){
        return -1;
    }
    return ans;
};
