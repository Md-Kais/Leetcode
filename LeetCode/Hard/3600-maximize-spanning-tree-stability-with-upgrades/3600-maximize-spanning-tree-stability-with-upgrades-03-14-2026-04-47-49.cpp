class dsu{
public:
    vector<int>par,rank;
    dsu(int n){
        rank.resize(n,0);
        par.resize(n);
        for(int i=0;i<n;i++)par[i]=i;
    }
    int fp(int u){
        return par[u]=(par[u]==u)?u:fp(par[u]);
    }
    void ubr(int u, int v){
        int uu=fp(u),uv=fp(v);
        if(uu==uv)return;
        if(rank[uu]==rank[uv]){
            rank[uu]++;
            par[uv]=uu;
        }else if(rank[uu]>rank[uv])par[uv]=uu;
        else par[uu]=uv;
    }
    bool same(int u, int v){
        return fp(u)==fp(v);
    }
};
class Solution {
public:
    int maxStability(int n, vector<vector<int>>& edges, int k) {
        dsu ds(n);
        vector<int>extra;  
        int used=0,ans=INT_MAX; 
        sort(edges.begin(),edges.end(),[](auto&a,auto&b){
          return (a[3]==b[3])?a[2]>b[2]:a[3]>b[3];
        });
        for(auto& it:edges) {
            int u=it[0],v=it[1],w=it[2],req=it[3];
            if(req){
                if(ds.same(u,v))return -1;
                ds.ubr(u,v);
                ans=w; 
                used++;
            }else{
                if(!ds.same(u,v)){
                    ds.ubr(u,v);
                    extra.push_back(w);
                    used++;
                }
                if(used==n-1)break;
            }
        }
        if(used!=n-1)return -1;
        int sz=extra.size();
        if(!sz)return ans;
        if(sz>k)return min({extra[sz-k-1],2*extra.back(),ans});
        return min(2*extra.back(),ans);
    }
};