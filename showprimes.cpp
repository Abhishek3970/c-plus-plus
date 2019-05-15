//showprimes.cpp
//A program to represent primes in visual form
#include<iostream>
using namespace std;
int main()
{
    const unsigned char White = 219;
    const unsigned char Grey = 176;
    unsigned char ch;
    for(int count = 0; count<10000; count++)
    {
        ch = White;
        for(int j=2;j<count;j++)
        {
            if(count%j==0)
            {
                ch = Grey;
                break;
            }
            
        }
        cout<<ch;
    }
    return 0;
}
