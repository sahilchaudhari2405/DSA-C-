      int i=l-1;
        int pi = l + (rand()%(h-l+1));
        swap(arr[pi],arr[h]);
        int piv = arr[h];
        for(int j=l; j<h; j++){
            if(arr[j]<piv){
                 i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i+1], arr[h]);
        return i+1;