int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int i,j,max,k;
	    int sum=0,msum=0;
	    for(i=0;i<n;i++){
	        k=0;
	        sum=0;
	        for(j=i;j<n;j++){
	            if(arr[i]<arr[j]){
	                sum+=arr[j];
	                k=k+1;
	            }
	            if(k>max)
	            {
    	            max=k;
    	            msum=sum;
	                
	            }
	        }
	    }
	    return(msum);
	}