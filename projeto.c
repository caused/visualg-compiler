#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int startsWith(const char *a, const char *b)
{
   if(strncmp(a, b, strlen(b)) == 0) return 1;
   return 0;
}


char *leitorLexico(char str[],int *p) {
  int i = *p;

	goto Q0;

	Q0:
	    i++;       	
	    if (isdigit(str[i])){
	        goto Q137;
	    } else if(str[i] == 's'){
		    goto Q52;
	    } else if (str[i] == 'e'){
	   	    goto Q8;
	    } else if (str[i] == 'l'){
	        goto Q18;
	    } else if (str[i] == 'p'){
	        goto Q61;
        } else if (str[i] == 'a'){
	        goto Q67;
	    } else if (str[i] == 'm'){
	        goto Q5;
	    } else if (str[i] == 'i'){
	        goto Q11;
	    } else if (str[i] == 'd'){
	        goto Q65;
	    } else if (str[i] == 'f'){
	        goto Q24;
	    } else if (str[i] == 'o'){
	        goto Q112;
	    } else if (str[i] == 'v'){
	        goto Q29;
	    } else if (str[i] == '='){
	        goto Q11;
	    } else if (str[i] == '\\'){
	        goto Q126;
	    } else if (str[i] == '>'){
	        goto Q2;
	    } else if (str[i] == '<'){
			goto Q4;
		} else if (str[i] == '*'){
			goto Q125;
		} else if (str[i] == '-'){
			goto Q121;
		} else if (str[i] == '+'){
			goto Q1;
		} else  if (str[i] == '\"'){
			goto Q123;    
		} else if(str[i] == ':'){
			goto Q124;
		} else if(str[i] == ','){
			goto Q119;
		} else if(str[i] == '('){
			goto Q138;
		} else if(str[i] == ')'){
			goto Q139;
		} else if(str[i] == ';'){
			goto Q140;
		} else if(isalpha(str[i])){
			goto Q118;
		} else {
			return "erro";
		}
																										
	Q1:
	    i++;
		if(str[i] == '\0'){
			*p = i;
			return "+";
		} else{
			return "erro";
		}
	Q2:
	    i++;
	    if(str[i] == '='){
			goto Q3;
		 } else if(str[i] == '\0'){
		 	*p = i;
		 	return ">";
		 }else {
	        return "erro";
	     }  
	Q3:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return "=";
	    } else {    
		    return "erro";
        } 
	Q4:
		i++;
	    if(str[i] == '\0'){
		 	*p = i;
		 	return "<";
		 }else if(str[i] == '-'){
			goto Q120;
		} else if(str[i] == '>'){
			goto Q114;
		} else if(str[i] == '='){
			goto Q3;
		} else {
			return "erro";
		}
				
			
	Q5:
	    i++;
	    if(str[i] == 'o'){
			goto Q6;
	    } else {
	        goto Q118;
        }
	Q6:
	    i++;
	    if(str[i] == 'd'){
			goto Q7;
	    } else {
	        goto Q118;
        }
	Q7:
	    i++;
	    if(str[i] == '\0'){
	    	*p = i;
			return "mod";
	    } else {
	        goto Q118;
        }
	Q8:
	     i++;
	    if(str[i] == 'n'){
			goto Q48;
	    } else if(str[i] == 'x') {
	        goto Q9;
        }else if(str[i] == 's') {
	        goto Q39;
        }else{
        	goto Q118;
		}
	Q9:
	    i++;
	    if(str[i] == 'p'){
			goto Q10;
	    } else {
	        goto Q118;
        }
    Q10:
    	i++;
    	if(str[i] == '\0'){
    		*p = i;
    		return "exp";
		} else {
			goto Q118;
		}
	Q11:
		i++;
	    if (str[i] == 'n') {
          goto Q12;
	    } else {    
		  goto Q118;
        } 
	Q12:
	    i++;
	    if(str[i] == 't'){
			goto Q13;
	    } else if(str[i] == 'i'){    		
		    goto Q107;
		} else{
			goto Q118;
		} 
	Q13:
	    i++;
	    if(str[i] == 'e'){
			goto Q14;
	    } else {    
		    goto Q118;
        } 
	Q14:
		i++;
	    if (str[i] == 'i') {
	        goto Q15;
	    } else {    
		    goto Q118;
        }
	Q15:
	    i++;
	    if (str[i] == 'r') {
	        goto Q16;
	    } else {    
		    goto Q118;
        }
	Q16:
	   i++;
	    if (str[i] == 'o') {
	        goto Q17;
	    } else {    
		    goto Q118;
        }
	Q17:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return "inteiro";
	    } else {    
		    goto Q118;
        } 
	Q18:
	    i++;
	    if(str[i] == 'o'){
			goto Q19;
	    } else if(str[i] == 'e'){    
		    goto Q40;
        } else{
        	goto Q118;
		}
	Q19:
	    i++;
	    if (str[i] == 'g') {
	        goto Q20;
	    } else {    
		    goto Q118;
        }
	Q20:
	    i++;
	    if (str[i] == 'i') {
	        goto Q21;
	    } else {    
		    goto Q118;
        }
	Q21:
		 i++;
	    if (str[i] == 'c') {
	        goto Q22;
	    } else {    
		    goto Q118;
        }
	Q22:
	    i++;
	    if (str[i] == 'o') {
	        goto Q23;
	    } else {    
		    goto Q118;
        }
	Q23:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
		    return "logico";
	    } else {    
		    goto Q118;
        } 
	Q24:
	    i++;
	    if(str[i] == 'a'){
			goto Q25;
	    } else if(str[i] == 'i') {    
		    goto Q57;
        } else{
        	goto Q118;
		}
	Q25:
	    i++;
	    if(str[i] == 'l'){
			goto Q26;
	    } else if(str[i] = 'c'){
		    goto Q70;
        } else{
        	goto Q118;
		}
	Q26:
	    i++;
	    if (str[i] == 's') {
	        goto Q27;
	    } else {    
		    goto Q118;
        }
	Q27:
	    i++;
	    if (str[i] == 'o') {
			goto Q28;
	    } else {    
			goto Q118;
        }
	Q28:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return "falso";
	    } else {
	    	goto Q118;
	    }
	Q29:
	    i++;
	    if(str[i] == 'e'){
		    	goto Q30;
		}else if(str[i] = 'a'){
			goto Q115;
		}else{
			goto Q118;
		}
     
	Q30:
	    i++;
	    if(str[i] == 'r'){
			goto Q31;
	    } else {    
		    goto Q118;
        } 
	Q31:
	    i++;
	    if(str[i] == 'd'){
			goto Q32;
	    } else {    
		    goto Q118;
        } 
	Q32:
	    i++;
	    if(str[i] == 'a'){
			goto Q33;
	    } else {    
		    goto Q118;
        } 
	Q33:
	    i++;
	    if(str[i] == 'd'){
			goto Q34;
	    } else {    
		    goto Q118;
        } 
    Q34:
	    i++;
	    if(str[i] == 'e'){
			goto Q35;
	    } else {    
		    goto Q118;
        } 
	Q35:
		i++;
	    if(str[i] == 'i'){
			goto Q36;
	    } else {    
		    goto Q118;
        } 
    Q36:
	    i++;
	    if(str[i] == 'r'){
			goto Q37;
	    } else {    
		    goto Q118;
        } 
	Q37:
	    i++;
	    if(str[i] == 'o'){
			goto Q38;
	    } else {    
		    goto Q118;
        } 
         
	Q38:
		i++;
    	if(str[i] == '\0'){
    		*p = i;
    		return "verdadeiro";
		} else {
			goto Q118;
		}
	Q39:
	    i++;
	    if(str[i] == 'c'){
			goto Q43;
	    } else {    
		    goto Q118;
        } 
	Q40:
	    i++;
	    if(str[i] == 'i'){
			goto Q41;
	    } else {    
		    goto Q118;
        } 
	Q41:
		i++;
	    if (str[i] == 'a') {
           goto Q42;
	    } else {    
		    goto Q118;
        }
	Q42:
	    i++;
	    if(str[i] == '\0'){
	    	*p = i;
			return "leia";
	    } else {    
		    goto Q110;
        } 
	Q43:
	    i++;
	    if (str[i] == 'r') {
           goto Q44;
	    } else {    
		    goto Q118;
        }
	Q44:
		i++;
	    if (str[i] == 'e') {
           goto Q45;
	    } else {    
		    goto Q118;
        } 
	Q45:
	    i++;
	    if(str[i] == 'v'){
			goto Q46;
	    } else {    
		    goto Q118;
        } 
	Q46:
	    i++;
	    if(str[i] == 'a'){
			goto Q47;
	    } else {    
		    goto Q118;
        } 
	Q47:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return "escreva";
	    } else {    
		    goto Q118;
        } 
	Q48:
	    i++;
	    if(str[i] == 't'){
			goto Q49;
	    } else if(str[i] == 'q') {
	        goto Q76;
		}else{
		    goto Q118;
        } 
	Q49:
		i++;
	    if(str[i] == 'a'){
			goto Q50;
	    } else {    
		    goto Q118;
        } 
	Q50:
	    i++;
	    if(str[i] == 'o'){
			goto Q51;
	    } else {    
		    goto Q118;
        } 
	Q51:
	   i++;
	    if(str[i] == '\0'){
			*p = i;
			return "entao";
	    } else {    
		    goto Q110;
        } 
	Q52:
	    i++;
	    if(str[i] == 'e'){
			goto Q53;
	    } else {    
		    goto Q118;
        } 
	Q53:
	    i++;
	    if(str[i] == 'n'){
			goto Q54;
	    } else {    
		    goto Q118;
        } 
	Q54:
		i++;
	    if(str[i] == 'a'){
			goto Q55;
	    } else {    
		    goto Q118;
        } 
	Q55:
	    i++;
	    if(str[i] == 'o'){
			goto Q56;
	    } else {    
		    goto Q118;
        } 
	Q56:
	    i++;
	    if (str[i] == '\0') {
          *p = i;
	        return "senao";
	    } else {    
		    goto Q110;
        }
	Q57:
	    i++;
	    if(str[i] == 'm'){
			goto Q58;
	    } else {    
		   	goto Q118;
        } 
	Q58:
		i++;
	    if (str[i] == 's') {
           goto Q59;
	    }else if(str[i] == 'p'){
	    	goto Q72;
		}else if(str[i] == 'e'){
			goto Q82;
		}else if(str[i] == 'a'){
			goto Q98;
		}else {    
		    goto Q118;
        }
	Q59:
	    i++;
	    if(str[i] == 'e'){
			goto Q60;
		} else{
		    goto Q118; 
		}
	Q60:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return "fimse";
	    } else {    
		   goto Q118;
        } 
	Q61:
	    i++;
	    if(str[i] == 'a'){
			goto Q62;
	    } else {    
		    goto Q118;
        } 
	Q62:
	    i++;
	    if(str[i] == 'r'){
			goto Q63;
	    } else {    
		    goto Q118;
        } 
	Q63:
		i++;
	    if (str[i] == 'a') {
          goto Q64;
	    } else {    
		    goto Q118;
        } 
	Q64:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return "para";
	    } else {    
		    goto Q110;
        } 
	Q65:
	    i++;
	    if(str[i] == 'e'){
			goto Q66;
	    } else {    
		    goto Q118;
        } 
	Q66:
	    i++;
	    if (str[i] == '\0') {
           *p = i;
	        return "de";
	    } else {    
		    goto Q118;
        } 
	Q67:
	    i++;
	    if(str[i] == 't'){
			goto Q68;
	    } else if(str[i] == 'l'){
	    	goto Q90;
		}else {    
		    goto Q118;
        } 
	Q68:
	    i++;
	    if(str[i] == 'e'){
			goto Q69;
	    } else {    
		    goto Q118;
        } 
	Q69:
		i++;
	    if(str[i] == '\0'){
			*p = i;
			return "ate";
	    } else {    
		    goto Q118;
        } 
	Q70:
		i++;
	    if(str[i] == 'a'){
			goto Q71;
	    } else {    
		    goto Q118;
        } 
	Q71:
		i++;
	    if (str[i] == '\0') {
           *p = i;
	        return "faca";
	    } else {    
		    goto Q118;
        }
	Q72:
	    i++;
	    if(str[i] == 'a'){
			goto Q73;
	    } else {
	        goto Q118;
        }
	Q73:
		i++;
	    if (str[i] == 'r') {
          goto Q74;
	    } else {    
		    goto Q118;
        } 
	Q74:
	    i++;
	    if (str[i] == 'a') {
          goto Q75;
	    } else {    
		  goto Q118;
        } 
	Q75:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return "fimpara";
	    } else {    
		    goto Q118;
        } 
	Q76:
	    i++;
	    if(str[i] == 'u'){
			goto Q77;
	    } else {
	        goto Q118;
    	}
	Q77:
	    i++;
	    if(str[i] == 'a'){
        	goto Q78;
	    } else {
	    	goto Q118;
	    }
	Q78:
	    i++;
	    if(str[i] == 'n'){
        goto Q79;
	    } else {
	    	goto Q118;
	    }
	Q79:
	    i++;
	    if(str[i] == 't'){
			goto Q80;
	    } else {
	    	goto Q118;
		}
	Q80:
	    i++;
	    if (str[i] == 'o') {
           goto Q81;
	    }  else {
	         goto Q118;
		}
	Q81:
	    i++;
	    if (str[i] == '\0') {
          *p = i;
	    	return "enquanto";
	    }  else {
	         goto Q118;
		}
	Q82:
	    i++;
	    if (str[i] == 'n') {
          goto Q83;
	    }  else {
	    	 goto Q118;
		}
	Q83:
	    i++;
	    if (str[i] == 'q') {
          goto Q84;
	    }  else {
	    	 goto Q118;
		}
	Q84:
	    i++;
	    if (str[i] == 'u') {
          goto Q85;
	    }  else {
	    	 goto Q118;
		}
	Q85:
	    i++;
	    if (str[i] == 'a') {
          goto Q86;
	    }  else {
	    	goto Q118;
		}
	Q86:
	    i++;
	    if (str[i] == 'n') {
          goto Q87;
	    }  else {
	    	 goto Q118;
		}
	Q87:
	    i++;
	    if (str[i] == 't') {
          goto Q88;
	      }else {
	    	 goto Q118;
		}
	Q88:
	   i++;
	    if (str[i] == 'o') {
          goto Q89;
	      }else {
	    	 goto Q118;
		}
	Q89:
	    i++;
	    if (str[i] == '\0') {
          *p = i;
	        return "fimenquanto";
	      }else {
	    	 goto Q118;
		}
	Q90:
	    i++;
	    if (str[i] == 'g') {
          goto Q91;
	    } else {
	        goto Q118;
    	}
	Q91:
	    i++;
	    if (str[i] == 'o') {
          	goto Q92;
	      }else {
	    	goto Q118;
		} 
	Q92:
	    i++;
	    if (str[i] == 'r') {
           goto Q93;
	    } else {    
		   goto Q118;
        }   
	Q93:
		i++;
		if(str[i] == 'i'){
			goto Q94;
		} else{
			goto Q118;
		}
	Q94:
		i++;
		if(str[i] == 't'){
			goto Q95;
		} else{
			goto Q118;
		}
	Q95:
		i++;
		if(str[i] == 'm'){
			goto Q96;
		} else{
			goto Q118;
		}
	Q96:
		i++;
		if(str[i] == 'o'){
			goto Q97;
		} else{
			goto Q118;
		}
	Q97:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return "algoritmo";
		} else{
			goto Q118;
		}
	Q98:
		i++;
		if(str[i] == 'l'){
			goto Q99;
		} else{
			goto Q118;
		}
	Q99:
		i++;
		if(str[i] == 'g'){
			goto Q100;
		} else{
			goto Q118;
		}
	Q100:
		i++;
		if(str[i] == 'o'){
			goto Q101;
		} else{
			goto Q118;	
		}
	Q101:
		i++;
		if(str[i] == 'r'){
			goto Q102;
		} else{
			goto Q118;	
		}
	Q102:
		i++;
		if(str[i] == 'i'){
			goto Q103;
		} else{
			goto Q118;	
		}
	Q103:
		i++;
		if(str[i] == 't'){
			goto Q104;
		} else{
			goto Q118;	
		}
	Q104:
		i++;
		if(str[i] == 'm'){
			goto Q105;
		} else{
			goto Q118;	
		}
	Q105:
		i++;
		if(str[i] == 'o'){
			goto Q106;
		} else{
			goto Q118;	
		}
	Q106:
     	i++;
		if(str[i] == '\0'){
			*p = i;
			return "fimalgoritmo";
		} else{
			goto Q118;
		}
	Q107:
		i++;
		if(str[i] == 'c'){
			goto Q108;
		} else{
			goto Q118;	
		}
	Q108:
		i++;
		if(str[i] == 'i'){
			goto Q109;
		} else{
			goto Q118;	
		}
	Q109:
		i++;
		if(str[i] == 'o'){
			goto Q110;
		} else{
			goto Q118;	
		}
	Q110:
	    i++;
		if(str[i] == '\0'){
			*p = i;
			return "inicio";
		} else{
			goto Q118;
		}	

	Q111:
		i++;
	    if(str[i] == '\0'){
			*p = i;
			return "=";
	    } else {    
		    return "erro";
        } 
	Q112:
		i++;
		if(str[i] == 'u'){
			goto Q113;
		} else{
			goto Q118;
		}
	Q113:
		i++;
	    if (str[i] == '\0') {
          *p = i;
	    	return "ou";
	    } else {    
		    goto Q118;
        } 
	Q114:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return "<>";
		} else{
			return "erro";
		}
	Q115:
		i++;
		if(str[i] == 'r'){
			goto Q116;
		} else{
			goto Q118;
		}
	Q116:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return "var";
		} else{
			goto Q118;
		}
	Q118:
		i++;
		if(str[i] == '\0' || str[i] == '\"'){
				*p = i;
				return "id";
			}else{
			if(isalpha(str[i]) || isdigit(str[i]) || str[i] == '_'){
				goto Q118;
			} else {
				return "erro";
			}
		}	
	Q119:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return ",";
		} else{
			return "erro";
		}
	Q120:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return "<-";
		} else{
			return "erro";
		}
	Q121:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return "-";
		} else{
			return "erro";
		}
	Q123:
	     i++;
		if(isdigit(str[i]) || isalpha(str[i])){
			goto Q123;
		} else{
			if(str[i] == '\"'){
				goto Q118;
			} else {
				return "erro";
			}
		}
	Q124:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return ":";
		} else{
			return "erro";
		}
	Q125:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return "*";
		} else{
			return "erro";
		}
	Q126:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return "\\";
		} else{
			return "erro";
		}

	Q137:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return str;
		}else if(isdigit(str[i])){
			goto Q137;
		} else{
			return "erro";
		}
		
	Q138:
	    i++;
		if(str[i] == '\0'){
			*p = i;
			return "(";
		} else{
			return "erro";
		}
	Q139:
	    i++;
		if(str[i] == '\0'){
			*p = i;
			return ")";
		} else{
			return "erro";
		}
		
	Q140:
	    i++;
		if(str[i] == '\0'){
			*p = i;
			return ";";
		} else{
			return "erro";
		}	
		
}

