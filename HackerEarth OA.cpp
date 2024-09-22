int Arr_Diff (vector<int> arr) {
   // Write your code here
   int n=arr.size(), maxi=INT_MIN, mini=INT_MAX;
   for(int i=0;i<n;i++){
    if(arr[i]%2!=0)
    arr[i]=2*arr[i];
    maxi=max(maxi,arr[i]);
    mini=min(mini,arr[i]);
   }
   priority_queue<int> pq;
   for(int i=0;i<n;i++) pq.push(arr[i]);


   int md=maxi-mini;
   while(!pq.empty()) {
    int top=pq.top();
    pq.pop();
    md=min(md,top - mini);
    if(top%2 == 0) mini = min(mini,top/2);
    else break;
    pq.push(top/2);
   }
   return md;
}



char get_char_with_kth_highest_freq(string s, int k) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

    vector<pair<int, vector<char>>> gp;

    for (auto &p : freq) gp.push_back({p.second, {p.first}});

    sort(gp.begin(), gp.end(), [](const auto& a, const auto& b) {
        return a.first > b.first || (a.first == b.first && a.second[0] < b.second[0]);
    });

    if (k > gp.size()) return -1;

    return gp[k-1].second[0];
}


#include<bits/stdc++.h>
using namespace std;
int findMinimum (vector<vector<vector<int>>>&arr,int rr,int cc) {
   // Write your code here
   vector<vector<bool>>vis(arr.size(),vector<bool>(arr[0].size(),false));
   vis[0][0]=true;
   queue<pair<int,int>>q;
   int le=0;
   q.push({0,0});
   while(!q.empty()) {
    int si=q.size();
    while(si > 0){


        pair<int,int>curr=q.front();
        q.pop();
        int r=curr.first, c=curr.second;
        if(r==rr and c==cc) return le;
        int x=arr[r][c][0], y=arr[r][c][1];
        int rc=arr.size(), cd=arr[0].size();


        int dir[8][2]={{x,y},{x,-y},{-x,y},{-x,-y},{y,x},{y,-x},{-y,x},{-y,-x}};
        for(int i=0;i<8;i++){
            int nr=r+dir[i][0], nc=c+dir[i][1];
            if(nr>=0 and nr<rc and nc>=0 and nc<cd and !vis[nr][nc]){
                q.push({nr,nc});
                vis[nr][nc]=true;
            }
        }
        si--;
    }
    le++;
   }
   return -1;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        int M;
        cin >> M;
        vector<vector<vector<int>>>arr(N,vector<vector<int>>(M,vector<int>(2)));
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++) cin>>arr[i][j][0]>>arr[i][j][1];
        }
        int out_;
        out_ = findMinimum(arr,N-1,M-1);
        cout << out_;
        cout << "\n";
    }
}
