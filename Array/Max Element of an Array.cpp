#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<set>
using namespace std ;

int largest(vector<int> &arr) 
{
    //Process 1
    /*sort(arr.begin() , arr.end()) ;
    return arr.back() ;*/

    //Process 2
    /*int Max=INT_MIN ;
    for (int i=0 ; i<arr.size() ; i++)
        Max = max(Max,arr[i]) ;
    return Max ;*/

    //Process 3
    /*set<int , greater<int>> S (arr.begin() , arr.end()) ;
    return *(S.begin()) ;*/

    //Process 4
    return *(max_element(arr.begin(),arr.end())) ;

}
int main()
{
    vector<int> v {4,8,110,30,4} ;
    cout<<largest(v) ;
}
