int fib(int x){
	if (x == 1){
		return 1;
	}
	if (x == 2){
		return 2;
	} else {
		return (fib(x-1) + fib(x-2));
	}
}

int problem2(){
	int answer =0;
	int i;
	
	for (i=1; fib(i) <=4000000; i++){
		if ( (fib(i)%2) == 0){
		answer +=fib(i);
		}
	}
	printf("problem 2 answer %d \n",answer);
}

int problem6(){
	int sum=0;
	int sumOfSquares = 0;
	int z;
	for (z =1; z<=100; z++){
		sumOfSquares += z*z;
		sum += z;
	}
	int squareOfSum = sum * sum;
	int answer = squareOfSum - sumOfSquares;
	printf("problem 6 answer %d \n", answer);
}