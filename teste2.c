int CalculaMenor(int A[], int n){
    int i, menor;

    menor = A[0]=100;
    for(i=1;i<n;i++){
        if(A[i] > menor){
            menor = A[i];
        }
    }
    return menor;
}

int main(){
    CalculaMenor();
}
