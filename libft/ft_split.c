/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:40:33 by yuknakas          #+#    #+#             */
/*   Updated: 2024/11/22 15:17:25 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	yn_countsegment(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
	}
	return (count);
}

static char	**yn_freeall(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	int		seglen;
	char	**arr;
	char	**start;

	arr = malloc((yn_countsegment(str, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	start = arr;
	while (*str != '\0')
	{
		while (*str == c)
			str++;
		if (*str == '\0')
			break ;
		seglen = 0;
		while (str[seglen] != c && str[seglen] != '\0')
			seglen++;
		*arr = ft_substr(str, 0, seglen);
		if (*arr == NULL)
			return (yn_freeall(start));
		str += seglen;
		arr++;
	}
	*arr = NULL;
	return (start);
}

// #include <stdio.h>
// int main()
// {
// 	char arr[] = "   Hello World! This  is 42 tokyo     .  ";
// 	char **ans = ft_split(arr, ' ');

// 		char **temp = ans;
// 	while (*temp != NULL)
// 	{
// 		printf("%s\n", *temp);
// 		free(*temp);
// 		temp++;
// 	}
// 	free(ans);
// }