/*Buffer que irá armazenar os tokens lidos pelo analizador léxico*/
struct Node{
	int escopo;
    char token[100];
    char lexema[100];
 struct Node *prox;
};


typedef struct Node node;

int tam;

void inicia(node *FILA);
int vazia(node *FILA);
node *aloca(char* elem,char* s);
void enqueue(node *FILA, char* elem,char* s);
node *dequeue(node *FILA);
void exibe(node *FILA);
void libera(node *FILA);

//inicia o buffer
void inicia(node *FILA){
	FILA->prox = NULL;
	tam=0;
}
//verifica se o buffer está vazio
int vazia(node *FILA){
	if(FILA->prox == NULL)
		return 1;
	else
		return 0;
}

//aloca o token lido no analisador léxico
node *aloca(char* elem,char* s){ 
	node *novo=(node *) malloc(sizeof(node));
	if(!novo){
		printf("Sem memoria disponivel!\n");
		exit(1);
	}else{
       strcpy (novo->token, elem);
	   strcpy (novo->lexema, s);
	   return novo;
	}
}

//exibe os elementos dentro do buffer
void exibe(node *FILA){
    int count=0;
	if(vazia(FILA)){
	   printf("FILA vazia!\n\n");
    }
	node *tmp;
	tmp = FILA->prox;
	printf("TOKENS NO BUFFER:\n");
	while( tmp != NULL){
      printf("<%s,%s>\n", tmp->token,tmp->lexema);
	  tmp = tmp->prox;
	  count++;
    }
}

