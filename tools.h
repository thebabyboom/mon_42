/**
 * @Author: Coléry David <Babyboom>
 * @Date:   21/10/2017  03:24:18
 * @Email:  thebabyboom@gmail.com
 * @Filename: tools.h
 * @Last modified by:   Coléry David
 * @Last modified time: 22/10/2017  01:41:35
 */

///fonction qui écrit un caractère à l'écran
int ft_putchar(char c);

///fonction qui affiche l’alphabet en minuscule sur une seule ligne, dans
///l’ordre croissant, à partir de la lettre ’a’
void ft_print_alphabet(void);

///fonction qui affiche l’alphabet en minuscule sur une seule ligne, dans
///l’ordre décroissant, à partir de la lettre ’z’
void ft_print_reverse_alphabet(void);

///fonction qui affiche tous les chiffres sur une seule ligne, dans l’ordre
///croissant.
void ft_print_numbers(void);

///fonction qui affiche ’N’ ou ’P’ suivant le signe de l’entier passé
///en paramètre. Si n est négatif alors afficher ’N’.
///Si n est positif ou nul alors afficher ’P’
void ft_is_negative(int n);

///fonction qui affiche, dans l’ordre croissant, toutes les différentes
///combinaisons de trois chiffres différents dans l’ordre croissant -
///oui, la répétition est volontaire.
void	ft_print_comb(void);

///fonction qui affiche toutes les différentes combinaisons de deux nombres
///entre 0 et 99, dans l’ordre croissant
void	ft_print_comb2(void);

///fonction qui affiche un nombre passé en paramètre. La fonction devra
///être capable d’afficher la totalité des valeurs possibles dans une variable
///de type int.
void ft_putnbr(int nb);
