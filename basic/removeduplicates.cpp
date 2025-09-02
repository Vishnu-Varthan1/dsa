#include<iostream>
#include<vector>
using namespace std;

int removeduplicated(vector<int> & arr){
    int n = arr.size();
    if(n<=1){
        return n;
    }
    int idx=1;
    for (int i = 1; i < n; i++)
    {
        /* code */
        if (arr[i]!=arr[i-1])
        {
            /* code */
            arr[idx++]=arr[i];
        }
        
    }
    return idx;
    
}
int main(){
    vector<int> arr = { 1,2,3,3,4,4,5};
    int newsize= removeduplicated(arr);
    for (int i = 0; i < newsize; i++)
    {
        /* code */
        cout<<arr[i];
    }
    return 0;
    
}