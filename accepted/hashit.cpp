#include <cstdio>
#include <cstring>
using namespace std;
#define hash2(key) (key+j*j+23*j)%101//(Hash(key)+j^2+23*j)mod101
#define MAXSTRLEN 16
#define MAXWORDS 101
int main(){
    int t,n,found,i,j,pos,count,l,freeposfound,freepos,key;
    char hash[MAXWORDS][MAXSTRLEN],str[MAXSTRLEN],cmd;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        memset(hash,-1,MAXWORDS*MAXSTRLEN*sizeof(char));
        for(i=0;i<n;i++){
            memset(str,0,MAXSTRLEN*sizeof(char));
            scanf("\n%c%*c%*c:%s",&cmd,str);
            l=strlen(str);
            pos=0;
            for(j=0;j<l;j++) pos=(pos+(j+1)*(int)str[j]);
            pos=(pos*19)%101;
            key=pos;
            if(cmd=='A'){   //ADD
                freeposfound=0;
                found=0;
                j=0;
                while(j<20&&found==0){//find()
                    if(hash[pos][0]==-1&&freeposfound==0){
                        freeposfound=1;
                        freepos=pos;
                    }
                    if(strcmp(hash[pos],str)!=0){  j++; pos=hash2(key);}//present string is not the same as str
                    else found=1;                               //str already exists
                }
                if(found==0&&freeposfound==1) strcpy(hash[freepos],str);
            }else{          //DEL
                j=0;
                while(j<20&&strcmp(hash[pos],str)!=0){//find()
                      j++;pos=hash2(key);
                }
                if(j!=20) memset(hash[pos],-1,MAXSTRLEN*sizeof(char));
            }
		 //printf("i=%d   ",i);
		}
        count=0;
        for(j=0;j<MAXWORDS;j++)if(hash[j][0]!=-1)count++;
        printf("%d\n",count);
        for(j=0;j<MAXWORDS;j++)if(hash[j][0]!=-1)printf("%d:%s\n",j,hash[j]);
    }
}
