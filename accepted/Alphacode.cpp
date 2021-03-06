
#include <stdio.h>
#include <string.h>

int main(){
        int L,i;
        char str[5001];
        long long dp[5001];
        
        while(1){
                scanf("%s",str);
                if(str[0]=='0') break;
                
                L = strlen(str);
                
                dp[0] = dp[1] = 1;
                
                for(i = 2;i<=L;++i){
                        dp[i] = 0;
                        
                        char c1 = str[i-2]-'0', c2 = str[i-1]-'0';
                        
                        if(c1==1 || (c1==2 && c2<=6)) dp[i] += dp[i-2];
                        if(c2!=0) dp[i] += dp[i-1];
                }
                
                printf("%lld\n",dp[L]);
        }
        
        return 0;
}

   
