#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>a={11,13,15,14};
    
    vector<int>v={1,2,9,4,5};
    // array<int> arr={1,2,3,,4,5};



    /* reverse*/




    // reverse(v.begin(),v.end());
    // for(int i:v){
    //     cout<<i<<" "<<endl;
    // }



/*rotate*/


    // cout<<"rotate"<<endl;
    // rotate(v.begin(),v.begin()+2,v.end());
    // for(int i:v){
    //     cout<<i<<" ";
    // }



    /*binary search*/



//    cout<< binary_search(v.begin(),v.end(),4)<<endl;
//    if(binary_search(v.begin(),v.end(),4)==1){
//     cout<<" target exist"<<endl;

//    }
//    else{
//     cout<<"target doesnot exist";
    
//    }




/*sorting  */
    // sort(arr,arr+5);
    // for(int i:arr){
    //         cout<< i<<" ";
    // }
    // sort(v.begin(),v.end(),greater<int>());
    // for(int val:v){
    //     cout<<val<<" ";
    // }



/* swap*/


    // swap(a,v);
    // for(int val:a){
    //     cout<<val<<" ";

    // }
    // cout<<endl;
    // for(int val:v)cout<<val<<" ";



    /* MAX MIN*/


    // auto maximum=max_element(v.begin(),v.end());
    // auto minimum= min_element(v.begin(),v.end());
    // cout<<"maximum "<<*maximum<<endl;
    // cout<<"minimum "<<*minimum<<endl;


    /*Lower bound and Upper bound*/


    auto low=lower_bound(v.begin(),v.end(), 2);
    auto up=upper_bound(v.begin(),v.end(),4);
     cout<<"lower bound: "<< (low-v.begin())<<endl;
     cout<<"upper bound: "<< (up-v.begin())<<endl;


    return 0;
}