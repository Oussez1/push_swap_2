/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouya <obouya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 22:06:56 by obouya            #+#    #+#             */
/*   Updated: 2023/03/05 18:19:26 by obouya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **stack_a, int r_a)
{

	t_list *first = *stack_a;
	if (!first || !first->next)
		return;
	*stack_a = first->next;
	first->next = NULL;
	ft_lstadd_back(stack_a, first);
	if (r_a == 1)
		write(1, "ra\n", 3);
}

void	rb(t_list **stack_b, int r_b)
{

	t_list *first = *stack_b;
	if (!first || !first->next)
		return;
	*stack_b = first->next;
	first->next = NULL;
	ft_lstadd_back(stack_b, first);
	if (r_b == 1)
		write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	write(1, "rr\n", 3);
}

void rra(t_list **stack_a, int r_ra)
{
	t_list *last = *stack_a;
	t_list *second_last = NULL;

	if (!last || !last->next)
		return;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	ft_lstadd_front(stack_a, last);
	if (r_ra)
		write(1, "rra\n", 4);
}
void rrb(t_list **stack_b, int r_rb)
{
	t_list *last = *stack_b;
	t_list *second_last = NULL;

	if (!last || !last->next)
		return;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	ft_lstadd_front(stack_b, last);
	if (r_rb)
		write(1, "rra\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	write(1, "rr\n", 3);
}