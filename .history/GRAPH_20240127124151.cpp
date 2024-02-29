#include<iostream>
using namespace std;


class Graph{
    public:
    int a[5][5];
    int size;
    Graph(int size){
        this->size = size;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                a[i][j] = 0;
            }
        }

        void insertEdge(int statPoint,int endPoint){
            a[startPoint][endPoint] = 1;
            a[startPoint][endPoint] = 1;
        }
    }
}
int main(){

}