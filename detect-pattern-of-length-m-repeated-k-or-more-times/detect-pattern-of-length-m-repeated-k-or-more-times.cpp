class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
      int size=arr.size()-1;
      for(int i=0;i<=size-m;i++){
          vector<int>v(arr.begin()+i,arr.begin()+m+i);int c=0;
         
          for(int j=i;j<=size-m+1;j+=m){
               vector<int>s(arr.begin()+j,arr.begin()+m+j);
               //  for(auto e: s){
               //    cout<<e<<" ";
               //  }
               //  cout<<c<<"s"<<endl;
               // for(auto e: v){
               //    cout<<e<<" ";
               //  }
               //  cout<<c<<"v"<<endl;
               if(v == s){
                   c++;
               }
             
              else if(v!=s && c!=k){
                   c=0;
                   
               }
              else if(v!=s && c==k){
                  return true;
              }
              else if(c==k) return true;
               cout<<c<<endl;
          }
          if(c==k){
              return true;
          }
      }
        return false;
    }
};