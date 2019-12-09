
void screen_question(){
    printf("\n %s, digite seu palpite: ", name);
}

void screen_value(){
    if(reported_value != number_secret){
        printf("\n Tente de novo %s !! ", name);
    }
}

void tips_one(){
    number_secret % 2 ? printf("\n Dica 1: Valor e impar")
    : printf("\n Dica 1: Valor e par");
}

void tips_two(){
    number_secret < 50 ? printf("\n Dica 2: Valor e <= a 50")
    : printf("\n Dica 2: Valor e > a 50");
}

void tips_three(){
    number_secret % 3 || number_secret % 5 ? 
    printf("\n Dica 3: Valor nao / por 3 nem por 5") : 
    printf("\n Dica 3: Valor e / por 3 ou 5");
}
void tips_four(){
    printf("\n Dica 4: Terminado em %d", number_secret % 10);
}

void tips_five(){
    printf("\n Dica 5: O valor esta entre %d e %d", number_secret-min_tips, number_secret + max_tips);
}