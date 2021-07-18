#include "queue.h"
#include <string>
bool checkbraces(stack *s) {
    queue q;
    while (!(s->empty())) {
        char ch1, ch2;
        if (s->pop(&ch1)) {
            if (ch1 == ')') {
                q.push(&ch1);
                continue;
            }
            if (ch1 == ']') {
                q.push(&ch1);
                continue;
            }
            if (ch1 == '}') {
                q.push(&ch1);
                continue;
            }
            if (ch1 == '{') {
                if (q.pop(&ch2)) {
                    if (ch2 == '}')
                        continue;
                    else {
                        q.push(&ch2);
                        q.push(&ch1);
                        continue;
                    }
                } else
                    q.push(&ch1);
            }
            if (ch1 == '(') {
                if (q.pop(&ch2)) {
                    if (ch2 == ')')
                        continue;
                    else {
                        q.push(&ch2);
                        q.push(&ch1);
                        continue;
                    }
                } else
                    q.push(&ch1);
            }
            if (ch1 == '[') {
                if (q.pop(&ch2)) {
                    if (ch2 == ']')
                        continue;
                    else {
                        q.push(&ch2);
                        q.push(&ch1);
                        continue;
                    }
                } else
                    q.push(&ch1);
            }
        }
    }
    if (q.empty())
        return true;
    return false;
}
int main() {
    string s;
    stack s1;
    cout << "Enter strring of braces" << endl;
    getline(cin, s);

    for (char &i : s) {
        if (i == '{' || i == '}' || i == '(' || i == ')' || i == '[' || i == ']')
            s1.push(&i);
    }
    if (checkbraces(&s1))
        cout << "correct" << endl;
    else
        cout << "Not" << endl;


}