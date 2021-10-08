class MyCircularQueue {
private:
    vector<int>v;int maxCapacity=0;
public:
    MyCircularQueue(int k) {
      
        
        maxCapacity=k;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        v.push_back(value);
        return true;
    }
    
    bool deQueue() {
        if(!v.empty()){
             v.erase(v.begin()+0);
            return true;
        }
        else return false;
       
    }
    
    int Front() {
        if(!v.empty()){
            return v[0];
        }
        else{
            return -1;
        }
        
    }
    
    int Rear() {
        if(!v.empty()){
            return v[v.size()-1];
        }
        else{
            return -1;
        }
    }
    
    bool isEmpty() {
        return v.size()<=0;
    }
    
    bool isFull() {
        return v.size()>=maxCapacity;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */