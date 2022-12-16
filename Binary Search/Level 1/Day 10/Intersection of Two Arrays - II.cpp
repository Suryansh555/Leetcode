#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2);
};
/**********************************************************************************/
vector<int> Solution::intersect(vector<int>& nums1, vector<int>& nums2) {
    map<int,int> m1, m2;
    map<int,int>::iterator it;
    int i, size, min;
    vector<int> ansV;
    size = nums1.size();
    for (i = 0; i < size; ++i) {
        ++m1[nums1[i]];
    }
    size = nums2.size();
    for (i = 0; i < size; ++i) {
        ++m2[nums2[i]];
    }
    for (it = m1.begin(); it != m1.end(); ++it) {
        if (m2.find(it->first) != m2.end()) {
            min = (m1[it->first] <= m2[it->first]) ? m1[it->first] : m2[it->first];
            for(i = 0; i < min; ++i)
                ansV.emplace_back(it->first);
        } 
    }
    return ansV;
}