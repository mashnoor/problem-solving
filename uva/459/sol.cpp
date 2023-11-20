#include <iostream>
#include <string>
#include <cstdio>
#include <unordered_map>

using namespace std;
class DSU {
    unordered_map<char, char> parent;
    char end;
    public:
        DSU(char c)
        {
           this->make_set(c);
           end = c;

        }

        void make_set(char c)
        {
            end = c;
            for(char a = 'A'; a<=c; a++)
            {
                parent[a] = a;
            }
        }

        void print()
        {
            for(auto i = parent.begin(); i != parent.end(); i++)
            {
                cout<<"n: " <<i->first<<" p: "<<i->second<<endl;
            }

        }

        char find(char n)
        {
            if(parent[n] == n) return n;
            else
            {
                parent[n] = find(parent[n]);
                return parent[n];
            }
        }

        void make_union(char a, char b)
        {
            char rep_a = find(a);
            char rep_b = find(b);

            if(rep_a != rep_b)
            {
                parent[rep_a] = rep_b;
            }
        }

        int get_disconnected_set_number()
        {
            int count = 0;
            for(char c = 'A'; c<=end; c++)
            {
                // cout<<"Here"<<endl;
                if(parent[c] == c) count++;
            }

            return count;
        }

};

int main()
{

    // DSU d('E');

    // d.make_union('A', 'B');
    // d.make_union('C', 'E');
    // d.make_union('D', 'B');
    // d.make_union('E', 'C');

    // cout<<d.get_disconnected_set_number();
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    string dump;
    cin>>t;
    cin.ignore();
    for(int i = 1; i<=t; i++)
    {
        if(i > 1) cout<<endl;
        DSU d('A');
        string s;
        char largestNode;
        cin >> largestNode;
        cin.ignore();
        d.make_set(largestNode);
        
        while (getline(cin, s) && s != "")
        {

            // cout<<"s : "<<s<<endl;

           
            d.make_union(s[0], s[1]);
         
        }
        // if(i == 0) continue;
        // d.print();

        cout<<d.get_disconnected_set_number()<<endl;
        

    }



    



    return 0;
}