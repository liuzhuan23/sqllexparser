#include "sql-tokenizer.h"
#include <stdio.h>
#include <string.h>

int main(int argc , char ** argv)
{
  GPtrArray * tokens = sql_tokens_new();
  char * sql = " select   username from   customer   where userid=1";
  sql_tokenizer(tokens , sql , strlen(sql));

  int k0 = 0;
  char strBuffer[1024] = {0};
  int offset = 0;
  for (k0 = 0; k0 < tokens->len; k0++) 
  {
    sql_token *token = tokens->pdata[k0];

    sql_token_id id = sql_token_get_id_len(token->text->str , strlen(token->text->str));

    char key_f[256] = {0};
	char key_t[256] = {0};
	char value[1024] = {0};
	char cmd[32] = {0};
    if (id == TK_SQL_SELECT)
    {
      offset += sprintf(strBuffer + offset , "get ");
    }
    else if (id == TK_LITERAL)
    {
      offset += sprintf(strBuffer + offset , "%s" , token->text->str);
    }
	else if (id == TK_SQL_FROM)
	{
	  offset += sprintf(strBuffer + offset , "|");
	}
	else if (id == TK_SQL_WHERE)
	{
	  offset += sprintf(strBuffer + offset , "|");
	}
  }

  g_debug("parsed sql:%s\n" , strBuffer);

  sql_tokens_free(tokens);
  
  return 0;
}

