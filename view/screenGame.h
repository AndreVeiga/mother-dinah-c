
void screen_question(){
    system("clear");
    printf("\n\t %s, digite seu palpite: ", name);
}

void screen_value(){
    if(reported_value != number_secret){
        printf("\n\t Tente de novo %s !! ", name);
        sleep(1);
    }
}

void tips_one(){
    number_secret % 2 ? printf("\n\t Dica 1: Valor e impar\n")
    : printf("\t Dica 1: Valor e par\n");
}

void tips_two(){
    number_secret < 50 ? printf("\n\t Dica 2: Valor e > a 50")
    : printf("\n\t Dica 2: Valor e <= a 50");
}