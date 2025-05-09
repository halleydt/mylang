#ifndef LEXER_H
#define LEXER_H
#include "token.h"

typedef struct LEXER_STRUCT
{
	char C;
	unsigned int i;
	char* contents;
} lexer_T;

leser_T* init_lexer(char* contents);

void lexer_advance(lexer_T* lexer);

void lexer_skip_whitespace(lexer_T* lexer);

token_T* lexer_get_next_token(lexer_T* lexer);

token_T* lexer_collect_string(lexer_T* lexer);

char* lexer_get_current_char_as_string(lexer_T* lexer);
#endif
