#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> V){
    int start=0;
    int end=V.size()-1;
    while(start<=end)
    {
        swap(V[start],V[end]);
        start++;
        end--;
    }
    return V;
}

void print(vector<int> V){
    for(int i=0;i<V.size();i++){
        cout<<V[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> V;
    V.push_back(21);
    V.push_back(12);
    V.push_back(11);
    V.push_back(1);

    cout<<"Our array : ";
    print(V);
    
    vector<int> ans=reverse(V);
    cout<<"Reverse array is : ";
    print(ans);   
}