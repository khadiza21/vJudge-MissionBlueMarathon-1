#include<bits/stdc++.h>
using namespace std ;

int  main (){
    int arr[10005];
    int x ,i =0 ;
    while (1){
        cin>>arr[i] ;
        if (arr[i] ==0 ){
            break ;
        }
        i++ ;

    }
    for(int j=0 ;j<i ;j++){
        cout<<"case " << j+1<<":" << arr[j]<<endl;
    }


  return 0;
}