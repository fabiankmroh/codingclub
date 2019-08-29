#include <stdio.h>

int n, k, i, imain;
int mStartTime[10000];
int mEndTime[10000];
int maxNum;

void m(int cTime, int mNum, int mC){

    if(mStartTime[mNum+1] >= cTime && mEndTime[mNum+1] <= k){ 
        // Check if Next Meeting on List can be attended

        if(mNum == n-1){
            mC++;
            if(mC > maxNum){
                maxNum = mC;
            }
            
            return;
        }

        m(mEndTime[mNum+1], mNum+1, mC+1); // Attend the Next Meeting
    }
    
    if(mNum == n-1){
        if(mC > maxNum){
            maxNum = mC;
        }
            
        return;
    }

    m(cTime, mNum+1, mC); // Miss the Next Meeting
}

int main(void){
    scanf("%d %d", &n, &k);

    for(imain = 0; imain < n; imain++){
        scanf("%d %d", &mStartTime[imain], &mEndTime[imain]);
    }

    m(0,-1,0);
    m(mEndTime[0], 0, 1);

    printf("%d\n", maxNum);
}