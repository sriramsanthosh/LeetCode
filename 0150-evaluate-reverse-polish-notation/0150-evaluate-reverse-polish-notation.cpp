class Solution {
public:
    
    #define ll long long
    
//     int evalRPN(vector<string>& tokens) {
//         stack<string> s;
//         int operation = 0;
//         for(int i = 0; i<tokens.size(); i++){
//             if(tokens[i] == "+"){ 
//                 int temp = stoi(s.top());
//                 s.pop();
//                 int temp2 = stoi(s.top());
//                 temp2+=temp;
//                 s.pop();
//                 s.push(to_string(temp2));
//                 continue;
//             }
//             if(tokens[i] == "-"){
//                 int temp = stoi(s.top());
//                 s.pop();
//                 int temp2 = stoi(s.top());
//                 temp2-=temp;
//                 s.pop();
//                 s.push(to_string(temp2));
//                 continue;
//             }
//             if(tokens[i] == "*"){
//                 int temp = stoi(s.top());
//                 s.pop();
//                 int temp2 = stoi(s.top());
//                 temp2*=temp;
//                 s.pop();
//                 s.push(to_string(temp2));
//                 continue;
//             }
//             if(tokens[i] == "/"){
//                 int temp = stoi(s.top());
//                 s.pop();
//                 int temp2 = stoi(s.top());
//                 temp2/=temp;
//                 s.pop();
//                 s.push(to_string(temp2));
//                 continue;
//             }
//             s.push(tokens[i]);
//         }
//         return stoi(s.top());
//     }
    
        int evalRPN(vector<string>& tokens) {
        stack<string> s;
        ll operation = 0;
        for(ll i = 0; i<tokens.size(); i++){
            if(tokens[i] == "+"){ 
                ll temp = stoll(s.top());
                s.pop();
                ll temp2 = stoll(s.top());
                temp2+=temp;
                s.pop();
                s.push(to_string(temp2));
                continue;
            }
            if(tokens[i] == "-"){
                ll temp = stoll(s.top());
                s.pop();
                ll temp2 = stoll(s.top());
                temp2-=temp;
                s.pop();
                s.push(to_string(temp2));
                continue;
            }
            if(tokens[i] == "*"){
                ll temp = stoll(s.top());
                s.pop();
                ll temp2 = stoll(s.top());
                temp2*=temp;
                s.pop();
                s.push(to_string(temp2));
                continue;
            }
            if(tokens[i] == "/"){
                ll temp = stoll(s.top());
                s.pop();
                ll temp2 = stoll(s.top());
                temp2/=temp;
                s.pop();
                s.push(to_string(temp2));
                continue;
            }
            s.push(tokens[i]);
        }
        return stoll(s.top());
    }
};