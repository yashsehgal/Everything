//YouTube Amritsari King. Donot have Facebook account

#include<iostream>
using namespace std;
#define CHAR_SIZE 256

class Trie{
	bool isLeaf;
	Trie* character[CHAR_SIZE];
	public:
	Trie(){
		this->isLeaf=false;
		for(int i=-0;i<256;i++){
			this->character[i]=NULL;
		}
		
	}
		void insert(string);
		bool deletion(Trie*& ,string);
		bool search(string);
		bool haveChildren(Trie* );
	
	
};
	void Trie :: insert(string key){
		Trie* curr=this;
		for(int i=0;i<key.length();i++){
			if(curr->character[key[i]]==NULL)
				curr->character[key[i]]=new Trie();
				
				curr=curr->character[key[i]];
			
		}
		
		
		curr->isLeaf=true;
	}
	
	bool Trie :: search(string key){
		Trie* curr=this;
		
		if(curr==NULL)
		return false;
		
		for(int i=0;i<key.length();i++){
			curr=curr->character[key[i]];
			
			if(curr==NULL)
			return false;
		}
		
		return curr->isLeaf;
		
	}
	
	
	bool Trie :: haveChildren(Trie* curr){
		for(int i=0;i<CHAR_SIZE;i++){
			if(curr->character[i])
				return true;
		}
		
		return false;
	}
	
	
	bool Trie :: deletion(Trie*& curr ,string key){
			
		if(curr==NULL)
		   return false;
		   
		if(key.length()){
			if(curr!=NULL&&
			  curr->character[key[0]]!=NULL&&
			  deletion(curr->character[key[0]], key.substr(1))&&
			  curr->isLeaf==false){
			  		if (!haveChildren(curr))
			{
				delete curr;
				curr = NULL;
				return true;
			}
		
			else {
				return false;
			}
			
		}
	}
		
		if(key.length()==0&&curr->isLeaf){
		  		if (!haveChildren(curr))
			    {
				delete curr;
				curr = NULL;
				return true;
			    }  	
				
				else{
					curr->isLeaf=false;
					return false;
				}	
		}
		   
		return false;
	}
	
	



int main(){
	Trie* head=new Trie();
	head->insert("hello");
	cout << head->search("hello") << " "; 
	
	head->insert("helloworld");
	cout << head->search("helloworld") << " ";
	
	cout << head->search("helll") << " ";
	
	head->insert("hell");
	cout << head->search("hell") << " ";  
	
	head->insert("h");
    cout << head->search("h");
	
	cout << endl;
	
	head->deletion(head, "hello");
    cout << head->search("hello") << " ";
    
    
    cout << head->search("helloworld") << " "; 
	cout << head->search("hell");
	
	
	cout<<endl;
	
	
	head->deletion(head, "h");
	cout << head->search("h") << " ";  		
	cout << head->search("hell") << " ";   	
	
	
	cout<<endl;
	
	head->deletion(head, "helloworld");
	cout << head->search("helloworld") << " "; 
	std::cout << head->search("hell") << " "; 
	
	head->deletion(head, "hell");
	cout << head->search("hell");
	
	
	cout<<endl;
	
	if (head == NULL)
		cout << "Trie empty!!\n";  			

	cout << head->search("hell");
	
}
