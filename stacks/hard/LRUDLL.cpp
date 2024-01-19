#include<bits/stdc++.h>
using namespace std;

class LRUCache {
public:
    //taking a dll so that we can access the prev node easily
    list<int> dll ; //stores the key
    map<int, pair<list<int> :: iterator, int>> mp ;//store the {key , {address, value}}
    int n ; // size of list
    LRUCache(int capacity) {
        n = capacity ;
    }
    // remove the element from where it is and make it to front of dll means it is most recently used
    void makeRecentlyUsed(int key){

        dll.erase(mp[key].first) ;//remove 

        dll.push_front(key) ;// push in front

        mp[key].first = dll.begin() ;//update the address in map also

    }
    int get(int key) {
        //if element found then change the link
        //change the address in map also
        if(mp.find(key) != mp.end()){
            makeRecentlyUsed(key);
            return mp[key].second ;
        }else{
            return -1 ;
        }

    }
    
    void put(int key, int value) {
        if(mp.find(key) != mp.end()){
            mp[key].second = value ; 
            makeRecentlyUsed(key) ;
        }else{
            dll.push_front(key) ;
            mp[key] = {dll.begin(), value} ;
            n-- ;
        }
        
        if(n < 0){ // if extra element is pushed in list then remove from least recently used
        int keyToBeDeleted = dll.back() ;
        mp.erase(keyToBeDeleted) ;
        dll.pop_back() ;

        n++ ;
        }
    }
};

int main(){
    LRUCache l = LRUCache(2);

    l.put(1, 1);
    l.put(2, 2);
    cout << l.get(1) << endl; // Output: 1
    l.put(3, 3); // evicts key 2
    cout << l.get(2) << endl; // Output: -1 (not found)
    l.put(4, 4); // evicts key 1
    cout << l.get(1) << endl; // Output: -1 (not found)
    cout << l.get(3) << endl; // Output: 3
    cout << l.get(4) << endl; // Output: 4

    return 0;
}