#include<iostream>
using namespace std;

void adjust(int i,int* m_heap,int n);
int main(){
	int m,n,num,*m_heap;
	cin>>num;
	for(int iter=0;iter<num;iter++){
        cin>>m;
        cin>>n;
        m_heap = new (nothrow) int[m+1];
        if (m_heap == nullptr)
        cout << "Error: memory could not be allocated";
        else{
            for(int i=1;i<=m;i++){
            cin>>m_heap[i];
            }
            for(int i=m/2;i>=1;i--){
            //bottom up max-heap
                adjust(i,m_heap,m);
            }

            int answer=0;
            for(int i=1;i<=n;i++){
                answer+=m_heap[1];
                m_heap[1]-=1;
                for(int i=m/2;i>=1;i--){
                //bottom up max-heap
                    adjust(i,m_heap,m);
                }
            }
            cout<<answer;
            delete[] m_heap;
        }













	}




}

void adjust(int i,int* m_heap,int n){
	bool done=false;
	int r,j;
	r=m_heap[i];
	j=2*i; //取出左子點
	while(j<=n and !done){
		if(j<n)
			if(m_heap[j]<m_heap[j+1])
				j=j+1;
        if(r>=m_heap[j])
            done=true;
        else{
            m_heap[j/2]=m_heap[j];
            j=2*j;
        }
        m_heap[j/2]=r;
	}
}
