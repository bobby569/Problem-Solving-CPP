void InsertionSort(int a[]){
	int f, i;
	KEYTYPE temp;

	for(f = 1; f < MaXDIM; f++){
		if (a[f] > a[f - 1]){
			continue;
		}
		temp = a[f];
		i = f - 1;
      
		while ((i >= 0) && (a[i] > temp)){
			a[i + 1] = a[i];
			i--;
		}
		a[i + 1] = temp;
	}
}