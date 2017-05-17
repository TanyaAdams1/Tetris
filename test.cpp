#include<queue>
#include<iostream>
using namespace std;
int main()
{
	queue<pair<int,int> > que;
	for(int i=0;i<100;i++)
		if(i%2==0){
			pair<int,int>tmp(i,i);
			que.push(tmp);
			cout<<que.size()<<endl;
		}
	cout<<que.front().first;
	return 0;
}

