bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char>c;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        //if opening bracket s.push

        if(ch=='(' || ch=='{' || ch=='['){
            c.push(ch);
        }
        else
        {
            if (!c.empty()) {
                char top=c.top();
              if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch==']' && top=='[')){
                  c.pop();
              }
              else{
                  return false;
              }
            } 
            else {
              return false;
            }
        }
    }
        if(c.empty()){
            return true;
        }
        else{
            return false;
        }
    }
//time complexity is o(n)
//space complexity is also o(n)