class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector <int> P;
        vector<int> N;
        
        for(int i=0; i<arr.size();i++){
            if(arr[i]<0){
                N.push_back(arr[i]);
            }
            else{
                P.push_back(arr[i]);
            }
        }
        
        int n1= P.size();
        int n2= N.size();
        int i=0,j=0;
        for(int k=0;k<n1;k++){
            arr[k]=P[i];
            i++;
        }
        for(int k=n1; k<arr.size();k++){
            arr[k]=N[j];
            j++;
        }
        
    }
};
