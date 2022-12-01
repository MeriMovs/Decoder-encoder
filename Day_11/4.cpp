/* Փոխակերպել Infix արտահայտությունը Postfix֊ի։ 
A * B + C / D
A B * C D / +   */

#include <iostream>
#include <stack>

int priority(char s){
    if(s == '+' or s =='-')
        return 1;
 
    if(s == '*' or s =='/')
        return 2;
    return 0;
}
std::string convert(std::string infix)
{
    int i = 0;
    std::string postfix = "";
    std::stack <int>stack;

    while(infix[i]!='\0')
    {
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z')          
        {
            postfix += infix[i];
            i++;
        }
        else{
            while (!stack.empty() && priority(infix[i]) <= priority(stack.top())){
                postfix += stack.top();
                stack.pop();
            }
            stack.push(infix[i]);
            i++;
        }
    }
    while(!stack.empty()){
        postfix += stack.top();
        stack.pop();
    }
    return postfix;
}

int main()
{
    std::string infix = "A*B+C/D"; 
    std::cout << "Infix is : " << infix << std::endl; 
    std::cout << "Postfix is : " << convert(infix) << std::endl;
    
    return 0;
}