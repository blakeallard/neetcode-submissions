class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string& token : tokens)
        {
            if (token == "+" || token == "-" || token == "*"|| token == "/")
            {
                int a = st.top();
                st.pop();

                int b = st.top();
                st.pop();

                int result;

                switch(token[0])
                {
                    case '+':
                        result = a + b;
                        break;

                    case '-':
                        result = b - a;
                        break;

                    case '*':
                        result = a * b;
                        break;

                    case '/':
                        result = b / a;
                        break;
                } // end switch
                st.push(result);
            } // end if
            else 
            {
                st.push(stoi(token));
            }
        } // end for
        return st.top();
    }
};
