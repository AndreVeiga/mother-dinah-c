void execute_game(){

    screen_question();

    scanf("%d",&reported_value);

    screen_value();
}

int value_secret(int limit){
    srand(time(NULL));
    return rand() % limit;
}

void start_game(){
    number_secret = value_secret(100);
    min_tips = value_secret(15);
    max_tips = value_secret(15);
   
    while(reported_value != number_secret){
            
        execute_game();

        attempt++;
        
        if(attempt > 1 && attempt % 3 == 0){
            tips_value++;
        }        

        tips();
    }

    end_game();
}

void tips(){
    if(tips_value >= 1)
        tips_one();

    if(tips_value >= 2)
        tips_two();

    if(tips_value >= 3){
        tips_three();
    }

    if(tips_value >= 4){
        tips_four();
    }

    if(tips_value >= 5){
        tips_five();
    }
}


void end_game(){
    final_game();
}