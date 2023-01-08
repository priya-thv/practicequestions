#include <bits/stdc++.h>
using namespace std;

int sumofdiagonal(vector<vector<int>>diagonal,int n){
    int sum=0;
   cout<<"1st diagonal: ";    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum=sum+diagonal[i][j];
            }
        }
    }return sum;
    cout<<endl;
}

int sumofotherdiagonal(vector<vector<int>>diagonal,int n){
    int sum1=0;
cout<<"2nd diagonal: ";
    for(int k=0;k<n;k++){
        for(int l=0;l<n;l++){
          if((k+l)==(n-1)){
           sum1=sum1+diagonal[k][l];
          }
        }
    }return sum1;
    cout<<endl;
}





int main()
{
    int n;
    cin >> n;
    vector<vector<int>> diagonal(n,vector<int>(n));

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cin >> diagonal[i][j];
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < n; l++)
        {
            cout << diagonal[k][l] << " ";
        }
        cout << endl;
    }
      
    cout<< sumofdiagonal(diagonal,n)<<endl;
     
    cout<<sumofotherdiagonal(diagonal,n)<<endl;

  int difference=((sumofdiagonal(diagonal,n))-(sumofotherdiagonal(diagonal,n)));

  cout<<"difference"<<difference;

}
