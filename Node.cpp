template <class T>
class Node {
    private:
        T object;
        Node *nextNode;
        Node *prevNode;
        
    public:
        void insert(T value){
            this->object = value;
        }

        T get(){
            return this->object;
        }

        Node* getNext(){
            return this->nextNode; 
        }

        Node* getPrev(){
            return this->prevNode;
        }

        void setNext(Node* n){
            this->nextNode = n;
        }

        void setPrev(Node* p){
            this->prevNode = p;
        }
};