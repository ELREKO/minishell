#include "minishell.h"

char	*ret_exit_err(bool exit, char *err_msg)
{
	char	*ret;

	if (exit)
	{
		printf("🚪exit🚪\n");
		ret = use_strdup(EXIT, err_msg);
	}
	else
		ret = NULL;
	return (ret);
}
