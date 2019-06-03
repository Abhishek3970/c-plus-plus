//Implementation of merge sort using arrays
#include<iostream>
using namespace std;
void merge(int a[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],R[n2];
    int i,j,k;
    for(i=0;i<n1;i++)
    {
        L[i]=a[p+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=a[q+j+1];
    }
    i=0;
    j=0;
    k=p;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}
void merge_sort(int a[],int p,int r)
{
    if(p<r)
    {
        int temp=(p+r)/2;
        merge_sort( a, p, temp);
        merge_sort( a, temp+1, r);
        merge(a,p,temp,r);
    }
}
int main()
{
    int n,i;
    cout<<"\nEnter the number of elements:";
    cin>>n;
    int* a=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nCurrently, the array is:\n";
    for(i=0;i<n;i++)
        {
            cout<<a[i]<<"\t";
        }
    merge_sort(a,0,n-1);
    cout<<"\nThe sorted array is:\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}
