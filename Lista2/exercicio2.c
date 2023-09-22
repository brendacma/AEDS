int main() {
    int idade;
    printf ("digite sua idade: ");
    scanf ("%d", &idade);

    if (idade < 16) {
        printf("nao é eleitora");
    } else if (idade >= 16 && idade <= 17) {
        printf("eleitor facultativo menor de idade");
    } else if (idade >= 18 && idade <= 64) {
        printf("eleitor obrigatorio");
    } else if (idade > 64) {
        printf("eleitor facultativo maior de idade");
    }


    return 0;
}
