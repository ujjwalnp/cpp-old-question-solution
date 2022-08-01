// by ujjwal 

// Queston : Define a class called stack and implement generic methods to push and pop the elements from the stack.

#include<iostream>
#include<stack>
using namespace std;

class _stack {

    public : 
        template<typename generic>
        void stack_op (generic _element) {
            stack<generic> _method;
            _method.push(_element);       
            cout<<"Size of Stack = "<<_method.size()<<endl;
            if (!_method.empty()) {
                cout<<"The element in top of stack is "<<endl<<_method.top()<<endl;
            }

            _method.pop();
        }  
};
int main () {
    string element = " This is test element to test stack ";

    _stack st;
    st.stack_op ( element );  

    return 0;
}