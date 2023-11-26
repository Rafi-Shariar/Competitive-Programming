#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int id;
    node * left;
    node * right;
    node * parent;
};

class BinaryTree{
    public:

    node * root;
    node * allnode[6];

    BinaryTree(){ root = NULL; }

    node * CreateNewNode(int value){

        node * a = new node;
        a->id = value;
        a->left = NULL;
        a->right = NULL;
        a->parent = NULL;

        return a;
    }


    void build_binary_tree(){

        for(int i=0; i<6; i++) allnode[i] = CreateNewNode(i);

        allnode[0]->left = allnode[1];
        allnode[0]->right = allnode[2];

        allnode[1]->left = allnode[5];
        allnode[1]->parent = allnode[0];

        allnode[2]->left = allnode[3];
        allnode[2]->right = allnode[4];
        allnode[2]->parent = allnode[0];

        allnode[5]->parent = allnode[1];

        allnode[3]->parent = allnode[2];
        allnode[4]->parent = allnode[2];

        root = allnode[0];


    }


    void print_tree(){

        for (int i = 0; i < 6; i++)
        {
            int p = -1, l = -1, r = -1;

            if( allnode[i]->parent != NULL) p = allnode[i]->parent->id;

            if( allnode[i]->left != NULL ) l = allnode[i]->left->id;

            if( allnode[i]->right != NULL ) r = allnode[i]->right->id;


            cout << "node "<<i<<" : Parent = "<<p<<" , left child = "<<l<<" , right child = "<<r<<endl;
        }
        
    }

};

int main(){

    BinaryTree bt;

    bt.build_binary_tree();
    bt.print_tree();

    
}

/*
     0
    /  \ 
   1    2
   /   /\
  5   3  4

*/