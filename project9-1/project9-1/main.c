
#include <stdlib.h>
#include <stdio.h>
#define SIZE 5

int main(int argc, char * argv[]) {
    
    //SIZE명의 학생에 대한 시험성적
    int i;
    int testScore[SIZE];
    int sum = 0;
    
    //점수 입력
    printf("%i명 점수를 입력하세요.\n", SIZE);
    
    for(i=0;i<SIZE;i++)
    {
        scanf("%d", &testScore[i]);
        sum += testScore[i];
    }

    //점수 화면 출력 (반복문 활용)
    #if 0
    for(i=0;i<SIZE;i++)
        printf("grade[%i] = %i\n", i, testScore[i]);
    #endif
    
    printf("성적 평균 : %i\n", sum/SIZE);
  
            
    system("PAUSE");
    return 0;
    
}


  
