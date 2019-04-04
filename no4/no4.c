#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdint.h>
#include <sys/stat.h>
#include <pthread.h>
#include <sys/types.h>
#include <string.h>


void *process1( void *arg){

    //char *path;
    //path = (char *)arg;
    
    printf("process1\n");

    char file[100] = "/home/anwar/documents/FolderProses1/SimpanProses1.txt";
    char cmdSave[] = "ps -aux | head -11 > /home/anwar/documents/FolderProses1/SimpanProses1.txt";

    system(cmdSave);    

    char cmdZip[] = "chdir /home/anwar/documents/FolderProses1/ && zip KompresProses1.zip SimpanProses1.txt";
    system(cmdZip);

    remove(file);

    printf("Menunggu 15 detik untuk mengekstrak kembali\n");
    sleep(15);

    char cmdExtract[] = "chdir /home/anwar/documents/FolderProses1/ && unzip KompresProses1.zip";
    system(cmdExtract);

    pthread_exit(0);
}

void *process2( void *arg){

    //char *path;
    //path = (char *)arg;
    
    printf("process2\n");
    
    char file[100] = "/home/anwar/documents/FolderProses2/SimpanProses2.txt";
    char cmdSave[] = "ps -aux | head -11 > /home/anwar/documents/FolderProses2/SimpanProses2.txt";

    system(cmdSave);    

    char cmdZip[] = "chdir /home/anwar/documents/FolderProses2/ && zip KompresProses2.zip SimpanProses2.txt";
    system(cmdZip);

    remove(file);

    printf("Menunggu 15 detik untuk mengekstrak kembali\n");
    sleep(15);

    char cmdExtract[] = "chdir /home/anwar/documents/FolderProses2/ && unzip KompresProses2.zip";
    system(cmdExtract);

    pthread_exit(0);

}


int main(){

    pthread_t thread[2];
    //char path1[100] = "/home/anwar/documents/FolderProses1/";
    //char path2[100] = "/home/anwar/documents/FolderProses2/";


    //for(int i=0; i<2; i++){
    if(pthread_create(&thread[0],NULL,process1,NULL)){
        printf("failed\n");
    }

    if(pthread_create(&thread[1],NULL,process2,NULL)){
        printf("failed\n");
    }
    

    for(int i=0; i<2; i++){
        pthread_join(thread[i],NULL);
    }

    return 0;
}