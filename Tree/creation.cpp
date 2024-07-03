#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;



// Creation of the Binary tree-------

class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int d){
        this->data=d;
        this->left =NULL;
        this->right =NULL;
    }
    
    
};

node* buildtree(node* root){
  int x;
    cout<<"Enter the data"<<endl;
    cin>>x;
    root =new node(x);
    
    if(x == -1){
        return NULL;
    }
    cout<<"Enter data for inserting in left :"<<x<<endl;
    root->left =buildtree(root->left);
    cout<<"Enter data for inserting in right: "<<x<<endl;
    root->right=buildtree(root->right);
    return root;
}

//       ________________________LEVEL ORDER TRAVERSAL (BFS)______________________

void levelOrdertraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        node* temp =q.front();
      
        q.pop();
         if(temp == NULL){
             cout<<endl;
             if(!q.empty()){
                 q.push(NULL);             }
         }else{
               cout<<temp->data<<" ";
             if(temp->left){
                 q.push(temp->left);
             }
               if(temp->right){
                 q.push(temp->right);
             }
         }
         
    }
}

// ______________________REVERSE LEVEL ORDER TRAVERSAL______________________________

void reverselevelOrderTraversal(node* root){
    queue<node*> q;
    stack<node*> s;
    q.push(root);
    while(!q.empty()){
       root =q.front();
       q.pop();
       s.push(root);
       if(root->right){
           s.push(root->right);
       }
       if(root->left){
           s.push(root->left);
       }
        
    }
    while(!s.empty()){
        root=s.top();
        cout<<root->data<<" ";
        s.pop();
    }
   
}

// ----------------INORDER TRAVERSAL(slightly change in preorder and postorder) ______________________

void inorder(node* root){
    if(root == NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//   _______________MAIN START______________________

int main()
{
   node* root =NULL;
   root =buildtree(root);
//   levelOrdertraversal(root);
//  reverselevelOrderTraversal(root);
 cout<<"Inorder Traversal"<<endl;
 inorder(root);
    return 0;
}

// DSA TRee question implemented
// SumTree , isBalanced, diameter,height,treeidentical