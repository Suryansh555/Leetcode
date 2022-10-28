 #include <stdio.h>  
 int main() {     
    int n,i,j,jj;     
    scanf("%d",&n);     
    int arr[n];     
    for(i=0;i<n;i++) {         
        scanf("%d",&arr[i]);         
    }      
    int count2=0;     
    for(i=0;i<n;i++) {         
        int count = 0;         
    for(j=1;j<arr[i];j++) {             
        for (jj = 1; jj < arr[i]; jj++) {                 
                if (j ^ jj == arr[i]) {                     
                    int a = j & jj;                     
                    if (a == 0) {                         
                        count++;                      
                    }                 
                }             
        }         
    }             
        if(count>0)                 
            count2++;     
    }        
    printf("%d",count2);            
    return 0; 
} 