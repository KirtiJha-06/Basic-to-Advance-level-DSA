
TC : O(n)
SC : O(n)

// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        vector<int>pos , neg;
        for(int num: arr){
            if(num>=0)
            pos.push_back(num);
            else
            neg.push_back(num);
        }
        int i =0 , j =0 , k=0;
        int n = arr.size();
        while(i<pos.size() && j <neg.size()){
            if(k%2==0){
                arr[k++] = pos[i++];
            }else{
                arr[k++] = neg[j++];
            }
        }
        
        while(i<pos.size()){
            arr[k++] = pos[i++];
        }
        while(j<neg.size()){
            arr[k++] = neg[j++];
        }
    }
};
