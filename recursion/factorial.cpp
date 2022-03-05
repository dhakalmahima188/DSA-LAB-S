// factorial using tail recursion
#include<iostream>
int N;
int res=1;
int tailfact(int N ,int res=1)
{
    if(N==1 || N==0)
    {
        return res;
    }
    else
    {
        return tailfact(N-1, N*res);
    }
}
int fact(int N)
{
        if(N==1 || N==0)
    {
        return 1;
    }
    else
    {
        return fact(N-1)*N;
    }
}

int main()
{
    std::cout<<"Enter the number: ";
    std::cin>>N;
    std::cout<<"Normal:  Factorial of  "<< N <<" : "<< fact(N);
    std::cout<<"\nTail:  Factorial of  "<< N <<" : "<< tailfact(N);
    return 0;
}
