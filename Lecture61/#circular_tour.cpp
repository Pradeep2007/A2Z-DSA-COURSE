// struct petrolPump
// {
//     int petrol;
//     int distance;
// };

class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int>s;
        // add code here.
        while(!q.empty()){
            int element=q.front();
            q.pop();
            s.push(element);
        }
        while(!s.empty()){
            int element=s.top();
            s.pop();
            q.push(element);
        }
        return q;
    }
};
