#include<iostream>
using namespace std;



class Node
{

public:
    char ch;
    Node* prev ;

    Node(char data){
        this->ch = data;
    }

    ~Node(){}
};


class Stack
{

public:
    Node* tail;
    Node* temp;
    Node * newnode;
    int size =0;

    Stack(){
        this->tail = NULL;

    }

    void push(char letter){
        newnode = new Node(letter);
        if (tail == NULL)
        {
            tail = newnode;
            tail->prev = NULL;
        }else{
            newnode->prev = tail;
            tail = newnode;
        }
        // cout<<tail->data<<endl;
        size++;
    }

    void showStack(){
        temp = tail;
        while (temp->prev!=NULL)
        {
            cout<<""<<temp->ch<<"";
            temp = temp->prev;
        }
        cout<<""<<temp->ch<<"";
    }
    
    bool isEmpty(){
        return size ==0 ;
    }

    void pop(){
        if (size==0)
        {
            cout<<"STACK_UNDERFLOW";
            return;
        }

        tail = tail->prev;
        size--;
    }

    void peek(){
        cout<<tail->ch<<endl;
    }/

    ~Stack(){}

};



int main(){

    Stack st;
    char ch;
    string s;
    // s.push('m');
    // s.push('o');
    // s.push('o');
    // s.push('N');
    // while (true)
    // {
    //     cout<<"Enter the character ";
    //     cout<<endl;
    //     cin>>ch;
    //     if (ch=='0')
    //     {
    //         break;
    //     }else{
    //         s.push(ch);
    //     }
        
        
    // }
    cout<<"Enter the string ";
    getline(cin,s);
    for (int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
    }
 ////////////////////////////////////////////////////////////////////////////   

    
    // s.peek();
    st.showStack();
    // st.newnode
    // cout<<s.size;

    
    return 0;
}