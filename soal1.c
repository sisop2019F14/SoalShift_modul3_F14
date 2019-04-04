#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<math.h>

int x;
int temp[50];
pthread_t tid[50];

void* factorial(){
    unsigned int ret=1;
	for(int i=1; i<=temp[x]; ++i)
        {
            ret *= i; // menghitung factorial
        }
    printf("%d! = %u \n",temp[x],ret);
}



int main(int argc, char** argv)
{

	int order, err;
	for (int i=0; i<argc-1; i++){
		temp[i]=atoi(argv[i+1]);
	}
    for (int i=0; i<argc-1; ++i){
    	for (int j=0; j<argc-i-1; ++j){
    		if (temp[j] < temp[j-1]){
    		order = temp[j-1];
    		temp[j-1]= temp[j];
    		temp[j]= order;
		}
	}
	}

/**	for (int i=0; i<argc-1; i++){
		printf("%d \n", temp[i]);
	} **/
	
	for(x=0;x<argc-1;x++)
	{
		err=pthread_create(&(tid[x]),NULL,&factorial,NULL); //membuat thread
		if(err!=0) //cek error
		{
			printf("\n error");
		}
		else
		{

		}
		pthread_join(tid[x],NULL);

	}
	return 0;

}
