void selection_sort(int* list, int len){
        int l, t;
        for(int i=0;i<len-1;i++){
                l=i;
                for(int j=i+1;j<len;i++){
                        if(list[l]>list[j]){
                                l = j;
                        }
                }
                if(i!=l){
                        t = list[i];
                        list[i] = list[l];
                        list[l] = t;
                }
        }
}