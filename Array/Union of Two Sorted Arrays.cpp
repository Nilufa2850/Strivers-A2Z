#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
using namespace std ;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int>result ;
    int i,j ;

    for (i=0,j=0 ; i<n && j<m ; )
    {
        if (arr1[i] < arr2[j])
        {
            if (result.empty() || arr1[i] != result.back())
                result.push_back (arr1[i]) ;
            i++ ;
        }
        else if (arr2[j] < arr1[i] ) 
        {
            if (result.empty() || arr2[j] != result.back())
                result.push_back (arr2[j]) ;
            j++ ;
        }
        else //when equal
        {
            if (result.empty() || arr1[i] != result.back())
                result.push_back (arr1[i]) ;
            i++ ;
            j++ ;
        }
    }
    while (i<n)
    {
        if (result.empty() || arr1[i] != result.back())
            result.push_back (arr1[i]) ;
        i++ ;
    }
    while (j<m)
    {
        if (result.empty() || arr2[j] != result.back())
            result.push_back (arr2[j]) ;
        j++ ;
    }
    return result ;
}

int main ()
{
    int arr1[] = {1,2,3,4,5}  ; 
    int arr2[] = {1,2,3} ;

    vector<int> temp = findUnion(arr1,arr2,5,5) ;
    for (auto x: temp)
        cout<<x<<" " ;
}

