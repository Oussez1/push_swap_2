/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouya <obouya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 09:51:48 by obouya            #+#    #+#             */
/*   Updated: 2023/03/05 16:38:02 by obouya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main()
{
	t_list	**head;
	t_list	*current;
	t_list *tst;

	head = malloc(sizeof(t_list *));
	*head = malloc(sizeof(t_list));
	current = malloc(sizeof(t_list));
	(*head)->content = 45;
	(*head)->next = 0;
	current->content = 98;
	current->next = 0;
	(*head)->next = current;
	tst = *head;
	while ((tst) != 0)
	{
	//printf("\tNode address:\t %p", (void *)tst);
    //printf("\tNext address:\t %p", (void *)tst->next);
		printf("----> %d", (tst)->content);
		(tst) = (tst)->next;
	}
}

// int main()
// {
//     t_list  **head;
//     t_list  *current;
//     t_list  *tst;

//     head = malloc(sizeof(t_list *));
//     *head = malloc(sizeof(t_list));
//     current = malloc(sizeof(t_list));

//     (*head)->content = 45;
//     (*head)->next = 0;

//     current->content = 98;
//     current->next = 0;

//     (*head)->next = current;

//     tst = *head;
//     while (tst != 0)
//     {
//         printf("Node address: %p\n", (void *)tst);
//         printf("Next address: %p\n", (void *)tst->next);
//         printf("Content: %d\n", tst->content);
//         tst = tst->next;
//     }

//     free(*head);
//     free(head);
//     free(current);

//     return 0;
// }
