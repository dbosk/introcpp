void samples(){
	// 1 - Uppräkning
	for (int i = 0; i < COUNT; i++){
		...
	}
	// är att föredra framför
	// 2 - Uppräkning med ej begräsat scope.
	int i = 0;
	for( ; i < COUNT; i++){
		...
	}
}
