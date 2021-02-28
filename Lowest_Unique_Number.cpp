#include<bits/stdc++.h>
using namespace std;

int auction(int N,vector<int> bids)
{
	int m = 2147483647;
	unordered_map<int, int> map;

	for (auto i = bids.begin(); i != bids.end(); ++i) 
        map[*i] = map[*i] + 1;
 
    unordered_map<int, int>::iterator itr;

    for (itr = map.begin(); itr != map.end(); itr++)
    {
        if (itr->second == 1) {
            if (itr->first < m) {
                m = itr->first;
            }
        }
    }
    if(m==2147483647)
    	return -1;
    return m;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin>>N;
	vector<int> bids(N);
	for(int i_bids=0; i_bids<N;i_bids++)
	{
		cin>>bids[i_bids];
	}

	int out_;
	out_ = auction(N,bids);
	cout<<out_;
}