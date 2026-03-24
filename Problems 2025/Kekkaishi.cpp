#include <bits/stdc++.h>
using namespace std;

double findMinSurface(const vector<tuple<int, int, int>>& points) {
    


}

int main() {
    int t, n, k;
    long long x, y ,z;
    string str;
    cin >> t;
    while(t){
        cin >> n;
        for(int i = 0; i < n; i++){
             vector<tuple<int,int,int>> points;
            cin >> str;
            if(str == "ADD"){
                cin >> x >> y >> z;
                points.push_back(make_tuple(x, y, z));
                cout << findMinSurface(points) << endl;
            }else{
                cin >> k;
                if(k-1 >= 0 && k-1 < points.size()) {
                    points.erase(points.begin() + k-1);
                }
                cout << findMinSurface(points) << endl;
            }
        }
        t--;
    }


    return 0;
}