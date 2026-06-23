#include <iostream>
using namespace std;

struct Node{

    string name;

    Node *left,*right;

    Node(string n){

        name=n;

        left=right=NULL;
    }
};

Node* insert(Node* root,string name){

    if(root==NULL)
        return new Node(name);

    if(name<root->name)
        root->left=insert(root->left,name);

    else
        root->right=insert(root->right,name);

    return root;
}

bool search(Node* root,string name){

    if(root==NULL)
        return false;

    if(root->name==name)
        return true;

    if(name<root->name)
        return search(root->left,name);

    return search(root->right,name);
}

void inorder(Node* root){

    if(root==NULL)
        return;

    inorder(root->left);

    cout<<root->name<<endl;

    inorder(root->right);
}

int main(){

    Node* root=NULL;

    root=insert(root,"Alice");
    insert(root,"John");
    insert(root,"David");
    insert(root,"Emma");

    cout<<"Contacts:\n";

    inorder(root);

    cout<<"\nSearching John...\n";

    if(search(root,"John"))
        cout<<"Contact Found";
    else
        cout<<"Contact Not Found";
}
