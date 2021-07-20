//solving factorial without using recursion

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; //test case
    while(t--){
        int n, m = 1;
        cin >> n;
        int arr[n];
        for (int i = 0; i<n; i++){
            arr[i] = n-i;
            m *= arr[i];
        }
        cout << m << endl;
    }
	return 0;
}
