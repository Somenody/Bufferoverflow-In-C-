// the langage use for this bufferoverflow example is the C
// le langage de programmation utilisée pour cette exemple de bufferoverflow est codé en c

// FR code
#include <stdio.h> // inclure la bibliothèque standard d'entrée/sortie

int main() { // fonction principale du programme
    char prenom[1]; // déclarer un tableau de caractères nommé "prenom" avec une taille de 1
    printf("Comment vous vous appelez ?\n"); // afficher une question pour demander le nom de l'utilisateur
    scanf("%s", prenom); // lire l'entrée de l'utilisateur et stocker dans le tableau "prenom"
    printf("Vous vous appelez %s\n", prenom); // afficher le nom de l'utilisateur
    printf("%p", &prenom); // afficher l'adresse mémoire du tableau "prenom"
    return 0; // terminer le programme et renvoyer 0 pour indiquer qu'il s'est terminé avec succès
}

// EN code
#include <stdio.h>

int main() {
    char name[1]; // Declare a character array "prenom" with a size of 1
    printf("What is your name?\n"); // Print a message to ask for the user's name
    scanf("%s", prenom); // Read the user's input and store it in "prenom"
    printf("Your name is %s\n", name); // Print the user's name
    printf("%p", &name); // Print the memory address of the "prenom" array
    return 0; // End the program
}

JPN code
#include <stdio.h> // 標準入出力ライブラリをインクルードする

int main() { // プログラムのメイン関数
    char #include <stdio.h> // 標準入出力ライブラリをインクルードする

int main() { // プログラムのメイン関数
    char 名前[1]; // サイズ1の文字配列"名前"を宣言する
    printf("あなたの名前は何ですか ?\n"); // ユーザーの名前を尋ねるメッセージを表示する
    scanf("%s", 名前); // ユーザーからの入力を読み取り、"名前"配列に格納する
    printf("あなたの名前です %s\n", 名前); // ユーザーの名前を表示する
    printf("%p", &名前); // "名前"配列のメモリアドレスを表示する
    return 0; // プログラムを終了し、正常に終了したことを示すために0を返す
}
