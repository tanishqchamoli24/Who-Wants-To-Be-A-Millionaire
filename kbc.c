#include<stdio.h>
#include<stdlib.h>
int main()
{
  /*Who wants to be a millionaire*/
  int c1,c2,c3,c4,c5;
    printf("\n I welcome you all to Who wants to be a millionaire");
    printf("\n I am going to ask you a series of questions starting with easy ones first and then as you proceed you will realise they are not as simple as you think so let us start");
    printf("\n Your first question is going to appear on your screen now");
    printf("\n What is the rank of Indian Army in terms of number of soldiers in the world?");
    printf("\n 1.4th");
    printf("\n 2.6th");
    printf("\n 3.8th");
    printf("\n 4.2nd\n");
    scanf("%d" , &c1);


      if (c1==4){
      printf("\n This is the right answer and you have won 1K now get ready for the next question");
      printf("\n Your next question for 10K is who is at a bigger rank Lt. General Or Major General?");
      printf("\n 1.Lt.General");
      printf("\n 2.Major General");
      printf("\n 3.They both are same and this is a trick question\n");
      scanf("%d", &c2);

                if (c2==1){
                printf("\n This the correct answer and congratulations you have won 10K");
                printf("\n The next question is for 1L so does the army follow the laws of indian constitution?");
                printf("\n 1.Yes");
                printf("\n 2.No\n");
                scanf("%d", &c3);

                        if (c3==2){
                                printf("\n You are correct they have their own set of laws called army laws");
                                printf("\n Your next question is for 10L");
                                printf("\n In the Indian army how many field marshal have been appointed till now?");
                                printf("\n 1.3");
                                printf("\n 2.2\n");
                                scanf("%d", &c4);

                                if (c4==2){
                                        printf("\n Congratulation this the right answer and you have won 10L");
                                printf("\n The next question is for 1 million");
                                printf("\n What is the full form of INSAS assualt rifle used be the indian army");
                                printf("\n 1.There is no fullform of this");
                                printf("\n 2.Indian New Small Arms System\n");
                                scanf("%d", &c5);

                                if(c5==2){
                                        printf("\n Congratulations you have give a right answer and you have become a millionaire\n");
                        }

                        else{
                                                printf("Wrong Answer!");
                                        }
              }

              else{
                                printf("Wrong Answer!");
                        }
        }

        else{
                        printf("Wrong Answer!");
                }
        }

        else{
                printf("Wrong Answer!");
        }       

}       

else{
        printf("Wrong Answer!");
}
return 0;
 }
