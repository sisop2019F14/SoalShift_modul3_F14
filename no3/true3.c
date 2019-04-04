#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>


//double durationIraj;
//double durationAgmal;

int allStatus = 0;
int agmalBangun = 0;
int irajTidur = 0;
int WakeUp_Status = 0;
int Spirit_Status = 100;
int gameOver = 0;
int irajFiturCount=0;
int agmalFiturCount=0;

void *siraj(void *ptr){
 
    while(WakeUp_Status < 100 && Spirit_Status > 0){
       
        if(irajTidur && agmalFiturCount < 3){
            irajTidur = 0;
            Spirit_Status -= 20;
            irajFiturCount++;
            if(Spirit_Status <= 0){
                printf("Iraj ikut tidur, dan bangun kesiangan bersama Agmal\n");
                exit(1);
            }
        }
        
        if(agmalFiturCount >= 3){

            printf("Fitur Iraj Ayo Tidur disabled 10 s\n");
            for(int i=0; i<10; i++){

                if(agmalFiturCount >= 6){
                    agmalFiturCount = 3;
                    i=0;
                    printf("Fitur Iraj Ayo Tidur disabled 10 s\n");
                }

                if(irajTidur){
                    irajTidur = 0;
                    printf("Fitur Iraj Ayo Tidur disabled 10 s\n");
                }
                sleep(1);
            }

            irajTidur = 0;
            agmalFiturCount = 0;

            printf("Fitur Iraj aktif kembali\n");
            
        }

    }

    gameOver = 1;

}


void *agmal(void *ptr){

    while(WakeUp_Status < 100 && Spirit_Status > 0){
        
        if(agmalBangun && irajFiturCount < 3){
            agmalBangun = 0;
            WakeUp_Status += 15;
            agmalFiturCount++;
            if(WakeUp_Status >= 100){
                printf("Agmal Terbangun,mereka bangun pagi dan berolahraga\n");
                exit(1);
            }
        }
        
        if(irajFiturCount >= 3){
            
            printf("Agmal Ayo Bangun disabled 10 s\n");
            for(int i=0; i<10; i++){

                if(irajFiturCount >= 6){
                    irajFiturCount = 3;
                    i = 0;
                    printf("Agmal Ayo Bangun disabled 10 s\n");
                }
    
                if(agmalBangun){
                    agmalBangun = 0;
                    printf("Agmal Ayo Bangun disabled 10 s\n");
                }
    
                sleep(1);
            }

            irajFiturCount = 0;
            agmalBangun = 0;
           

            printf("Fitur agmal aktif kembali\n");
            
        }

    }

    gameOver = 1;

}

void play(){

    char fitur[100];

    while(gameOver==0){

        gets(fitur);

        if(strcmp(fitur,"all")==0){
            allStatus = 1;
            printf("Agmal WakeUp_Status = %d\n",WakeUp_Status);
            printf("Iraj Spirit_Status = %d\n",Spirit_Status);
        }else if(strcmp(fitur,"agmal")==0){
            agmalBangun = 1;
        }else if(strcmp(fitur,"iraj")==0){
            irajTidur = 1;
        }

    }

    exit(1);

}

int main(){

    pthread_t thread[3];

    if(pthread_create(&thread[0],NULL,siraj,NULL)){
        printf("failed\n");
    }
    
    if(pthread_create(&thread[1],NULL,agmal,NULL)){
        printf("failed\n");
    }

    play();    

    exit(1);
    return 0;
}