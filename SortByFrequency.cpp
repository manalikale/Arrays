/*
 
 Sort elements by ferquency:
 
 */
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;


class Node{
    
public:
    
    int data;
    int freq;
    Node *left;
    Node *right;
    Node(int data);
    ~Node();
};

Node::Node(int data)
{
    freq = 1;
    this->data = data;
    left = right = NULL;
}

class BST{
public:
    BST();
    ~BST();
    
    void insert(int data);
    static bool compare(Node *a, Node *b);
    std::vector<int>sortByFreq();
   // Node* newnode(int data);
    
private:
    Node *root;
    std::vector<Node*> nodeHolder;
    Node *insertHelper(Node *node, int data);
    
    
};


BST::BST()
{
    root=NULL;
}

BST::~BST()
{
    
}

Node* BST::insertHelper(struct Node *node,int data)
{
    if(node==NULL)
    {
        Node *temp=new Node(data);
        nodeHolder.push_back(temp);
        return temp;
    }
    if(node->data == data)
    {
        node->freq++;
    }
    else if(data<node->data)
    {
        node->left=insertHelper(node->left,data);
    }
    else if(data>node->data)
    {
        node->right=insertHelper(node->right,data);
    }
    return node;
}

void BST::insert(int data)
{
    if(root==NULL)
    {
        root=insertHelper(root, data);
    }
    else{
        insertHelper(root,data);
    }
}

bool BST::compare(Node *a, Node *b)
{
    return a->freq > b->freq;
}

std::vector<int> BST::sortByFreq()
{
    std::sort(nodeHolder.begin(),nodeHolder.end(),compare);
    
    std::vector<int>result;
    
    for(unsigned int i=0; i<nodeHolder.size();i++)
    {
        for(int j=0;j<nodeHolder[i]->freq;j++)
        {
            result.push_back(nodeHolder[i]->data);
        }
    }
    return result;
}

int main()
{
    std::vector<int>vect={1,8,2,3,3,4,5,5,4};
    
    BST bsttree;
    for(unsigned int i=0;i<vect.size();i++)
    {
        bsttree.insert(vect[i]);
    }
    
    std::vector<int>sortedVector=bsttree.sortByFreq();
    for(unsigned int i=0;i<sortedVector.size();i++)
    {
        cout << sortedVector[i]<< " ";
    }
    cout<<endl;
    return 0;
}
