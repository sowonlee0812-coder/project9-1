
#include <stdlib.h>
#include <stdio.h>
#define SIZE 5

int main(int argc, char * argv[]) {
    
    //SIZE 크기 배열 선언
    int i;
    int grade[SIZE];
    int score[SIZE];

    for(i=0;i<SIZE;i++)
    {
        grade[i] = rand() % 100;
        //0-99의 숫자만 랜덤으로 가져오겠다는 뜻
    }
       
    for(i=0;i<SIZE;i++)
    {
        score[i] = grade[i];
    }
    
//점수 화면 출력 (반복문 활용)
#if 1
    for(i=0;i<SIZE;i++)
    printf("grade[%i] = %i, score[%i] = %i\n",
           i, grade[i], i, score[i]);
#endif
        
            
    system("PAUSE");
    return 0;
    
}


  
