#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool canVisitAllRooms(vector<vector<int>>& rooms) {
		vector<int>a(rooms.size(), 0);
		queue<int>q;
		q.push(0);
		a[0]=1;
		while(!q.empty()){
			int ind=q.front();
			q.pop();
			for(auto it: rooms[ind]){
				if(!a[it]){
					a[it]=1;
					q.push(it);
				}
			}
		}
		for(int i=0; i<a.size(); i++){if(!a[i]){return false;}}
		return true;
	}
};