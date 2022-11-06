#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>

using namespace std;

class Node {
public:
    string name;
    list<string> nbrs;          //List Of Neighbours
    Node(string name)
    {
        this->name = name;
    }
};

class Graph{
    // All Nodes contained 
    // Hashmap (string, node*)          // will store the relationship between city and node object
    unordered_map<string, Node*> m;

public:
    Graph(vector<string> cities)
    {
        for(auto city : cities){
            m[city] = new Node(city);
        }
    }
    void addEdge(string x, string y, bool undir = false){
        m[x] -> nbrs.push_back(y);
        if(undir){
            m[y] -> nbrs.push_back(x);
        } 
    }
    void printAdjList()
    {
        Node *node;
        for(auto cityPair : m){
            auto city = cityPair.first;
            node = cityPair.second;
            cout << city << " --> ";
            for(auto nbr : node -> nbrs){
                cout << nbr << " , ";
            }
            cout<< endl;
        }

    }
};

int main()
{
    vector<string> cities = {"Delhi", "London", "Paris", "New York"};
    Graph g(cities);
    g.addEdge("Delhi", "London");
    g.addEdge("New York", "London");
    g.addEdge("Delhi", "Paris");
    g.addEdge("Paris", "New York");
    g.printAdjList(); 
}