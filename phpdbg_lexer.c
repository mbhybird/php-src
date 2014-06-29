/* Generated by re2c 0.13.5 */
#line 1 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
/*
 * phpdbg_lexer.l
 */

#include "phpdbg.h"
#include "phpdbg_cmd.h"

#include "phpdbg_parser.h"

#define LEX(v) (PHPDBG_G(lexer).v)

#define YYCTYPE unsigned char
#define YYSETCONDITION(x) LEX(state) = x;
#define YYGETCONDITION() LEX(state)
#define YYCURSOR LEX(cursor)
#define YYMARKER LEX(marker)
#define yyleng LEX(len)
#define yytext ((char*) LEX(text))
#undef YYDEBUG
#define YYDEBUG(a, b)
#define YYFILL(n)

#define NORMAL 0
#define RAW 1
#define INITIAL 2

ZEND_EXTERN_MODULE_GLOBALS(phpdbg);

void phpdbg_init_lexer (phpdbg_param_t *stack, char *input TSRMLS_DC) {
	PHPDBG_G(parser_stack) = stack;

	YYSETCONDITION(INITIAL);

	LEX(text) = YYCURSOR = (unsigned char *) input;
	LEX(len) = strlen(input);
}

int phpdbg_lex (phpdbg_param_t* yylval) {
	TSRMLS_FETCH(); /* Slow, but this is not a major problem here. TODO: Use TSRMLS_DC */

restart:
	LEX(text) = YYCURSOR;


#line 48 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if (YYGETCONDITION() < 1) {
		goto yyc_NORMAL;
	} else {
		if (YYGETCONDITION() < 2) {
			goto yyc_RAW;
		} else {
			goto yyc_INITIAL;
		}
	}
