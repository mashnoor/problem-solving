#include <iostream>
#include <string>
#include <cstring>
#include <unordered_map>

using namespace std;

class DSU {
    unordered_map<string, string> parent;
    unordered_map<string, int> chain_lengths;
    public:
        void add_node(string creature)
        {
            parent[creature] = creature;
            chain_lengths[creature] = 1;
        }

        string find(string cret)
        {
            if(parent[cret] == cret) return cret;
            else
            {
                parent[cret] = find(parent[cret]);
                return parent[cret];
            }
        }

        void make_chain(string cret, string pred)
        {
           cret = find(cret);
           pred = find(pred);
           

           if(cret != pred)
           {
            parent[cret] = pred;
            chain_lengths[pred] += chain_lengths[cret];
           }
          
        }

        int mx_find()
        {
            int mx = 0;
            for(auto i = chain_lengths.begin(); i!=chain_lengths.end(); i++)
            {
                // int cm = find(i->first);
                int cm = i->second;
                if(cm > mx)
                {
                    mx = cm;
                }
            }

            return mx;
        }

        // void print()
        // {
        //     for(auto i = parent.begin(); i != parent.end(); i++)
        //     {
        //         cout<<"n: " <<i->first<<" p: "<<i->second<<endl;
        //     }

        // }

        



};


int main()
{

    freopen("input.txt", "r", stdin);    
    int c, r;
    bool first = true;
    while (scanf("%d %d", &c, &r) == 2)
    {
        
        if(c == 0 && r == 0) break;
        first = false;
        DSU d;
        string creature;
        while(c--)
        {
            cin>>creature;
            d.add_node(creature);
        }
        while (r--)
        {
            string c, p;
            cin>>c>>p;
           
            d.make_chain(c, p);
        }

        cout<<d.mx_find()<<"\n";
 
        cin.ignore();
        
    }
    


    return 0;
}