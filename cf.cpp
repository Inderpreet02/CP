#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;

    cin >> n;

    while(n--){
        int a;

        cin >> a;
        int arr1[a];
        

        for(int i=0; i<a; i++){
            int temp; cin >> temp;
            arr1[i] = temp;
        }


        for(int k=0; k<a; k++){
            int sum = 0;
            for(int j=0; j<a; j++){
                if(k!=j){
                    sum+=arr1[j];
                }
            }
            cout << sum << " ";
        }


        cout << endl;
    }

    

    return 0;
}