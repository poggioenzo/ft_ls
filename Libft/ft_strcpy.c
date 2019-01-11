/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: simrossi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/16 08:22:58 by simrossi     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/27 14:59:58 by simrossi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	int index;

	index = 0;
	while (*src)
		*(dest + index++) = *(src++);
	*(dest + index) = '\0';
	return (dest);
}
