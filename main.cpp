#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

class BSTnode{
	private: string value;
		BSTnode* left;
		BSTnode* right;

	public: BSTnode(string value){
		this->value=value;
		left=NULL;
		right=NULL;
		}
	bool add (string value){

		if(value==this->value)
			return false;
		else if(value<this->value){
			if(left==NULL){
				left=new BSTnode(value);
				return true;
			}
			else
				 left->add(value);
		}
		else if(value>this->value){
			if(right==NULL){
				right=new BSTnode(value);
				return true;
			}
			else
			return right->add(value);
		}
		return false;
	}

	bool search(string value){
		if(value==this->value)
			return true;
		else if(value<this->value){
			if(left==NULL)
				return false;
			else
			  return	left->search(value);
			}
			if (value>this->value){
				if(right==NULL)
					return false;
				else
				return	right->search(value);
				}
			return false;
		}
};
class BinarySearchTree{
		private: BSTnode* root;
		public: BinarySearchTree(){
		root=NULL;
		}
	bool add(string value){
		if(root==NULL){
			root=new BSTnode(value);
			return true;
			}
		else
			return root->add(value);
		}
	bool search(string value){
         if (root== NULL){
         cout<<"Search tree is empty."<<endl;
         return false;}
         else
         return root->search(value);
         }
         void mainMenu(){

               cout<<"Select a menu operation to perfome from 1 to 5"<<endl;
                cout<<endl;

           cout<<"========================================================"<<endl;

         cout<<"1. Insert"<<"  2. Delete"<<"    4. Print";

         cout<<"  0. Exit"<<endl;

         cout<<"========================================================"<<endl;


           }
      void display(){
             cout<<"Select a menu operation to perfome 1 to 3"<<endl;
             cout<<endl;
           cout<<"1 Log In"<<endl;
             cout<<endl;
           cout<<"2 Change Password"<<endl;
             cout<<endl;
           cout<<"3 Quit\n\n";


           }
    };
