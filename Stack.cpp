#include "Node.cpp"
template <class T>
class Stack {
    
    public:
        Stack(){
        this->headNode = new Node<T>();
        this->headNode->setPrev(NULL);
        this->currentNode = this->headNode;
        this->size = 0;
    }
        void push(T v){

            Node<T>* a = new Node<T>();
            a->insert(v);
            
            if(this->size == 0){
                a->setPrev(this->headNode);
            }else{
                a->setPrev(this->currentNode);
            }
            this->currentNode = a;
            this->size++;
        }

        char pop(){
            if(this->size == 0){
                return false;
            }else{
                char b = this->currentNode->get();
                Node<T>* p = this->currentNode->getPrev();
                delete(this->currentNode);
                this->currentNode = p;
                this->size--;
                return b;
            }
            
        }

    private:
        Node<T>* headNode;
        Node<T>* currentNode;
        int size;

};