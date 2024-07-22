class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
         vector<pair<int, string>> heightNamePairs;
        for (int i = 0; i < heights.size(); ++i) {
            heightNamePairs.emplace_back(heights[i], names[i]);
        }

        // Sort the pairs in descending order based on heights
        std::sort(heightNamePairs.begin(), heightNamePairs.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
            return a.first > b.first; // Sort by height in descending order
        });

        // Extract the sorted names
        for (int i = 0; i < heightNamePairs.size(); ++i) {
            names[i] = heightNamePairs[i].second;
        }

        return names;
        
    }
};