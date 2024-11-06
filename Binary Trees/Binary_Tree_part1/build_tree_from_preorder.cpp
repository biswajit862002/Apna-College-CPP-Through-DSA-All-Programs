#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// implement the node of tree
class Node
{
    public:
        Node* left;
        int data;
        Node* right;

        Node(int data){
            this->data = data;
            left = right = NULL;
        }
};

// this method is implement to build the tree
static int idx = -1;
Node* buildTree(vector<int> nodes)
{
    idx++;
    if(nodes[idx] == -1)
    {
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes); // left subtre
    currNode->right = buildTree(nodes); // right subtree

    return currNode;
}

// this method is implement to preorder traversal
void preorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// this method is implement to inorder traversal
void inorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// this method is implement to postorder traversal
void postorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

// this method is implement to levelorder traversal
void levelorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* currNode = q.front();
        q.pop();

        if(currNode == NULL)
        {
            cout<<endl;
            if(q.empty())
            {
                break;
            }
            q.push(NULL);
        }
        else
        {
            cout<<currNode->data<<" ";

            if(currNode->left != NULL)
            {
                q.push(currNode->left);
            }
            if(currNode->right != NULL)
            {
                q.push(currNode->right);
            }
        }
    }

}

// this method is implement to height of the tree
int height_of_tree(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int height_of_left_sub_tree = height_of_tree(root->left);
    int height_of_right_sub_tree = height_of_tree(root->right);

    int current_height = max(height_of_left_sub_tree, height_of_right_sub_tree) + 1;

    return current_height;
}

// this method is implement to count of nodes in tree
int count_of_nodes(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int count_of_nodes_in_left_sub_tree = count_of_nodes(root->left);
    int count_of_nodes_in_right_sub_tree = count_of_nodes(root->right);

    int total_nodes = count_of_nodes_in_left_sub_tree + count_of_nodes_in_right_sub_tree + 1;

    return total_nodes;
}

// this method is implement to sum of nodes in tree
int sum_of_nodes(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int sum_of_nodes_in_left_sub_tree = sum_of_nodes(root->left);
    int sum_of_nodes_in_right_sub_tree = sum_of_nodes(root->right);

    int sum_nodes = sum_of_nodes_in_left_sub_tree + sum_of_nodes_in_right_sub_tree + root->data;

    return sum_nodes;
}


int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

    Node* root = buildTree(nodes);
    cout<<"Root = " <<root->data <<endl;

    cout<<"-----------------------------------------------"<<endl;

    preorder(root);
    cout<<endl;

    cout<<"-----------------------------------------------"<<endl;

    inorder(root);
    cout<<endl;

    cout<<"-----------------------------------------------"<<endl;

    postorder(root);
    cout<<endl;

    cout<<"-----------------------------------------------"<<endl;

    levelorder(root);
    cout<<endl;

    cout<<"-----------------------------------------------"<<endl;

    cout<<"Height of Tree is = "<<height_of_tree(root)<<endl;

    cout<<"-----------------------------------------------"<<endl;

    cout<<"Count of nodes in tree = "<<count_of_nodes(root)<<endl;

    cout<<"-----------------------------------------------"<<endl;

    cout<<"Sum of nodes in tree = "<<sum_of_nodes(root)<<endl;

    return 0;
}