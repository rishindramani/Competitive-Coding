//
// Created by Rishi on 22-Oct-19.
//

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    int ele;


    for (int i = 0; i < n; i++) {
        cin >> ele;
        tq.push(ele);
    }
    int t;
    cin >> t;
    while (t--) {
        int ch, a;
        cin >> ch;
        /*Type 1: To push an element in the queue
        Type 2: Pop an element from the queue without printing it
        Type 3: Delete the middle element from the queue without printing it
        Type 4: Print the front element
        Type 5: Print the queue<int> tq;middle element
         */
        switch (ch) {
            case 1:
                cin >> a;
                tq.push(a);
                break;
            case 2:
                tq.pop();
                break;
            case 3:
                //queue<int> nnq = tq;
                for (int i = 0; i < tq.size(); i++) {
                    if (i == tq.size() / 2) {
                        tq.pop();
                        break;
                    }
                }


                break;

                /*    queue<int> nq=tq;

                    int j=nq.size()/2;
                    for(i=0;i<j;i++) {
                        nq.push()
                        int j = 0;


                        while (!nq.empty()) {
                            int arr[nq.size()];
                            arr[j] = nq.front;
                            nq.pop();
                            ++j;
                        }
                        */
            case 4:
                cout << tq.front() << endl;
                break;
            case 5:
                queue<int> nq = tq;
                for (int i = 0; i < nq.size(); i++) {
                    if (i == nq.size() / 2) {
                        cout << nq.front();
                        nq.pop();
                        break;
                    } else {
                        nq.pop();
                    }
                }
                break;
            default:
        }


    }
    return 0;
}


