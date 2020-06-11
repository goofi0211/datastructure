#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
struct node{
    char val;
    node* l;
    node* r;
};
vector<char>ans;
//bfs traversal
void bfs(node*root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        ans.push_back(temp->val);
        if(temp->l)q.push(temp->l);
        if(temp->r)q.push(temp->r);
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        ans.clear();
        stack<node*>st;
        string s;
        node* n;
        node* m;
        cin>>s;
        //±NpostfixÂà¦¨expression tree
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'){
                node* p=new node;
                p->val=s[i];
                p->l=nullptr;
                p->r=nullptr;
                st.push(p);
            }
            else{
                node* p=new node;
                m=st.top();
                st.pop();
                n=st.top();
                st.pop();
                p->val=s[i];
                p->l=n;
                p->r=m;
                st.push(p);
            }
        }
        bfs(st.top());
        for(int i=ans.size()-1;i>=0;i--)
            cout<<ans[i];
        cout<<endl;

    }
}
