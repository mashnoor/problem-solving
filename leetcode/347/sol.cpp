#include <iostream>
#include <utility>
#include <vector>
#include <cstring>

using namespace std;

vector<pair<int, int>> pheap;
int parent(int i)
{
    return (i - 1)/2;
}
int left_idx(int i)
{
    return 2*i + 1;
}
int right_idx(int i)
{
    return 2*i + 2;
}



void shiftUp(int i)
{
    while (i > 0 && pheap[i].second > pheap[parent(i)].second)
    {
        swap(pheap[i], pheap[parent(i)]);
        i = parent(i);
    }
    
}
void shiftDown(int i)
{
    int mxidx = i;
    
    
    int l =  left_idx(i);
    int r = right_idx(i);
    if(l < pheap.size() && pheap[mxidx].second < pheap[l].second)
    {
        
        mxidx = l;
    }
    else if(r < pheap.size() && pheap[mxidx].second < pheap[r].second)
    {
        
        mxidx = r;
    }
    if (i != mxidx)
    {
        // cout<<"swap: "<<i<<" "<<mxidx<<endl;
        swap(pheap[i], pheap[mxidx]);
        shiftDown(mxidx);
    }

}

int extract()
{
    for(int i = 0; i<pheap.size(); i++)
    {
        cout<<i<<" "<<pheap[i].first<<" "<<pheap[i].second<<endl;
    }
    cout<<endl;
    int mx = pheap[0].first;
    swap(pheap[0], pheap[pheap.size() - 1]);
    pheap.pop_back();
    shiftDown(0);

    return mx;
}

void insert(pair<int, int> p, int k)
{
    if(p.second == 0) return;
    
    pheap.push_back(p);
    shiftUp(pheap.size() - 1);

    // for(int i = 0; i<pheap.size(); i++)
    // {
    //     cout<<pheap[i].first<<" "<<pheap[i].second<<endl;
    // }
    // cout<<endl;
    if (pheap.size() > k)
    {
        pheap.pop_back();
    }
   
}

vector<int> topKFrequent(vector<int>& nums, int k) 
{
    
    int ofset = 10000;

    int rng = 2*ofset + 2;
    
    int cnt_arr[rng];
    memset(cnt_arr, 0, sizeof(cnt_arr));

    for(int i = 0; i< nums.size(); i++)
    {
        cnt_arr[nums[i] + ofset]++;
    }
    for(int i = 0; i<rng; i++)
    {
        int cnt = cnt_arr[i];
        int v = i - ofset;
       

        insert(make_pair(v, cnt), k);

    }

    vector<int> v;
    for(int i = 0; i<k; i++)
    {
        v.push_back(extract());
    }

    return v;

        
                
}

//[5,-3,9,1,7,7,9,10,2,2,10,10,3,-1,3,7,-9,-1,3,3]
//3


int main()
{
    vector<int> v = {5,-3,9,1,7,7,9,10,2,2,10,10,3,-1,3,7,-9,-1,3,3};
    vector<int> res = topKFrequent(v, 3);
    for(int  i = 0; i<res.size(); i++)
    {
        cout<<res[i]<<endl;
    }

}