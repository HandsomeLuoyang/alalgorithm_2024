int main(){
    int countOnes(int num){
        int count = 0;
        while(num){
            if(num & 1){
                count++;
            }
            num>>=1;
        }
        return count;
    }
}