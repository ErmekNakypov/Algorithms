void reverseArray(int[] x){
   reverse(x, 0, x.length -1);
}

void reverse(int[] x, int i, int j){
    if(i<j){//Swap
       int tmp = x[i];
       x[i] = x[j];
       x[j] = tmp;
       reverse(x, ++i, --j);
    }   
}
