#include <bits/stdc++.h>
using namespace std;

void Topological_Sort(vector  < vector <int> > &V ,vector <bool> &Visited,vector <int> &arr,int curr)
{


            Visited[curr]=1;
            for(int i=0;i<V[curr].size();i++)
            {
                if(!Visited[V[curr][i]])
                Topological_Sort(V,Visited,arr,V[curr][i]);
            }


        arr.insert(arr.begin(), curr);
}


main()
{


    int n,m,x,y;
    cin >> n >> m ;

    vector < vector <int> > V(n+1);
  //  vector <bool> has_in(n+1);
    vector <bool> Visited(n+1);
   // fill(has_in.begin(),has_in.end(),0);
    fill(Visited.begin(),Visited.end(),0);

    for(int i=0;i<m;i++ )
    {
        cin >> x >> y ;
        V[x].push_back(y);
       // has_in[y]=1;
    }
    vector <int > arr ;
    for(int i=1;i<=n;i++)
    {
       // if(!has_in[i])
       if(!Visited[i])
            Topological_Sort(V,Visited,arr,i);
    }
    for(int i=0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }



}
