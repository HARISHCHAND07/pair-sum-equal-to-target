#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> findpair(vector<int> v,int SUM){
    vector<vector<int>>ans;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==SUM){
                vector<int>temp;
                temp.push_back(min(v[i],v[j]));
                temp.push_back(max(v[i],v[j]));
                ans.push_back(temp);
            }
        }
    }//sort(ans.begin(),ans.end());
    return ans;
   
}
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(8);
    v.push_back(90);
    v.push_back(5);
    v.push_back(1);
    int s;
    cin>>s;
    vector<vector<int>>c=findpair(v,s);
    for(int i=0;i<c.size();i++){
        cout<<v.at(i)<<" ";//-------------------at----------------------
    }
    return 0;
}