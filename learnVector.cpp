#include <bits/stdc++.h>
using namespace std;

// int main() {
//     // vector<int> v;
//     // v.push_back(1);
//     // v.emplace_back(2);
//     // return 0;

//     vector<int> v(5, 1); // 5 elements with value 10
//     cout << "Size: " << v.size() << endl;
//     cout<<v[4]<<endl;

//     vector<int> v1={1,2,3,4,5};
//     vector<int> v2(v1); //v2 will be copy of v1
//     cout<<v2[1]<<endl;
//     v1.pop_back();
//     cout<<v.size()<<endl;


//     // vector<int>::iterator it=v1.begin();
//     // it++;
//     // cout<<*(it)<<endl;


//     for(vector<int>::iterator//auto
//      it=v1.begin();it!=v1.end();it++){
//         cout<<*(it)<<" ";
//      }
//      cout<<endl;

//         for(auto it=v1.begin();it!=v1.end();it++){
//         cout<<*(it)<<" ";
//     }
//     cout<<endl;

//     for (auto it : v1)
//     {
//         cout<<it<<" ";
//     }
//     cout<<endl;

//     v1.insert(v1.begin()+2, 100);
//     for (auto it : v1)
//     {
//         cout<<it<<" ";
//     }
//     cout<<endl;
//     v1.insert(v1.begin()+3, 2, 10);
//     for (auto it : v1)
//     {
//         cout<<it<<" ";
//     }
//     cout<<endl;

//     //copy

//     vector<int> copy(2,50);
//     v1.insert(v1.begin(), copy.begin(), copy.end());
//     for (auto it : v1)
//     {
//         cout<<it<<" ";
//     }   
//     cout<<endl;

    
// }



//explainSet




    // auto it=s.find(-1);
    // if(it==s.end()){
    //     cout<<"not present\n";
    // }else{
    //     cout<<"present\n";
    //     cout<<*(it)<<endl;
    // }

    // auto it2=s.lower_bound(-1);
    // auto it3=s.upper_bound(0);
    // cout<<*(it2)<<*(it3)<<endl;

    // auto it4=s.upper_bound(2);
    // if(it4==s.end()){
    //     cout<<"oops! sorry cant find something like that\n";
    // }
// }

int main () {
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);

    for (auto it : s)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
