/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 17:06:14 by alopez-g          #+#    #+#             */
/*   Updated: 2020/07/12 04:13:45 by alopez-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../srcs/Libft/includes/libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    int     n0 = 0;
    int     n1 = 0;
    char    test = 'a';
    
    if (argc > 1)
        test = **(argv + 1);

    //----- c -----
    if (test == 'c' || test == 'a')
    {
        printf("\033[1;33m---------- c ----------\033[0m\n");

        n0 = ft_printf(  "VERGA c | %*.*c|\n", -93, 78, 'z');
        n1 = printf(     "BUENO c | %*.*c|\n", -93, 78, 'z');
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA c | %*.*c|\n", 93, 78, 'z');
        n1 = printf(     "BUENO c | %*.*c|\n", 93, 78, 'z');
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA c | %10c|\n", 'z');
        n1 = printf(     "BUENO c | %10c|\n", 'z');
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA c | %-10c|\n", 'z');
        n1 = printf(     "BUENO c | %-10c|\n", 'z');
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA c | %010c|\n", 'z');
        n1 = printf(     "BUENO c | %010c|\n", 'z');
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");
    }

    //----- s -----
    if (test == 's' || test == 'a')
    {
        printf("\033[1;33m---------- s ----------\033[0m\n");

        n0 = ft_printf(  "VERGA s |%s|\n", 0);
        n1 = printf(     "BUENO s |%s|\n", 0);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %.s|\n", "(null)");
        n1 = printf(     "BUENO s | %.s|\n", "(null)");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %50s|\n", "verga santa");
        n1 = printf(     "BUENO s | %50s|\n", "verga santa");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %-50s|\n", "verga santa");
        n1 = printf(     "BUENO s | %-50s|\n", "verga santa");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %050s|\n", "verga santa");
        n1 = printf(     "BUENO s | %050s|\n", "verga santa");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %-050s|\n", "verga santa");
        n1 = printf(     "BUENO s | %-050s|\n", "verga santa");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %.5s|\n", "verga santa");
        n1 = printf(     "BUENO s | %.5s|\n", "verga santa");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %-.5s|\n", "verga santa");
        n1 = printf(     "BUENO s | %-.5s|\n", "verga santa");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %s|\n", "");
        n1 = printf(     "BUENO s | %s|\n", "");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %.5s|\n", 0);
        n1 = printf(     "BUENO s | %.5s|\n", 0);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %.5s|\n", "(null)");
        n1 = printf(     "BUENO s | %.5s|\n", "(null)");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %.s|\n", "(null)");
        n1 = printf(     "BUENO s | %.s|\n", "(null)");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %.6s|\n", "HOLA QUE PASA");
        n1 = printf(     "BUENO s | %.6s|\n", "HOLA QUE PASA");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");
    }

    //----- d -----
    if (test == 'd' || test == 'a')
    {
        printf("\033[1;33m---------- d ----------\033[0m\n");

        n0 = ft_printf(  "VERGA d |%d|\n", 10);
        n1 = printf(     "BUENO d |%d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%5d|\n", 10);
        n1 = printf(     "BUENO d |%5d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%05d|\n", 10);
        n1 = printf(     "BUENO d |%05d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%.3d|\n", 10);
        n1 = printf(     "BUENO d |%.3d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%.3d|\n", 1000000);
        n1 = printf(     "BUENO d |%.3d|\n", 1000000);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%20.3d|\n", 10);
        n1 = printf(     "BUENO d |%20.3d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%-.3d|\n", 10);
        n1 = printf(     "BUENO d |%-.3d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%-4.3d|\n", 10);
        n1 = printf(     "BUENO d |%-4.3d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%-10d|\n", 10);
        n1 = printf(     "BUENO d |%-10d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%-010d|\n", 10);
        n1 = printf(     "BUENO d |%-010d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%-04.3d|\n", 10);
        n1 = printf(     "BUENO d |%-04.3d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%-4.3d|\n", 10);
        n1 = printf(     "BUENO d |%-4.3d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%4.5d|\n", 1);
        n1 = printf(     "BUENO d |%4.5d|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%04d|\n", 1);
        n1 = printf(     "BUENO d |%04d|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%4.7d|\n", 1);
        n1 = printf(     "BUENO d |%4.7d|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%4.7d|\n", -1);
        n1 = printf(     "BUENO d |%4.7d|\n", -1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");
    }

    //----- u -----
    if (test == 'u' || test == 'a')
    {
        printf("\033[1;33m---------- u ----------\033[0m\n");

        n0 = ft_printf(  "VERGA u |%u|\n", 10);
        n1 = printf(     "BUENO u |%u|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%5u|\n", 10);
        n1 = printf(     "BUENO u |%5u|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%05u|\n", 10);
        n1 = printf(     "BUENO u |%05u|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%.3u|\n", 10);
        n1 = printf(     "BUENO u |%.3u|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%.3u|\n", 1000000);
        n1 = printf(     "BUENO u |%.3u|\n", 1000000);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%20.3u|\n", 10);
        n1 = printf(     "BUENO u |%20.3u|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%-.3u|\n", 10);
        n1 = printf(     "BUENO u |%-.3u|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%-4.3u|\n", -10);
        n1 = printf(     "BUENO u |%-4.3u|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%-10u|\n", -10);
        n1 = printf(     "BUENO u |%-10u|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%-010u|\n", -10);
        n1 = printf(     "BUENO u |%-010u|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%-04.3u|\n", -10);
        n1 = printf(     "BUENO u |%-04.3u|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%-4.3u|\n", -10);
        n1 = printf(     "BUENO u |%-4.3u|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%4.5u|\n", -1);
        n1 = printf(     "BUENO u |%4.5u|\n", -1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%04u|\n", 1);
        n1 = printf(     "BUENO u |%04u|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%4.7u|\n", 1);
        n1 = printf(     "BUENO u |%4.7u|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%4.7u|\n", -1);
        n1 = printf(     "BUENO u |%4.7u|\n", -1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");
    }

    //----- p -----
    if (test == 'p' || test == 'a')
    {
        printf("\033[1;33m---------- p ----------\033[0m\n");

        char test[4] = "HOLA";
        n0 = ft_printf(  "VERGA p | %p|\n", test);
        n1 = printf(     "BUENO p | %p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %20p|\n", test);
        n1 = printf(     "BUENO p | %20p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-20p|\n", test);
        n1 = printf(     "BUENO p | %-20p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %020p|\n", test);
        n1 = printf(     "BUENO p | %020p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-.30p|\n", test);
        n1 = printf(     "BUENO p | %-.30p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %.3p|\n", test);
        n1 = printf(     "BUENO p | %.3p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %20.3p|\n", test);
        n1 = printf(     "BUENO p | %20.3p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-.3p|\n", test);
        n1 = printf(     "BUENO p | %-.3p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-4.3p|\n", test);
        n1 = printf(     "BUENO p | %-4.3p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-10p|\n", test);
        n1 = printf(     "BUENO p | %-10p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-010p|\n", test);
        n1 = printf(     "BUENO p | %-010p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-04.3p|\n", test);
        n1 = printf(     "BUENO p | %-04.3p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-4.3p|\n", test);
        n1 = printf(     "BUENO p | %-4.3p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %p|\n", 0);
        n1 = printf(     "BUENO p | %p|\n", 0);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %p|\n", NULL);
        n1 = printf(     "BUENO p | %p|\n", NULL);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %5p|\n", NULL);
        n1 = printf(     "BUENO p | %5p|\n", NULL);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %05p|\n", NULL);
        n1 = printf(     "BUENO p | %05p|\n", NULL);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %.30p|\n", test);
        n1 = printf(     "BUENO p | %.30p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %.15p|\n", test);
        n1 = printf(     "BUENO p | %.15p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");
    }

    //----- x -----
    if (test == 'x' || test == 'a')
    {
        printf("\033[1;33m---------- x ----------\033[0m\n");

        n0 = ft_printf(  "VERGA x |%x|\n", 10);
        n1 = printf(     "BUENO x |%x|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%5x|\n", 10);
        n1 = printf(     "BUENO x |%5x|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%05x|\n", 10);
        n1 = printf(     "BUENO x |%05x|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%.3x|\n", 10);
        n1 = printf(     "BUENO x |%.3x|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%.3x|\n", 1000000);
        n1 = printf(     "BUENO x |%.3x|\n", 1000000);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%20.3x|\n", 10);
        n1 = printf(     "BUENO x |%20.3x|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%-.3x|\n", 10);
        n1 = printf(     "BUENO x |%-.3x|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%-4.3x|\n", -10);
        n1 = printf(     "BUENO x |%-4.3x|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%-10x|\n", -10);
        n1 = printf(     "BUENO x |%-10x|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%-010x|\n", -10);
        n1 = printf(     "BUENO x |%-010x|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%-04.3x|\n", -10);
        n1 = printf(     "BUENO x |%-04.3x|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%-4.3x|\n", -10);
        n1 = printf(     "BUENO x |%-4.3x|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%4.5x|\n", -1);
        n1 = printf(     "BUENO x |%4.5x|\n", -1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%04x|\n", 1);
        n1 = printf(     "BUENO x |%04x|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%4.7x|\n", 1);
        n1 = printf(     "BUENO x |%4.7x|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%4.7x|\n", -1);
        n1 = printf(     "BUENO x |%4.7x|\n", -1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");
    }

    //----- X -----
    if (test == 'X' || test == 'a')
    {
        printf("\033[1;33m---------- X ----------\033[0m\n");

        n0 = ft_printf(  "VERGA X |%X|\n", 10);
        n1 = printf(     "BUENO X |%X|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%5X|\n", 10);
        n1 = printf(     "BUENO X |%5X|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%05X|\n", 10);
        n1 = printf(     "BUENO X |%05X|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%.3X|\n", 10);
        n1 = printf(     "BUENO X |%.3X|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%.3X|\n", 1000000);
        n1 = printf(     "BUENO X |%.3X|\n", 1000000);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%20.3X|\n", 10);
        n1 = printf(     "BUENO X |%20.3X|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%-.3X|\n", 10);
        n1 = printf(     "BUENO X |%-.3X|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%-4.3X|\n", -10);
        n1 = printf(     "BUENO X |%-4.3X|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%-10X|\n", -10);
        n1 = printf(     "BUENO X |%-10X|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%-010X|\n", -10);
        n1 = printf(     "BUENO X |%-010X|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%-04.3X|\n", -10);
        n1 = printf(     "BUENO X |%-04.3X|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%-4.3X|\n", -10);
        n1 = printf(     "BUENO X |%-4.3X|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%4.5X|\n", -1);
        n1 = printf(     "BUENO X |%4.5X|\n", -1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%04X|\n", 1);
        n1 = printf(     "BUENO X |%04X|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%4.7X|\n", 1);
        n1 = printf(     "BUENO X |%4.7X|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%4.7X|\n", -1);
        n1 = printf(     "BUENO X |%4.7X|\n", -1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        printf("\n\n");
    }
    return (0);
}