/* *********************************** */
yyc_INITIAL:
	{
		static const unsigned char yybm[] = {
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0, 128, 128,   0,   0, 128,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			128,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
			  0,   0,   0,   0,   0,   0,   0,   0, 
		};

		YYDEBUG(0, *YYCURSOR);
		YYFILL(4);
		yych = *YYCURSOR;
		if (yych <= 'D') {
			if (yych <= '\n') {
				if (yych <= 0x00) goto yy6;
				if (yych <= 0x08) goto yy11;
				if (yych >= '\n') goto yy4;
			} else {
				if (yych <= '\r') {
					if (yych <= '\f') goto yy11;
				} else {
					if (yych != ' ') goto yy11;
				}
			}
		} else {
			if (yych <= 'd') {
				if (yych <= 'Q') {
					if (yych <= 'E') goto yy7;
					goto yy11;
				} else {
					if (yych <= 'R') goto yy10;
					if (yych <= 'S') goto yy8;
					goto yy11;
				}
			} else {
				if (yych <= 'q') {
					if (yych <= 'e') goto yy7;
					goto yy11;
				} else {
					if (yych <= 'r') goto yy9;
					if (yych <= 's') goto yy8;
					goto yy11;
				}
			}
		}
		YYDEBUG(2, *YYCURSOR);
		++YYCURSOR;
		if ((yych = *YYCURSOR) <= '\f') {
			if (yych <= 0x08) goto yy3;
			if (yych <= '\n') goto yy26;
		} else {
			if (yych <= '\r') goto yy26;
			if (yych == ' ') goto yy26;
		}
yy3:
		YYDEBUG(3, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 161 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(NORMAL);

	YYCURSOR = LEX(text);
	goto restart;
}
#line 154 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy4:
		YYDEBUG(4, *YYCURSOR);
		++YYCURSOR;
		if ((yych = *YYCURSOR) <= '\f') {
			if (yych <= 0x08) goto yy5;
			if (yych <= '\n') goto yy26;
		} else {
			if (yych <= '\r') goto yy26;
			if (yych == ' ') goto yy26;
		}
yy5:
		YYDEBUG(5, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 68 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	return 0;
}
#line 172 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy6:
		YYDEBUG(6, *YYCURSOR);
		yych = *++YYCURSOR;
		goto yy3;
yy7:
		YYDEBUG(7, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'V') goto yy22;
		if (yych == 'v') goto yy22;
		goto yy3;
yy8:
		YYDEBUG(8, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'H') goto yy18;
		if (yych == 'h') goto yy18;
		goto yy3;
yy9:
		YYDEBUG(9, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yybm[0+yych] & 128) {
			goto yy15;
		}
		if (yych == 'U') goto yy12;
		if (yych == 'u') goto yy12;
		goto yy3;
yy10:
		YYDEBUG(10, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'U') goto yy12;
		if (yych == 'u') goto yy12;
		goto yy3;
yy11:
		YYDEBUG(11, *YYCURSOR);
		yych = *++YYCURSOR;
		goto yy3;
yy12:
		YYDEBUG(12, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych == 'N') goto yy14;
		if (yych == 'n') goto yy14;
yy13:
		YYDEBUG(13, *YYCURSOR);
		YYCURSOR = YYMARKER;
		goto yy3;
yy14:
		YYDEBUG(14, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yybm[0+yych] & 128) {
			goto yy15;
		}
		goto yy13;
yy15:
		YYDEBUG(15, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(16, *YYCURSOR);
		if (yybm[0+yych] & 128) {
			goto yy15;
		}
		YYDEBUG(17, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 155 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(RAW);
	phpdbg_init_param(yylval, EMPTY_PARAM);
	return T_RUN;
}
#line 245 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy18:
		YYDEBUG(18, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych <= '\f') {
			if (yych <= 0x08) goto yy13;
			if (yych >= '\v') goto yy13;
		} else {
			if (yych <= '\r') goto yy19;
			if (yych != ' ') goto yy13;
		}
yy19:
		YYDEBUG(19, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(20, *YYCURSOR);
		if (yych <= '\f') {
			if (yych <= 0x08) goto yy21;
			if (yych <= '\n') goto yy19;
		} else {
			if (yych <= '\r') goto yy19;
			if (yych == ' ') goto yy19;
		}
yy21:
		YYDEBUG(21, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 150 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(RAW);
	phpdbg_init_param(yylval, EMPTY_PARAM);
	return T_SHELL;
}
#line 278 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy22:
		YYDEBUG(22, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych <= '\f') {
			if (yych <= 0x08) goto yy13;
			if (yych >= '\v') goto yy13;
		} else {
			if (yych <= '\r') goto yy23;
			if (yych != ' ') goto yy13;
		}
yy23:
		YYDEBUG(23, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(24, *YYCURSOR);
		if (yych <= '\f') {
			if (yych <= 0x08) goto yy25;
			if (yych <= '\n') goto yy23;
		} else {
			if (yych <= '\r') goto yy23;
			if (yych == ' ') goto yy23;
		}
yy25:
		YYDEBUG(25, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 145 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(RAW);
	phpdbg_init_param(yylval, EMPTY_PARAM);
	return T_EVAL;
}
#line 311 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy26:
		YYDEBUG(26, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(27, *YYCURSOR);
		if (yych <= '\f') {
			if (yych <= 0x08) goto yy28;
			if (yych <= '\n') goto yy26;
		} else {
			if (yych <= '\r') goto yy26;
			if (yych == ' ') goto yy26;
		}
yy28:
		YYDEBUG(28, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 139 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	/* ignore whitespace */

	goto restart;
}
#line 334 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
	}
/* *********************************** */
yyc_NORMAL:
	{
		static const unsigned char yybm[] = {
			  0,  16,  16,  16,  16,  16,  16,  16, 
			 16,   8,   8,  16,  16,   8,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			  8,  16,  16,   0,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  48,  16, 
			176, 176, 176, 176, 176, 176, 176, 176, 
			176, 176,   0,  16,  16,  16,  16,  16, 
			 16, 208, 208, 208, 208, 208, 208,  80, 
			 80,  80,  80,  80,  80,  80,  80,  80, 
			 80,  80,  80,  80,  80,  80,  80,  80, 
			 80,  80,  80,  16,  16,  16,  16,  16, 
			 16, 208, 208, 208, 208, 208, 208,  80, 
			 80,  80,  80,  80,  80,  80,  80,  80, 
			 80,  80,  80,  80,  80,  80,  80,  80, 
			 80,  80,  80,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
			 16,  16,  16,  16,  16,  16,  16,  16, 
		};
		YYDEBUG(29, *YYCURSOR);
		YYFILL(11);
		yych = *YYCURSOR;
		YYDEBUG(-1, yych);
		switch (yych) {
		case 0x00:	goto yy36;
		case '\t':
		case '\r':
		case ' ':	goto yy31;
		case '\n':	goto yy34;
		case '#':	goto yy54;
		case '.':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':	goto yy41;
		case '0':	goto yy44;
		case ':':	goto yy56;
		case 'D':
		case 'd':	goto yy45;
		case 'E':
		case 'e':	goto yy46;
		case 'F':
		case 'f':	goto yy47;
		case 'I':
		case 'i':	goto yy37;
		case 'N':
		case 'n':	goto yy48;
		case 'O':
		case 'o':	goto yy49;
		case 'T':
		case 't':	goto yy50;
		case 'Y':
		case 'y':	goto yy51;
		case 'Z':	goto yy52;
		case 'z':	goto yy53;
		default:	goto yy39;
		}
yy31:
		YYDEBUG(31, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(32, *YYCURSOR);
		if (yybm[0+yych] & 8) {
			goto yy31;
		}
		YYDEBUG(33, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 139 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	/* ignore whitespace */

	goto restart;
}
#line 433 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy34:
		YYDEBUG(34, *YYCURSOR);
		++YYCURSOR;
		if (yybm[0+(yych = *YYCURSOR)] & 8) {
			goto yy31;
		}
yy35:
		YYDEBUG(35, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 68 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	return 0;
}
#line 447 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy36:
		YYDEBUG(36, *YYCURSOR);
		yych = *++YYCURSOR;
		goto yy35;
yy37:
		YYDEBUG(37, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'F') goto yy105;
		if (yych == 'f') goto yy105;
		goto yy40;
yy38:
		YYDEBUG(38, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 125 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, STR_PARAM);
	yylval->str = zend_strndup(yytext, yyleng);
	yylval->len = yyleng;
	return T_ID; 
}
#line 469 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy39:
		YYDEBUG(39, *YYCURSOR);
		yyaccept = 0;
		YYMARKER = ++YYCURSOR;
		YYFILL(3);
		yych = *YYCURSOR;
yy40:
		YYDEBUG(40, *YYCURSOR);
		if (yybm[0+yych] & 16) {
			goto yy39;
		}
		if (yych <= '9') goto yy38;
		goto yy61;
yy41:
		YYDEBUG(41, *YYCURSOR);
		yyaccept = 1;
		YYMARKER = ++YYCURSOR;
		YYFILL(3);
		yych = *YYCURSOR;
		YYDEBUG(42, *YYCURSOR);
		if (yybm[0+yych] & 32) {
			goto yy41;
		}
		if (yych <= 0x1F) {
			if (yych <= '\n') {
				if (yych <= 0x00) goto yy43;
				if (yych <= 0x08) goto yy39;
			} else {
				if (yych != '\r') goto yy39;
			}
		} else {
			if (yych <= '#') {
				if (yych <= ' ') goto yy43;
				if (yych <= '"') goto yy39;
			} else {
				if (yych == ':') goto yy61;
				goto yy39;
			}
		}
yy43:
		YYDEBUG(43, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 106 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, NUMERIC_PARAM);
	yylval->num = atoi(yytext);
	return T_DIGITS;
}
#line 518 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy44:
		YYDEBUG(44, *YYCURSOR);
		yyaccept = 1;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yybm[0+yych] & 32) {
			goto yy41;
		}
		if (yych <= 0x1F) {
			if (yych <= '\n') {
				if (yych <= 0x00) goto yy43;
				if (yych <= 0x08) goto yy40;
				goto yy43;
			} else {
				if (yych == '\r') goto yy43;
				goto yy40;
			}
		} else {
			if (yych <= '#') {
				if (yych <= ' ') goto yy43;
				if (yych <= '"') goto yy40;
				goto yy43;
			} else {
				if (yych == 'x') goto yy101;
				goto yy40;
			}
		}
yy45:
		YYDEBUG(45, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'I') goto yy95;
		if (yych == 'i') goto yy95;
		goto yy40;
yy46:
		YYDEBUG(46, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'N') goto yy90;
		if (yych == 'n') goto yy90;
		goto yy40;
yy47:
		YYDEBUG(47, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'A') goto yy87;
		if (yych == 'a') goto yy87;
		goto yy40;
yy48:
		YYDEBUG(48, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'O') goto yy83;
		if (yych == 'o') goto yy83;
		goto yy40;
yy49:
		YYDEBUG(49, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych <= 'N') {
			if (yych == 'F') goto yy82;
			if (yych <= 'M') goto yy40;
			goto yy76;
		} else {
			if (yych <= 'f') {
				if (yych <= 'e') goto yy40;
				goto yy82;
			} else {
				if (yych == 'n') goto yy76;
				goto yy40;
			}
		}
yy50:
		YYDEBUG(50, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'R') goto yy80;
		if (yych == 'r') goto yy80;
		goto yy40;
yy51:
		YYDEBUG(51, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'E') goto yy75;
		if (yych == 'e') goto yy75;
		goto yy40;
yy52:
		YYDEBUG(52, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'E') goto yy72;
		goto yy40;
yy53:
		YYDEBUG(53, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'e') goto yy60;
		goto yy40;
yy54:
		YYDEBUG(54, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(55, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 84 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	return T_POUND;
}
#line 625 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy56:
		YYDEBUG(56, *YYCURSOR);
		++YYCURSOR;
		if ((yych = *YYCURSOR) == ':') goto yy58;
		YYDEBUG(57, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 90 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	return T_COLON;
}
#line 636 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy58:
		YYDEBUG(58, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(59, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 87 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	return T_DCOLON;
}
#line 646 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy60:
		YYDEBUG(60, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'n') goto yy66;
		goto yy40;
yy61:
		YYDEBUG(61, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych == '/') goto yy63;
yy62:
		YYDEBUG(62, *YYCURSOR);
		YYCURSOR = YYMARKER;
		if (yyaccept <= 1) {
			if (yyaccept <= 0) {
				goto yy38;
			} else {
				goto yy43;
			}
		} else {
			if (yyaccept <= 2) {
				goto yy71;
			} else {
				goto yy104;
			}
		}
yy63:
		YYDEBUG(63, *YYCURSOR);
		yych = *++YYCURSOR;
		if (yych != '/') goto yy62;
		YYDEBUG(64, *YYCURSOR);
		++YYCURSOR;
		YYDEBUG(65, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 78 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, STR_PARAM);
	yylval->str = zend_strndup(yytext, yyleng);
	yylval->len = yyleng;
	return T_PROTO;
}
#line 688 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy66:
		YYDEBUG(66, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'd') goto yy40;
		YYDEBUG(67, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != '_') goto yy40;
yy68:
		YYDEBUG(68, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yybm[0+yych] & 64) {
			goto yy69;
		}
		goto yy40;
yy69:
		YYDEBUG(69, *YYCURSOR);
		yyaccept = 2;
		YYMARKER = ++YYCURSOR;
		YYFILL(3);
		yych = *YYCURSOR;
		YYDEBUG(70, *YYCURSOR);
		if (yybm[0+yych] & 64) {
			goto yy69;
		}
		if (yych <= 0x1F) {
			if (yych <= '\n') {
				if (yych <= 0x00) goto yy71;
				if (yych <= 0x08) goto yy39;
			} else {
				if (yych != '\r') goto yy39;
			}
		} else {
			if (yych <= '#') {
				if (yych <= ' ') goto yy71;
				if (yych <= '"') goto yy39;
			} else {
				if (yych == ':') goto yy61;
				goto yy39;
			}
		}
yy71:
		YYDEBUG(71, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 118 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, OP_PARAM);
	yylval->str = zend_strndup(yytext, yyleng);
	yylval->len = yyleng;
	return T_OPCODE;
}
#line 742 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy72:
		YYDEBUG(72, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'N') goto yy40;
		YYDEBUG(73, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych != 'D') goto yy40;
		YYDEBUG(74, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == '_') goto yy68;
		goto yy40;
yy75:
		YYDEBUG(75, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'S') goto yy76;
		if (yych != 's') goto yy40;
yy76:
		YYDEBUG(76, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych <= '\f') {
			if (yych <= 0x08) goto yy40;
			if (yych >= '\v') goto yy40;
		} else {
			if (yych <= '\r') goto yy77;
			if (yych != ' ') goto yy40;
		}
yy77:
		YYDEBUG(77, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(78, *YYCURSOR);
		if (yych <= '\f') {
			if (yych <= 0x08) goto yy79;
			if (yych <= '\n') goto yy77;
		} else {
			if (yych <= '\r') goto yy77;
			if (yych == ' ') goto yy77;
		}
yy79:
		YYDEBUG(79, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 94 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, NUMERIC_PARAM);
	yylval->num = 1;		
	return T_TRUTHY;
}
#line 796 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy80:
		YYDEBUG(80, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'U') goto yy81;
		if (yych != 'u') goto yy40;
yy81:
		YYDEBUG(81, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'E') goto yy76;
		if (yych == 'e') goto yy76;
		goto yy40;
yy82:
		YYDEBUG(82, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'F') goto yy83;
		if (yych != 'f') goto yy40;
yy83:
		YYDEBUG(83, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych <= '\f') {
			if (yych <= 0x08) goto yy40;
			if (yych >= '\v') goto yy40;
		} else {
			if (yych <= '\r') goto yy84;
			if (yych != ' ') goto yy40;
		}
yy84:
		YYDEBUG(84, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(85, *YYCURSOR);
		if (yych <= '\f') {
			if (yych <= 0x08) goto yy86;
			if (yych <= '\n') goto yy84;
		} else {
			if (yych <= '\r') goto yy84;
			if (yych == ' ') goto yy84;
		}
yy86:
		YYDEBUG(86, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 100 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, NUMERIC_PARAM);
	yylval->num = 0;
	return T_FALSY;
}
#line 849 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy87:
		YYDEBUG(87, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'L') goto yy88;
		if (yych != 'l') goto yy40;
yy88:
		YYDEBUG(88, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'S') goto yy89;
		if (yych != 's') goto yy40;
yy89:
		YYDEBUG(89, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'E') goto yy83;
		if (yych == 'e') goto yy83;
		goto yy40;
yy90:
		YYDEBUG(90, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'A') goto yy91;
		if (yych != 'a') goto yy40;
yy91:
		YYDEBUG(91, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'B') goto yy92;
		if (yych != 'b') goto yy40;
yy92:
		YYDEBUG(92, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'L') goto yy93;
		if (yych != 'l') goto yy40;
yy93:
		YYDEBUG(93, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'E') goto yy94;
		if (yych != 'e') goto yy40;
yy94:
		YYDEBUG(94, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'D') goto yy76;
		if (yych == 'd') goto yy76;
		goto yy40;
yy95:
		YYDEBUG(95, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'S') goto yy96;
		if (yych != 's') goto yy40;
yy96:
		YYDEBUG(96, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'A') goto yy97;
		if (yych != 'a') goto yy40;
yy97:
		YYDEBUG(97, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'B') goto yy98;
		if (yych != 'b') goto yy40;
yy98:
		YYDEBUG(98, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'L') goto yy99;
		if (yych != 'l') goto yy40;
yy99:
		YYDEBUG(99, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'E') goto yy100;
		if (yych != 'e') goto yy40;
yy100:
		YYDEBUG(100, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych == 'D') goto yy83;
		if (yych == 'd') goto yy83;
		goto yy40;
yy101:
		YYDEBUG(101, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yybm[0+yych] & 128) {
			goto yy102;
		}
		goto yy40;
yy102:
		YYDEBUG(102, *YYCURSOR);
		yyaccept = 3;
		YYMARKER = ++YYCURSOR;
		YYFILL(3);
		yych = *YYCURSOR;
		YYDEBUG(103, *YYCURSOR);
		if (yybm[0+yych] & 128) {
			goto yy102;
		}
		if (yych <= 0x1F) {
			if (yych <= '\n') {
				if (yych <= 0x00) goto yy104;
				if (yych <= 0x08) goto yy39;
			} else {
				if (yych != '\r') goto yy39;
			}
		} else {
			if (yych <= '#') {
				if (yych <= ' ') goto yy104;
				if (yych <= '"') goto yy39;
			} else {
				if (yych == ':') goto yy61;
				goto yy39;
			}
		}
yy104:
		YYDEBUG(104, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 112 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, ADDR_PARAM);
	yylval->addr = strtoul(yytext, 0, 16);
	return T_ADDR;
}
#line 980 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy105:
		YYDEBUG(105, *YYCURSOR);
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if (yych <= '\f') {
			if (yych <= 0x08) goto yy40;
			if (yych >= '\v') goto yy40;
		} else {
			if (yych <= '\r') goto yy106;
			if (yych != ' ') goto yy40;
		}
yy106:
		YYDEBUG(106, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(107, *YYCURSOR);
		if (yych <= '\f') {
			if (yych <= 0x08) goto yy108;
			if (yych <= '\n') goto yy106;
		} else {
			if (yych <= '\r') goto yy106;
			if (yych == ' ') goto yy106;
		}
yy108:
		YYDEBUG(108, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 72 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	YYSETCONDITION(RAW);
	phpdbg_init_param(yylval, EMPTY_PARAM);
	return T_IF;
}
#line 1014 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
	}
/* *********************************** */
yyc_RAW:
	{
		static const unsigned char yybm[] = {
			  0,  64,  64,  64,  64,  64,  64,  64, 
			 64, 224, 128,  64,  64, 224,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			224,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
			 64,  64,  64,  64,  64,  64,  64,  64, 
		};
		YYDEBUG(109, *YYCURSOR);
		YYFILL(2);
		yych = *YYCURSOR;
		if (yybm[0+yych] & 32) {
			goto yy111;
		}
		if (yych <= 0x00) goto yy116;
		if (yych == '\n') goto yy114;
		goto yy117;
yy111:
		YYDEBUG(111, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(112, *YYCURSOR);
		if (yybm[0+yych] & 32) {
			goto yy111;
		}
		if (yych <= 0x00) goto yy113;
		if (yych == '\n') goto yy119;
		goto yy117;
yy113:
		YYDEBUG(113, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 132 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	phpdbg_init_param(yylval, STR_PARAM);
	yylval->str = zend_strndup(yytext, yyleng);
	yylval->len = yyleng;
	return T_INPUT;
}
#line 1084 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy114:
		YYDEBUG(114, *YYCURSOR);
		++YYCURSOR;
		if (yybm[0+(yych = *YYCURSOR)] & 128) {
			goto yy119;
		}
yy115:
		YYDEBUG(115, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 68 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	return 0;
}
#line 1098 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
yy116:
		YYDEBUG(116, *YYCURSOR);
		yych = *++YYCURSOR;
		goto yy115;
yy117:
		YYDEBUG(117, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(118, *YYCURSOR);
		if (yybm[0+yych] & 64) {
			goto yy117;
		}
		goto yy113;
yy119:
		YYDEBUG(119, *YYCURSOR);
		++YYCURSOR;
		YYFILL(1);
		yych = *YYCURSOR;
		YYDEBUG(120, *YYCURSOR);
		if (yybm[0+yych] & 128) {
			goto yy119;
		}
		YYDEBUG(121, *YYCURSOR);
		yyleng = (size_t) YYCURSOR - (size_t) yytext;
#line 139 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"
		{
	/* ignore whitespace */

	goto restart;
}
#line 1130 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.c"
	}
}
#line 168 "/var/root/php-src/sapi/phpdbg/phpdbg_lexer.l"

}
