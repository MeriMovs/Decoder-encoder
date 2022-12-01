#include <iostream>
#include <stack>

bool foo_str(std::string s){
    for (int e = 0; e < s.size()-1; e++){

        switch (s[e]){
            case '(':
                if(s[e+1] != ')'){
                std::cout << "  false" << std::endl;
                return false;}
                break;
            case '{':
                if(s[e+1] != '}'){
                std::cout << "  false" << std::endl;
                return false;}
                break;
            case '[':
                if(s[e+1] != ']'){
                std::cout << "  false" << std::endl;
                return false;}
                break;
        }

    }
    std::cout << "  True" << std::endl;
    return true;
}


bool foo_stack(std::string s){
    std::stack<char> stack;
    for (int e = 0; e < s.size(); e++){
        stack.push(s[e]);
    }

    for (int e = 0; e < stack.size(); ){
        char temp = stack.top();
        stack.pop();


        switch (temp){
            case ')':
                if(stack.top() != '('){
                
                std::cout << "  false  " << std::endl;
                return false;}
                break;
            case '}':
                if(stack.top() != '{'){
                std::cout << "  false  " << std::endl;
                return false;}
                break;
            case ']':
                if(stack.top() != '['){
                std::cout << "  false  " << std::endl;
                return false;}
                break;
        }
        stack.pop();
    }
    std::cout << "  True" << std::endl;

    return true;

}

int main(){
    std::string s1 = "()[]{}";
    std::string s2 = "(}";

    std::cout << s1;
    foo_str(s1);
    std::cout << s2;
    foo_str(s2);

    std::cout << s1;
    foo_stack(s1);
    std::cout << s2;
    foo_stack(s2);
    
    return 0;
}