//https://gist.github.com/SuryaPratapK/00a18c4f617326f9846c483b2b94f4b6
//https://www.youtube.com/watch?v=Ub-fJ-KoBQM&list=PLEJXowNB4kPzByLnnFYNSCoqtFz0VKLk5&index=21
#include<bits/stdc++.h>
using namespace std;
struct node{
    int parent;
    int rank;
};
struct Edge{
    int src;
    int dst;
    int wt;
};

vector<node> dsuf; //disjoint set union function
vector<Edge> mst; //storing minimum spanning tree
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
    else//both have same rank
    {
        dsuf[fromP].parent = toP;
        dsuf[toP].rank++;
    }
}

bool comparator(Edge a, Edge b)
{
    return a.wt < b.wt;
}

void kruskals(vector<Edge> &edge_list, int V, int E)
{
    sort(edge_list.begin(), edge_list.end(), comparator);

    int i=0, j = 0;
    while(i<V-1 && j<E)
    {
        int fromP = find(edge_list[j].src);
        int toP = find(edge_list[j].dst);

        if(fromP == toP)
        {
            ++j;
            continue;
        }

        union_op(fromP, toP);
        mst.push_back(edge_list[j]);
        i++;
    }
}

void printMST(vector<Edge> &mst)
{
    cout<<"MST FORMED : "<<endl;
    for(auto x : mst)
    {
        cout<<"SRC : "<<x.src<<" DST : "<<x.dst<<" wt : "<<x.wt<<endl;
    }
}
int main(){
    int E;
    int V;
    cin>>E>>V;

    dsuf.resize(V);
    
    for(int i = 0;i<V;i++)
    {
        dsuf[i].parent = -1;
        dsuf[i].rank = 0;
    }

    vector<Edge> edge_list; //Adjaceny list
    Edge temp;
    for(int i = 0;i<E;i++)
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
    return 0;
}