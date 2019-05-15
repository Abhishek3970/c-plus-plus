//wdcount.cpp
//demonstrates enums, counts spaces in phrase
#include<iostream>
#include<conio.h>
using namespace std;
enum itsword {NO, YES};
int main()
{
    itsword isword = NO;
    char a;
    int wordcount = 0;
    a = 'a';
    cout<<"Enter a phrase:";
    do
    {
        a = getche();
        if(a=='\r'||a==' ')
        {
            if(isword == YES)
            {
                wordcount++;
                isword = NO;
            }
        }
        else if (isword == NO)
        {
            isword = YES;
        }
    } while (a!='\r');
    cout<<"\nNo. of words are:"<<wordcount;
    return 0;
}