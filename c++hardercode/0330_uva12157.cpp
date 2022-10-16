#include <bits/stdc++.h>
using namespace std;

/*

-------------------
analysis
-------------------

For Mile:

time :  1 2 .. 29 30 31 ... 59 60 61 .. 89 90 
cost : |--10-----|--20--------|--30-------|--31 ...

==>

algo : cost = (time / 30 + 1) * 10


For Juice:

time :  1 2 .. 59 60 61 ... 119 120 121 .. 179 180 
cost : |--15-----|--30---------|--45----------|--60 ...

==>

algo : cost = (time / 60 + 1) * 15


*/



int main()
{

    freopen("0330.txt", "r", stdin);

    int tc_count;

    scanf("%d", &tc_count);

    for(int tc = 1; tc <= tc_count; tc++) {
        
        // step 1) prepare data 

        int call_count;
        scanf("%d", &call_count);

        vector<int> calls;

        while(call_count--) {
            int call;
            scanf("%d", &call);
            calls.push_back(call);
        }

        //print LOG -------------------
        // for(auto i=begin(calls); i != end(calls); i++)
        // printf("%d\n", *i);
        // ----------------------------
        

        string package = "Mile"; //assign some init fake value
        int cost = 40;

        // step 2) your algo goes here, calculate the package & cost
        // ... ... 

        int mile_cost = 0, juice_cost = 0;
        for(auto i = begin(calls); i != end(calls); i++) {

            mile_cost += (*i / 30 + 1) * 10;
            juice_cost += (*i / 60 + 1) * 15;

            if(mile_cost < juice_cost) {
                package = "Mile";
                cost = mile_cost;
            }
            else if(mile_cost > juice_cost) {
                package = "Juice";
                cost = juice_cost;
            }
            else {
                package = "Mile Juice";
                cost = juice_cost;
            }
        }   


        // Print result 
        cout << "Case " << tc << ": " << package << " " << cost << endl;

    }
    
   return 0;
}