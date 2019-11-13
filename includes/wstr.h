/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wstr.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:56:18 by mapandel          #+#    #+#             */
/*   Updated: 2019/11/13 23:48:53 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WSTR_H
# define WSTR_H

# include <stdlib.h>

wchar_t		*ft_wstradd(wchar_t const *ws1, wchar_t wc);
wchar_t		*ft_wstradd_leakless(wchar_t *ws1, wchar_t wc);
wchar_t		*ft_wstrbuffer(wchar_t *ws);
wchar_t		*ft_wstrbuffer_leakless(wchar_t *ws);
wchar_t		*ft_wstrcat(wchar_t *dest, const wchar_t *src);
wchar_t		*ft_wstrcat_nullcrashless(wchar_t *dest, const wchar_t *src);
void		ft_wstrclr(wchar_t *ws);
wchar_t		*ft_wstrcpy(wchar_t *dest, const wchar_t *src);
wchar_t		*ft_wstrcpy_nullcrashless(wchar_t *dest, const wchar_t *src);
void		ft_wstrdel(wchar_t **as);
wchar_t		*ft_wstrdup(const wchar_t *ws);
wchar_t		*ft_wstrfill(wchar_t *ws, wchar_t wc, size_t size);
wchar_t		*ft_wstrjoin(wchar_t const *s1, wchar_t const *s2);
wchar_t		*ft_wstrjoin_leakless(wchar_t *s1, wchar_t const *s2);
size_t		ft_wstrlen(const wchar_t *ws);
size_t		ft_wstrlen_nullcrashless(const wchar_t *ws);
size_t		ft_wstrlenuni(const wchar_t *ws);
wchar_t		*ft_wstrnew(size_t size);
wchar_t		*ft_wstrsub_leakless(wchar_t *ws, unsigned int start, size_t len);
wchar_t		*ft_wstrsub(const wchar_t *ws, unsigned int start, size_t len);
wchar_t		*ft_wstrsubuni_leakless(wchar_t *ws, unsigned int start,
	size_t len);
wchar_t		*ft_wstrsubuni(const wchar_t *ws, unsigned int start, size_t len);

#endif
