#include<iostream>
#include<algorithm>             //used library to use max function whcih return max of 2 numbers
using namespace std;


struct node{
  int data;
  node*left;                    // Structure of Node
  node*right;                
  node(int d){
      data=d;
      left=right=NULL;
  }
};

		void print(node*r){
			if(r!=NULL){
				print(r->left);
				cout<<r->data<<endl;                  // function to print binary tree
				print(r->right);
			}
		}
	
		int calculate(node*r){
			if(r==NULL){                                   // function to calculate height of binary tree
				return 0;
			}
			int heightL=calculate(r->left);                 //recursive call of function for left side of root
			int heightR=calculate(r->right);               // recursive call of function for left side of root
			return max(heightL,heightR)+1;   /*function returns max of Left side or right side and +1 
                                            which is root of tree Max function is used by library algorithm
                                            which is used in header which gives maximum of 2 numbers.*/
		}
int main(){
	  node*root=new node(3);
    root->left=new node(9);
    root->right=new node(20);
    /*root->left->left=new node(4);
    root->left->right=new node(5);*/
    root->right->right=new node(7);
root->right->left=new node(15);
print(root);
cout<<endl;
cout<<calculate(root);

return 0;
}