#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(false), cin.tie(0);
	int N;
	while(cin>>N&&N){
        while(true){
            stack<int>intrain;
            queue<int>outrain;
            int temp;
            cin>>temp;
            if(temp==0)
                break;
            else
                outrain.push(temp);
            for(int i=1;i<N;i++){
                cin>>temp;
                outrain.push(temp);
            }
            for(int i=1;i<=N;i++){
                if(i!=outrain.front())
                    intrain.push(i);
                else{
                    outrain.pop();
                    while(!intrain.empty()&&intrain.top()==outrain.front()){
                        intrain.pop();
                        outrain.pop();
                    }
                }
            }
            if(intrain.empty())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        cout << endl;
	}
}
