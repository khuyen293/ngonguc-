#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    double max_avg = double(a[1] + a[2]) / 2;
    double min_avg = double(a[1] + a[2]) / 2;

    for (int i = 0; i < n; i++){
        double t = a[i];
        for (int j = i + 1; j < n; j++){
            t += a[j];
            double avg = t / (j - i + 1);
            if(avg > max_avg){
                max_avg = avg;
            }
            if(avg < min_avg){
                min_avg = avg;
            }
        }
    }
    cout << fixed << setprecision(3) << min_avg << " " << max_avg;
}