#include<iostream>
using namespace std;
int main()
{
    			int v;
    			cout<<"Enter the number of vertices: ";
    			cin>>v;
    			int graph[v][v],parent[v],min,x=0,y=0,edges=1,total_weight=0;
    			cout<<"Enter the edge weights: "<<endl;
    			for(int i=0;i<v;i++)
    			{
        			parent[i]=0;
        			for(int j=0;j<v;j++)
        			{
            				cin>>graph[i][j];
            				if(graph[i][j]==0)     graph[i][j]=999;
        			}
    			}
    			cout<<endl<<"edge\tweight"<<endl;
    			while(edges<v)
    			{
        			min=999;
        			for(int i=0;i<v;i++)
        			{
            				for(int j=0;j<v;j++)
            				{
                				if(graph[i][j]<min)
                				{
                    					min=graph[i][j];
                    					x=i;
                    					y=j;
                				}
            				}
        			}
        			while(parent[x]!=0)
        			{
            				x=parent[x];
        			}
        				while(parent[y]!=0)
        			{
            				y=parent[y];
        			}
        			if(x!=y)
        			{
            				edges++;
            				cout<<x<<"->"<<y<<"\t "<<min<<endl;
            				total_weight+=min;
            				parent[y]=x;
        			}
        			graph[x][y]=graph[y][x]=999;
    			}
    			cout<<endl<<"The weight of the minimum spanning tree is: "<<total_weight<<endl;
    			return 0;
}
