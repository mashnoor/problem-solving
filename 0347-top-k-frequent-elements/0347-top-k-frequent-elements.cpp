class Solution {
public:
    
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
    while (i != 0 && pheap[i].second < pheap[parent(i)].second)
    {
        swap(pheap[i], pheap[parent(i)]);
        i = parent(i);
    }  
    
}

void shiftDown(int i)
{
     int smallest = i;
    int left = left_idx(i);
    int right = right_idx(i);
    
    if (left < pheap.size() && pheap[left].second < pheap[smallest].second)
        smallest = left;
  
    if (right < pheap.size() && pheap[right].second < pheap[smallest].second)
        smallest = right;
  
    if (smallest != i) {
        swap(pheap[i], pheap[smallest]);
        shiftDown(smallest);
    }
    
}

int extract()
{
    // for(int i = 0; i<pheap.size(); i++)
    // {
    //     cout<<pheap[i].first<<" "<<pheap[i].second<<endl;
    // }
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

    // If size of heap is more than k
    // Pop the smallest (root)
    if (pheap.size() > k)
    {
        swap(pheap[0], pheap[pheap.size() - 1]);
        pheap.pop_back();
        shiftDown(0);
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

   

};