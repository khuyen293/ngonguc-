#include<bits/stdc++.h>
#include<iomanip>
#include<algorithm>
using namespace std;

int n;
int a[1001];
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int dem = 0;
    for (int i = 2; i <= n; i++){
        if(a[i] != a[i-1]){
            dem++;
        }
    }
    dem += 1;
    cout << dem << "\n";
    int start = 1;
    for (int i = 2; i <= n; i++){
        if(a[i] != a[i-1]){
            int end = i - 1;
            cout << a[start] << " " << (end - start + 1) << "\n";
            start = end + 1;
        }
    }
    int end = n;
    cout << a[start] << " " << (end - start + 1) << "\n";
}