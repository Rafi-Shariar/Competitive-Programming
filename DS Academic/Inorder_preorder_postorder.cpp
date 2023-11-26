#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int id;
    node *left;
    node *right;
    node *parent;
};

class BinaryTree{
public:
    node* root;

    BinaryTree()
    {
        root = NULL;
    }

    node* CreateNewNode(int id)
    {
        node* newnode = new node;
        newnode->id = id;
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

    void build_binary_tree()
    {
            node* allnode[10]; // 10, because highest node value is 9.

        for(int i=0;i<10;i++)
            allnode[i] = CreateNewNode(i);

        allnode[5]->left = allnode[7];
        allnode[5]->right = allnode[9];

        allnode[7]->left = allnode[8];
        allnode[7]->parent = allnode[5];

        allnode[9]->right = allnode[2];
        allnode[9]->parent = allnode[5];

        allnode[8]->parent = allnode[7];
        allnode[2]->parent = allnode[9];

        root = allnode[5];


    }

    void preorder_travarsal(node * a){

        if (a==NULL)
        {
            return;
        }

        cout<<a->id<<" ";

       preorder_travarsal(a->left);
       preorder_travarsal(a->right);
        
    }


    void inorder_travarsal( node*a){

        if( a == NULL) return;

        inorder_travarsal( a->left);
        cout << a->id << " ";
        inorder_travarsal( a->right);
    }


    void postorder_travarsal( node*a){

        if( a == NULL) return;

        postorder_travarsal( a->left);
        postorder_travarsal( a->right);
        cout << a->id << " ";

    }

};
/*
this tree is from eaqubs note, page 13

       5
      / \
     7   9
    /     \
   8       2

*/


int main()
{
    BinaryTree bt;
    bt.build_binary_tree();
     
    cout << " preorder Traversal --> ";
    bt.preorder_travarsal(bt.root);
    cout << endl;

    cout << " Inorder Traversal --> ";
    bt.inorder_travarsal(bt.root);
    cout << endl;


    cout << " postorder Traversal --> ";
    bt.postorder_travarsal(bt.root);
    cout << endl;




    return 0;
}


/*

      

*/