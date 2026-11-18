#include<iostream>
#include <pthread.h>
using namespace std;

void* fun(void *args){
    while(1){
        
        cout << "Thread Print" << endl;
    }

}

int main(){
    pthread_t t1;
    pthread_create(&t1, NULL, fun, NULL);
    cout << "Hello";
}