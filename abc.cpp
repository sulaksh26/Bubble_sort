void bubbleSort(vector<int>& arr, int n) 
{
    //write your code here

    for(int i=n-1;i>=0;i--){
        
        for(int j=0;j<=i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}