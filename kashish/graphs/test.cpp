#include<bits/stdc++.h>
using namespace std;
struct node
{
    int parent;
    int rank;
};
struct Edge
{
    int src;
    int dst;
    int wt;
};
vector<node> dsuf;
vector<Edge> mst;

bool comparator(Edge a, Edge b)
{
    return a.wt < b.wt;
}

int find(int v)
{
    if(dsuf[v].parent == -1)
        return v;
    return dsuf[v].parent = find(dsuf[v].parent);
}

void union_op(int fromP, int toP)
{
    if(dsuf[fromP].rank < dsuf[toP].rank)
    {
        dsuf[fromP].parent = toP;
    }
    else if(dsuf[fromP].rank > dsuf[toP].rank)
    {
        dsuf[toP].parent = fromP;
    }
    else// both have same rank
    {
        dsuf[fromP].parent = toP;
        dsuf[toP].rank++;
    }
}
void kruskals(vector<Edge> &edge_list, int V, int E)
{
    sort(edge_list.begin(), edge_list.end(), comparator);
    int fromP, toP;
    int i = 0, j = 0;
    while(i<V-1 && j<E)
    {
        fromP = find(edge_list[j].src);
        toP = find(edge_list[j].src);
        
        if(fromP == toP)
        {
            j++;
            continue;
        }

        union_op(fromP, toP);
        mst.push_back(edge_list[j]);
        i++;
    }
}
void printMST(vector<Edge> &mst)
{
    cout<<"MST Edge list : "<<endl;
    for(auto x : mst)
        cout<<"SRC : "<<x.src<<" DST : "<<x.dst<<" wt : "<<x.wt;
}
int main()
{
    int E,V;
    cin>>V>>E;

    dsuf.resize(V);

    for(int i = 0;i<V;i++)
    {
        dsuf[i].parent = -1;
        dsuf[i].rank = 0;
    }

    vector<Edge> edge_list;
    Edge temp;
    for(int i = 0; i<E; i++)
    {
        int from, to, wt;
        cin>>from>>to>>wt;
        temp.src = from;
        temp.dst = to;
        temp.wt = wt;
        edge_list.push_back(temp); 
    }

    kruskals(edge_list, V, E);
    printMST(mst);

}