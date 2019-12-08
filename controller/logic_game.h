void execute_game(){

    screen_question();

    scanf("%d",&reported_value);

    screen_value();
}

int value_secret(){
    srand(time(NULL));
    return rand() % 100;
}

void start_game(){
    number_secret = value_secret();
    int attempt = 0;
    while(reported_value != number_secret){
        
        execute_game();

        attempt++;
        
        if(attempt > 1 && attempt % 3 == 0){
            tips_value++;
        }
        
        tips();
        
    }
}

void tips(){
    if(tips_value >= 1)
        tips_one();

    if(tips_value >= 2)
        tips_two();
}


void end_game(){

}