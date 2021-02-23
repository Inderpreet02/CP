#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n; cin >> n;

    int arr[n];

    for(int j=0; j<n; j++){
        int num; cin >> num;

        arr[j] = num;
    }
    int mid = n/2;

    for(int i=0; i<=mid; i++){
        swap(arr[i], arr[n-1-i]);
    }
    for(int i:arr){
        cout << i << " ";
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        
    }
    
    return 0;
}


