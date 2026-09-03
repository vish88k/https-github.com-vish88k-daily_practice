class LRUCache {
public:
    class Node{
     public:
         int key,value;
         Node*next;
         Node*prev;
         Node(int k,int val){
            key=k;
            value=val;
            prev=next=NULL;
         }
    };

      Node*head=new Node(-1,-1);
      Node*tail=new Node(-1,-1);
      unordered_map<int,Node*>mp;
       int limits;

     void addnode( Node*newnode){
        Node*oldnext=head->next;  //save oldnext

        head->next=newnode;
        oldnext->prev=newnode;

        newnode->next=oldnext;
        newnode->prev=head;

    
     }
     void deletenode(Node*oldnode){

          Node*oldprev=oldnode->prev;   //save oldprev
          Node*oldnext=oldnode->next;    //save oldnext 

           oldprev->next=oldnext;
           oldnext->prev=oldprev;
          
     }

    LRUCache(int capacity) {
       limits=capacity;
         mp.clear();
        head->next=tail;
        tail->prev=head;
        
    }
    
    int get(int key) {
       if(mp.find(key)==mp.end()){
        return -1;
       }
       
        Node*ansnode=mp[key];
        int ans=ansnode->value;

        mp.erase(key);
        deletenode(ansnode);
        addnode(ansnode);
        mp[key]=ansnode;
        return ans;
    }
    
      
    
    void put(int key, int value) {
      
        if(mp.find(key)!=mp.end()){   // exist
          Node*oldnode=mp[key];
          deletenode(oldnode);
          mp.erase(key);
        }
        if(mp.size()==limits){   // if capacity reach
           mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
         Node*newnode=new Node(key,value);  
         addnode(newnode);//insert at beggining
         mp[key]=newnode;  //savre address of that node

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */