#include <iostream>
#include<cstdio>
#include<map>
#include<string>
using namespace std;

int d[10000], par[10000];
int find(int x) {
    return par[x] == x ? x : par[x] = find(par[x]);
}
void _union(int x, int y) {
    x = find(x);
    y = find(y);
    if(x != y) {
        par[x] = y;
        d[y] += d[x];
    }

}

int main() {
    
	
    freopen("input.txt", "r", stdin);  
    while(1) {
        int c, r;cin >> c >> r;
        if(c == 0 && r == 0 || c == 0) break;
        else {
            map<string, int> chain;
            for(int i = 0; i < c; i++) {
                string name;
                cin >> name;
                chain[name] = i;
                par[i] = i;
                d[i] = 1;
            }
            for(int i = 0; i < r; i++) {
                string inferior;
                cin >> inferior;
                string predator;
                cin >> predator;
                _union(chain[inferior], chain[predator]);
            }
            int a = 0;
            for(int i = 0; i < c; i++) {
                if(d[i] > a) {
                    a = d[i];
                }
            }
            //dbgA(d, 20);
            cout << a << "\n";
        }
    }
	return 0;
}