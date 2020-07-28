/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopez-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 17:06:14 by alopez-g          #+#    #+#             */
/*   Updated: 2020/07/28 16:42:47 by alopez-g         ###   ########.fr       */
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
    char    error = 0;
    
    if (argc > 1)
        test = **(argv + 1);

    //----- no mod pf -----
    if (test == 'm')
    {
        //failed
        n0 =    ft_printf( 	"VERGA: _HOLA_%#x_HOLA\n", 10);
        n1 =    printf(	 	"BUENO: _HOLA_%#x_HOLA\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");
    }

    //----- c -----
    if (test == 'c' || test == 'a')
    {
        printf("\033[1;33m---------- c ----------\033[0m\n");

        n1 =    printf(    "BUENO: _HOLA_%2c_HOLA\n", 100);
        n0 =		ft_printf("VERGA: _HOLA_%2c_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m": "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%-23c_HOLA\n", 100);
        n0 =		ft_printf("VERGA: _HOLA_%-23c_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%5c_HOLA\n", 100);
        n0 =		ft_printf("VERGA: _HOLA_%5c_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%-23c_HOLA\n", 100);
        n0 =		ft_printf("VERGA: _HOLA_%-23c_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%-23c_HOLA\n", 100);
        n0 =		ft_printf("VERGA: _HOLA_%-23c_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%07c_HOLA\n", 100);
        n0 =		ft_printf("VERGA: _HOLA_%07c_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%20c_HOLA\n", 100);
        n0 =		ft_printf("VERGA: _HOLA_%20c_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%c_HOLA\n", NULL);
        n0 =		ft_printf("VERGA: _HOLA_%c_HOLA\n", NULL);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA c | %*.*c|\n", -93, 78, 'z');
        n1 = printf(     "BUENO c | %*.*c|\n", -93, 78, 'z');
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA c | %*.*c|\n", 93, 78, 'z');
        n1 = printf(     "BUENO c | %*.*c|\n", 93, 78, 'z');
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA c | %10c|\n", 'z');
        n1 = printf(     "BUENO c | %10c|\n", 'z');
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA c | %-10c|\n", 'z');
        n1 = printf(     "BUENO c | %-10c|\n", 'z');
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA c | %010c|\n", 'z');
        n1 = printf(     "BUENO c | %010c|\n", 'z');
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");
    }

    //----- s -----
    if (test == 's' || test == 'a')
    {
        printf("\033[1;33m---------- s ----------\033[0m\n");

        n1 =    printf(    "BUENO: _HOLA_%.s_HOLA\n", "reverga");
        n0 =		ft_printf("VERGA: _HOLA_%.s_HOLA\n", "reverga");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%5s_HOLA\n", "reverga");
        n0 =		ft_printf("VERGA: _HOLA_%5s_HOLA\n", "reverga");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%15s_HOLA\n", "reverga");
        n0 =		ft_printf("VERGA: _HOLA_%15s_HOLA\n", "reverga");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%-5s_HOLA\n", "reverga");
        n0 =		ft_printf("VERGA: _HOLA_%-5s_HOLA\n", "reverga");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%.5s_HOLA\n", "reverga");
        n0 =		ft_printf("VERGA: _HOLA_%.5s_HOLA\n", "reverga");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%.5s_HOLA\n", "reverga");
        n0 =		ft_printf("VERGA: _HOLA_%.5s_HOLA\n", "reverga");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%2.3s_HOLA\n", "reverga");
        n0 =		ft_printf("VERGA: _HOLA_%2.3s_HOLA\n", "reverga");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %.s|\n", "(null)");
        n1 = printf(     "BUENO s | %.s|\n", "(null)");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %50s|\n", "verga santa");
        n1 = printf(     "BUENO s | %50s|\n", "verga santa");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %-50s|\n", "verga santa");
        n1 = printf(     "BUENO s | %-50s|\n", "verga santa");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %050s|\n", "verga santa");
        n1 = printf(     "BUENO s | %050s|\n", "verga santa");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %-050s|\n", "verga santa");
        n1 = printf(     "BUENO s | %-050s|\n", "verga santa");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %.5s|\n", "verga santa");
        n1 = printf(     "BUENO s | %.5s|\n", "verga santa");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %-.5s|\n", "verga santa");
        n1 = printf(     "BUENO s | %-.5s|\n", "verga santa");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %s|\n", "");
        n1 = printf(     "BUENO s | %s|\n", "");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %.5s|\n", 0);
        n1 = printf(     "BUENO s | %.5s|\n", 0);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %.5s|\n", "(null)");
        n1 = printf(     "BUENO s | %.5s|\n", "(null)");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %.s|\n", "(null)");
        n1 = printf(     "BUENO s | %.s|\n", "(null)");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %.6s|\n", "HOLA QUE PASA");
        n1 = printf(     "BUENO s | %.6s|\n", "HOLA QUE PASA");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%15.3s_HOLA\n", "reverga");
        n0 =		ft_printf("VERGA: _HOLA_%15.3s_HOLA\n", "reverga");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%-15.3s_HOLA\n", "reverga");
        n0 =		ft_printf("VERGA: _HOLA_%-15.3s_HOLA\n", "reverga");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%-5.3s_HOLA\n", "reverga");
        n0 =		ft_printf("VERGA: _HOLA_%-5.3s_HOLA\n", "reverga");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%2.0s_HOLA\n", NULL);
        n0 =		ft_printf("VERGA: _HOLA_%2.0s_HOLA\n", NULL);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%-3.5s_HOLA\n", "reverga");
        n0 =		ft_printf("VERGA: _HOLA_%-3.5s_HOLA\n", "reverga");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%-.10s_HOLA\n", "reverga");
        n0 =		ft_printf("VERGA: _HOLA_%-.10s_HOLA\n", "reverga");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(    "BUENO: _HOLA_%.6s_HOLA\n", NULL);
        n0 =		ft_printf("VERGA: _HOLA_%.6s_HOLA\n", NULL);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s | %.5s|\n", 0);
        n1 = printf(     "BUENO s | %.5s|\n", 0);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s |%s|\n", 0);
        n1 = printf(     "BUENO s |%s|\n", 0);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s |%010s|\n", "HOLA");
        n1 = printf(     "BUENO s |%010s|\n", "HOLA");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s |%10.2s|\n", "test string");
        n1 = printf(     "BUENO s |%10.2s|\n", "test string");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA s |%010.2s|\n", "test string");
        n1 = printf(     "BUENO s |%010.2s|\n", "test string");
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");
    }

    //----- d -----
    if (test == 'd' || test == 'a')
    {
        printf("\033[1;33m---------- d ----------\033[0m\n");

        n1 =    printf(	  "BUENO: _HOLA_%*.*d_HOLA\n", 5, 10, 100);
        n0 =    ft_printf( "VERGA: _HOLA_%*.*d_HOLA\n", 5, 10, 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");
        
        n1 =    printf(	  "BUENO: _HOLA_%3d_HOLA\n", 100);
        n0 =    printf(	  "VERGA: _HOLA_%3d_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%2d_HOLA\n", 100);
        n0 =    ft_printf(	  "VERGA: _HOLA_%2d_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%.5d_HOLA\n", 100);
        n0 =    ft_printf( "VERGA: _HOLA_%.5d_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%.3d_HOLA\n", 100);
        n0 =    ft_printf( "VERGA: _HOLA_%.3d_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%.2d_HOLA\n", 100);
        n0 =    ft_printf( "VERGA: _HOLA_%.2d_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%2.5d_HOLA\n", 100);
        n0 =    ft_printf( "VERGA: _HOLA_%2.5d_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%2.3d_HOLA\n", 100);
        n0 =    ft_printf( "VERGA: _HOLA_%2.3d_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%2.2d_HOLA\n", 100);
        n0 =    ft_printf( "VERGA: _HOLA_%2.2d_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%3.5d_HOLA\n", 100);
        n0 =    ft_printf( "VERGA: _HOLA_%3.5d_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%3.3d_HOLA\n", 100);
        n0 =    ft_printf( "VERGA: _HOLA_%3.3d_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%3.5d_HOLA\n", 100);
        n0 =    ft_printf( "VERGA: _HOLA_%3.5d_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");


        n1 =    printf(	  "BUENO: _HOLA_%5.7d_HOLA\n", 100);
        n0 =    ft_printf( "VERGA: _HOLA_%5.7d_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%-5.3d_HOLA\n", 100);
        n0 =    ft_printf( "VERGA: _HOLA_%-5.3d_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%-5.5d_HOLA\n", 100);
        n0 =    ft_printf( "VERGA: _HOLA_%-5.5d_HOLA\n", 100);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%05d_HOLA\n", 5);
        n0 =    ft_printf( "VERGA: _HOLA_%05d_HOLA\n", 5);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%d|\n", 10);
        n1 = printf(     "BUENO d |%d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%05d|\n", 10);
        n1 = printf(     "BUENO d |%05d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%.3d|\n", 10);
        n1 = printf(     "BUENO d |%.3d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%.3d|\n", 1000000);
        n1 = printf(     "BUENO d |%.3d|\n", 1000000);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%20.3d|\n", 10);
        n1 = printf(     "BUENO d |%20.3d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%-.3d|\n", 10);
        n1 = printf(     "BUENO d |%-.3d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%-4.3d|\n", 10);
        n1 = printf(     "BUENO d |%-4.3d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%-10d|\n", 10);
        n1 = printf(     "BUENO d |%-10d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%-010d|\n", 10);
        n1 = printf(     "BUENO d |%-010d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%-04.3d|\n", 10);
        n1 = printf(     "BUENO d |%-04.3d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%-4.3d|\n", 10);
        n1 = printf(     "BUENO d |%-4.3d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%4.5d|\n", 1);
        n1 = printf(     "BUENO d |%4.5d|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%04d|\n", 1);
        n1 = printf(     "BUENO d |%04d|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%4.7d|\n", 1);
        n1 = printf(     "BUENO d |%4.7d|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA d |%4.7d|\n", -1);
        n1 = printf(     "BUENO d |%4.7d|\n", -1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 =    ft_printf( "VERGA: _HOLA_%.5d_HOLA\n", -5);
        n1 =    printf(	  "BUENO: _HOLA_%.5d_HOLA\n", -5);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 =    ft_printf( "VERGA: _HOLA_%2.0d_HOLA\n", -0);
        n1 =    printf(	  "BUENO: _HOLA_%2.0d_HOLA\n", -0);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 =    ft_printf( "VERGA: _HOLA_%2.1d_HOLA\n", 0);
        n1 =    printf(	  "BUENO: _HOLA_%2.1d_HOLA\n", 0);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 = printf(     "BUENO d |%5d|\n", 10);
        n0 = ft_printf(  "VERGA d |%5d|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 =    ft_printf( "VERGA: _HOLA_%.2d_HOLA\n",  -10000);
        n1 =    printf(	  "BUENO: _HOLA_%.2d_HOLA\n",   -10000);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 =    ft_printf( "VERGA: _HOLA_%05d_HOLA\n", -5);
        n1 =    printf(	  "BUENO: _HOLA_%05d_HOLA\n", -5);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 =    ft_printf( "VERGA: _HOLA_%09d_HOLA\n",  -10000);
        n1 =    printf(	  "BUENO: _HOLA_%09d_HOLA\n",   -10000);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");
        //failed
        n0 =    ft_printf( "VERGA: _HOLA_%7d_HOLA\n",  -14);
        n1 =    printf(	  "BUENO: _HOLA_%7d_HOLA\n",   -14);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        //failed
        n0 =    ft_printf( "VERGA: _HOLA_%7d_HOLA\n",  -14);
        n1 =    printf(	  "BUENO: _HOLA_%7d_HOLA\n",   -14);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        //failed
        n0 =    ft_printf( "VERGA: _HOLA_%7.10d_HOLA\n",  14);
        n1 =    printf(	  "BUENO: _HOLA_%7.10d_HOLA\n",   14);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        //failed
        n0 =    ft_printf( "VERGA: _HOLA_%08.5d_HOLA\n",  34);
        n1 =    printf(	  "BUENO: _HOLA_%08.5d_HOLA\n",   34);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        //failed
        n0 =    ft_printf( "VERGA: _HOLA_%.0d_HOLA\n",  0);
        n1 =    printf(	  "BUENO: _HOLA_%.0d_HOLA\n",   0);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        //failed
        n0 =    ft_printf( "VERGA: _HOLA_%0.d_HOLA\n",  0);
        n1 =    printf(	  "BUENO: _HOLA_%0.d_HOLA\n",   0);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        //failed
        n0 =    ft_printf( "VERGA: _HOLA_%.d_HOLA\n",  0);
        n1 =    printf(	  "BUENO: _HOLA_%.d_HOLA\n",   0);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        //failed
        n0 =    ft_printf( "VERGA: _HOLA_%5.d_HOLA\n",  0);
        n1 =    printf(	  "BUENO: _HOLA_%5.d_HOLA\n",   0);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        //failed
        n0 =    ft_printf( "VERGA: _HOLA_%.-6i_HOLA\n", -3);
        n1 =    printf(	  "BUENO: _HOLA_%.-6i_HOLA\n", -3);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        //failed
        n0 =    ft_printf( "VERGA: _HOLA_%.*i_HOLA\n",  -6, -3);
        n1 =    printf(	  "BUENO: _HOLA_%.*i_HOLA\n",   -6, -3);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");
    }

    //----- u -----
    if (test == 'u' || test == 'a')
    {
        printf("\033[1;33m---------- u ----------\033[0m\n");

        n0 = ft_printf(  "VERGA u |%u|\n", 10);
        n1 = printf(     "BUENO u |%u|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%5u|\n", 10);
        n1 = printf(     "BUENO u |%5u|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%05u|\n", 10);
        n1 = printf(     "BUENO u |%05u|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%.3u|\n", 10);
        n1 = printf(     "BUENO u |%.3u|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%.3u|\n", 1000000);
        n1 = printf(     "BUENO u |%.3u|\n", 1000000);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%20.3u|\n", 10);
        n1 = printf(     "BUENO u |%20.3u|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%-.3u|\n", 10);
        n1 = printf(     "BUENO u |%-.3u|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%-4.3u|\n", -10);
        n1 = printf(     "BUENO u |%-4.3u|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%-10u|\n", -10);
        n1 = printf(     "BUENO u |%-10u|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%-010u|\n", -10);
        n1 = printf(     "BUENO u |%-010u|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%-04.3u|\n", -10);
        n1 = printf(     "BUENO u |%-04.3u|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%-4.3u|\n", -10);
        n1 = printf(     "BUENO u |%-4.3u|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%4.5u|\n", -1);
        n1 = printf(     "BUENO u |%4.5u|\n", -1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%04u|\n", 1);
        n1 = printf(     "BUENO u |%04u|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%4.7u|\n", 1);
        n1 = printf(     "BUENO u |%4.7u|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA u |%4.7u|\n", -1);
        n1 = printf(     "BUENO u |%4.7u|\n", -1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");
    }

    //----- p -----
    if (test == 'p' || test == 'a')
    {
        printf("\033[1;33m---------- p ----------\033[0m\n");
        char test[4] = "HOLA";
        char *a, *b, *c, *p;
        a = test; b = test; c = test; p = test;

        n1 =    printf(	  "BUENO: _HOLA_%p_HOLA\n", 456);
	    n0 =    ft_printf( "VERGA: _HOLA_%p_HOLA\n", 456);
	    printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

	    n1 =    printf(	  "BUENO: _HOLA_%15.18p_HOLA\n", p);
	    n0 =    ft_printf( "VERGA: _HOLA_%15.18p_HOLA\n", p);
	    printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

    	n1 =    printf(	  "BUENO: _HOLA_%.28p_HOLA\n", p);
    	n0 =    ft_printf( "VERGA: _HOLA_%.28p_HOLA\n", p);
    	printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

    	n1 =    printf(	  "BUENO: _HOLA_%.10p_HOLA\n", 1234);
    	n0 =    ft_printf( "VERGA: _HOLA_%.10p_HOLA\n", 1234);
    	printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

    	n1 =    printf(	  "BUENO: _HOLA_%.12p_HOLA\n", a);
    	n0 =    ft_printf( "VERGA: _HOLA_%.12p_HOLA\n", a);
    	printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");;

    	n1 =    printf(	  "BUENO: _HOLA_%2.15p_HOLA\n", b);
    	n0 =    ft_printf( "VERGA: _HOLA_%2.15p_HOLA\n", b);
    	printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

    	n1 =    printf(	  "BUENO: _HOLA_%12.3p_HOLA\n", c);
    	n0 =    ft_printf( "VERGA: _HOLA_%12.3p_HOLA\n", p);
    	printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

    	n1 =    printf(	  "BUENO: _HOLA_%12.12p_HOLA\n", p);
    	n0 =    ft_printf( "VERGA: _HOLA_%12.12p_HOLA\n", p);
    	printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

    	n1 =    printf(	  "BUENO: _HOLA_%13.5p_HOLA\n", p);
    	n0 =    ft_printf( "VERGA: _HOLA_%13.5p_HOLA\n", p);
      	printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

    	n1 =    printf(	  "BUENO: _HOLA_%13.13p_HOLA\n", p);
    	n0 =    ft_printf( "VERGA: _HOLA_%13.13p_HOLA\n", p);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

    	n1 =    printf(	  "BUENO: _HOLA_%3.15p_HOLA\n", p);
    	n0 =    ft_printf( "VERGA: _HOLA_%3.15p_HOLA\n", p);
    	printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

    	n1 =    printf(	  "BUENO: _HOLA_%15.7p_HOLA\n", p);
    	n0 =    ft_printf( "VERGA: _HOLA_%15.7p_HOLA\n", p);
    	printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

	    n1 =    printf(	  "BUENO: _HOLA_%-5.13p_HOLA\n", p);
	    n0 =    ft_printf( "VERGA: _HOLA_%-5.13p_HOLA\n", p);
    	printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

    	n1 =    printf(	  "BUENO: _HOLA_%-15.5p_HOLA\n", p);
    	n0 =    ft_printf( "VERGA: _HOLA_%-15.5p_HOLA\n", p);
	    printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

	    n1 =    printf(	  "BUENO: _HOLA_%9.2p_HOLA\n", 1234);
	    n0 =    ft_printf( "VERGA: _HOLA_%9.2p_HOLA\n", 1234);
	    printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

    	n1 =    printf(	  "BUENO: _HOLA_%9.2p_HOLA\n", 1234);
    	n0 =    ft_printf( "VERGA: _HOLA_%9.2p_HOLA\n", 1234);
    	printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %p|\n", test);
        n1 = printf(     "BUENO p | %p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %20p|\n", test);
        n1 = printf(     "BUENO p | %20p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-20p|\n", test);
        n1 = printf(     "BUENO p | %-20p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %020p|\n", test);
        n1 = printf(     "BUENO p | %020p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-.30p|\n", test);
        n1 = printf(     "BUENO p | %-.30p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %.3p|\n", test);
        n1 = printf(     "BUENO p | %.3p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %20.3p|\n", test);
        n1 = printf(     "BUENO p | %20.3p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-.3p|\n", test);
        n1 = printf(     "BUENO p | %-.3p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-4.3p|\n", test);
        n1 = printf(     "BUENO p | %-4.3p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-10p|\n", test);
        n1 = printf(     "BUENO p | %-10p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-010p|\n", test);
        n1 = printf(     "BUENO p | %-010p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-04.3p|\n", test);
        n1 = printf(     "BUENO p | %-04.3p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %-4.3p|\n", test);
        n1 = printf(     "BUENO p | %-4.3p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %p|\n", 0);
        n1 = printf(     "BUENO p | %p|\n", 0);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %p|\n", NULL);
        n1 = printf(     "BUENO p | %p|\n", NULL);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %5p|\n", NULL);
        n1 = printf(     "BUENO p | %5p|\n", NULL);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %05p|\n", NULL);
        n1 = printf(     "BUENO p | %05p|\n", NULL);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %.30p|\n", test);
        n1 = printf(     "BUENO p | %.30p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %.15p|\n", test);
        n1 = printf(     "BUENO p | %.15p|\n", test);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %.5p|\n", 0);
        n1 = printf(     "BUENO p | %.5p|\n", 0);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%12p_HOLA\n", 789);
	    n0 =    ft_printf( "VERGA: _HOLA_%12p_HOLA\n", 789);
    	printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA p | %020p|\n", 12);
        n1 = printf(     "BUENO p | %020p|\n", 12);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%.12p_HOLA\n", 789);
	    n0 =    ft_printf( "VERGA: _HOLA_%.12p_HOLA\n", 789);
    	printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "BUENO: _HOLA_%5.p_HOLA\n", 0);
	    n0 =    ft_printf( "VERGA: _HOLA_%5.p_HOLA\n", 0);
    	printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	   "%.p\n", 0) - 1;
	    n0 =    ft_printf( "%.p\n", 0) - 1;
    	printf("\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n1 =    printf(	  "%05%");
        printf("\n");
	    n0 =    ft_printf( "%05%");
        printf("\n");
    	printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");
    }

    //----- x -----
    if (test == 'x' || test == 'a')
    {
        printf("\033[1;33m---------- x ----------\033[0m\n");

        n0 = ft_printf(  "VERGA x |%x|\n", 10);
        n1 = printf(     "BUENO x |%x|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%5x|\n", 10);
        n1 = printf(     "BUENO x |%5x|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%05x|\n", 10);
        n1 = printf(     "BUENO x |%05x|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%.3x|\n", 10);
        n1 = printf(     "BUENO x |%.3x|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%.3x|\n", 1000000);
        n1 = printf(     "BUENO x |%.3x|\n", 1000000);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%20.3x|\n", 10);
        n1 = printf(     "BUENO x |%20.3x|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%-.3x|\n", 10);
        n1 = printf(     "BUENO x |%-.3x|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%-4.3x|\n", -10);
        n1 = printf(     "BUENO x |%-4.3x|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%-10x|\n", -10);
        n1 = printf(     "BUENO x |%-10x|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%-010x|\n", -10);
        n1 = printf(     "BUENO x |%-010x|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%-04.3x|\n", -10);
        n1 = printf(     "BUENO x |%-04.3x|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%-4.3x|\n", -10);
        n1 = printf(     "BUENO x |%-4.3x|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%4.5x|\n", -1);
        n1 = printf(     "BUENO x |%4.5x|\n", -1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%04x|\n", 1);
        n1 = printf(     "BUENO x |%04x|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%4.7x|\n", 1);
        n1 = printf(     "BUENO x |%4.7x|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA x |%4.7x|\n", -1);
        n1 = printf(     "BUENO x |%4.7x|\n", -1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");
    }

    //----- X -----
    if (test == 'X' || test == 'a')
    {
        printf("\033[1;33m---------- X ----------\033[0m\n");

        n0 = ft_printf(  "VERGA X |%X|\n", 10);
        n1 = printf(     "BUENO X |%X|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%5X|\n", 10);
        n1 = printf(     "BUENO X |%5X|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%05X|\n", 10);
        n1 = printf(     "BUENO X |%05X|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%.3X|\n", 10);
        n1 = printf(     "BUENO X |%.3X|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%.3X|\n", 1000000);
        n1 = printf(     "BUENO X |%.3X|\n", 1000000);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%20.3X|\n", 10);
        n1 = printf(     "BUENO X |%20.3X|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%-.3X|\n", 10);
        n1 = printf(     "BUENO X |%-.3X|\n", 10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%-4.3X|\n", -10);
        n1 = printf(     "BUENO X |%-4.3X|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%-10X|\n", -10);
        n1 = printf(     "BUENO X |%-10X|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%-010X|\n", -10);
        n1 = printf(     "BUENO X |%-010X|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%-04.3X|\n", -10);
        n1 = printf(     "BUENO X |%-04.3X|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%-4.3X|\n", -10);
        n1 = printf(     "BUENO X |%-4.3X|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%4.5X|\n", -1);
        n1 = printf(     "BUENO X |%4.5X|\n", -1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%04X|\n", 1);
        n1 = printf(     "BUENO X |%04X|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%4.7X|\n", 1);
        n1 = printf(     "BUENO X |%4.7X|\n", 1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%4.7X|\n", -1);
        n1 = printf(     "BUENO X |%4.7X|\n", -1);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");

        n0 = ft_printf(  "VERGA X |%4.7X|\n", -10);
        n1 = printf(     "BUENO X |%4.7X|\n", -10);
        printf(n0 == n1 ? "\033[0;32mOK\033[0m" : "\033[0;31mKO: V:%d B:%d\033[0m", n0, n1);
        error = n0 == n1 ? error : error + 1;
        printf("\n\n");
    }

    printf(!error ? "\033[0;32mSuccess!\033[0m" : "\033[0;31mErrors found: %d\033[0m", error);
    printf("\n");
    return (0);
}
