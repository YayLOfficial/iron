#pragma once

struct Token {
	void * value;
	enum type_t {
		TOKEN_ID,
		TOKEN_TYPE,
		TOKEN_DEF,
		TOKEN_SEMI,
		TOKEN_LPAREN,
		TOKEN_RPAREN,
		TOKEN_LBRACE,
		TOKEN_RBRACE,
		TOKEN_LBRACKET,
		TOKEN_RBRACKET,
		TOKEN_COLON,
		TOKEN_COMMA,
		TOKEN_CALL,
		TOKEN_EQUALS,
		TOKEN_LT,
		TOKEN_GT,
		TOKEN_INT,
		TOKEN_STRING,
		TOKEN_OP,
		TOKEN_COMMENT,
		TOKEN_EOF,
	} type;
};

struct Token * init_token(char *, int);
const char* token_type_to_str(int);
char* token_to_str(struct Token *);
