#ifndef IRON_TOKEN_H
#define IRON_TOKEN_H

typedef struct TOKEN_STRUCT {
	char* value;
	enum type_t {
		TOKEN_ID,
		TOKEN_TYPE,
		TOKEN_DEF,
		TOKEN_SEMI,
		TOKEN_LPAREN,
		TOKEN_RPAREN,
		TOKEN_LBRACE,
		TOKEN_RBRACE,
		TOKEN_COLON,
		TOKEN_COMMA,
		TOKEN_CALL,
		TOKEN_EQUALS,
		TOKEN_LT,
		TOKEN_GT,
		TOKEN_NUMBER,
		TOKEN_STRING,
		TOKEN_OP,
		TOKEN_COMMENT,
		TOKEN_EOF,
	} type;
} token_t;

token_t* init_token(char* value, int type);
const char* token_type_to_str(int type);
char* token_to_str(token_t* token);

#endif