void debugPrintBuffer(node *FILA){
	node *tmp;
	tmp = FILA->prox;
	#ifdef DEBUG
    printf ("Lexema: <%s>\n", tmp->lexema);
    #endif
}
//libera o buffer 
void libera(node *FILA){
	if(!vazia(FILA)){
		node *proxNode,
		*atual;
		atual = FILA->prox;
		while(atual != NULL){
			proxNode = atual->prox;
			free(atual);
			atual = proxNode;
		}
	}
}

//escreve o elemento lido dentro do buffer
void enqueue(node *FILA, char* elem,char* s){
    node *novo=aloca(elem,s);
   	novo->prox = NULL;
	if(vazia(FILA))
		FILA->prox=novo;
	else{
		node *tmp = FILA->prox;
		while(tmp->prox != NULL)
			tmp = tmp->prox;
		tmp->prox = novo;
	}
	tam++;
}

//retira o elemento a partir do topo do buffer
node *dequeue(node *FILA){ 
	if(FILA->prox == NULL){
		printf("Fila ja esta vazia\n");
		return NULL;
	}else{
		node *tmp = FILA->prox;
		FILA->prox = tmp->prox;
		tam--;
		return tmp;
	}
}


int main(){
	char str[80], linha[80], nomeToken[100];
	char *lexema;
	int i = -1, tamanho = 0, count=0, quantidade = 0;
	FILE *arq;
	FILE *saida;
	node *BUFFER=(node *)malloc(sizeof(node));
    inicia(BUFFER);
    
	arq = fopen("teste.txt", "r");
	
	saida = fopen("saida.txt", "w");
	
	if(arq == NULL)
		printf("Erro, nao foi possivel abrir o arquivo\n");
	else{
		while((fgets(linha, 500, arq)!= NULL)&&(nomeToken!=0)){	
			if(!startsWith(linha, "//")) { 
	    		 lexema = strtok( linha, " \n\t" );
			    while( lexema != NULL ){
				    strcpy(nomeToken, leitorLexico(lexema, &i));
				    if(nomeToken != "erro"){
			    	    enqueue(BUFFER,nomeToken,lexema);
			    	    if(strcmp (nomeToken, lexema) == 0){
			    	    	fprintf(saida, "<%s>\n", nomeToken);
						}else{
							fprintf(saida, "<%s,%s>\n", nomeToken, lexema);	
						}
				    	quantidade++;
				    	}else{
				    		if(nomeToken=="erro"){
				    		       printf("Erro: Entrada nao aceita");
						           printf("\nSequencia incorreta: %s\n", lexema);
						    }      break;
						}
					lexema = strtok( NULL, " \n\t" );	
					i = -1;
				 }
			}	
			    
		   }    
		fclose(saida);
		fclose(arq);
		}
	libera(BUFFER);
    return 0;
}
