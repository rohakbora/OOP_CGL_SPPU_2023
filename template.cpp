#include<iostream>
using namespace std;
#define size 10
int n;
template<class T>
void selection(T A[size])
{
        int i,j,min;
        T temp;
        for(i=0;i<n-1;i++)
        {
                min=i;
                for(j=i+1;j<n;j++)
                {
                        if(A[min]>A[j])
                        {
                                min=j;
                        }
                }
                if(min!=i)
                {
                        temp=A[i];
                        A[i]=A[min];
                        A[min]=temp;
                }
        }
        cout<<"\nThe sorted array is: ";
        for(int i=0;i<n;i++)
        {
                cout<<A[i]<<" ";
        }
}

int main()
{
        int A[size],val;
        cout<<"\nEnter no of elements: ";
        cin>>n;
        for(int i=0;i<n;i++)
        {
                cout<<"\nEnter element: ";
                cin>>val;
                A[i]=val;
        }
        selection(A);
        return 0;
}