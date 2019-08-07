//
//  token.h
//  Calc
//
//  Created by uniwow on 2019/8/6.
//  Copyright © 2019年 uniwow. All rights reserved.
//

#ifndef token_h
#define token_h
typedef enum {
    
    BAD_TOKEN,
    NUMBER_TOKEN,
    ADD_OPERATION_TOKEN,
    SUB_OPERATION_TOKEN,
    MUL_OPERATION_TOKEN,
    DIV_OPERATION_TOKEN,
    LEFT_PAREN_TOKEN,
    RIGHT_PAREN_TOKEN,
    END_OF_LINE_TOKEN
} TokenKind;

#define MAX_TOKEN_SIZE (100)


typedef struct {
    TokenKind kind;
    double value;
    char str[MAX_TOKEN_SIZE];
} Token;


void set_line(char *line);
void get_token(Token *token);



#endif /* token_h */
