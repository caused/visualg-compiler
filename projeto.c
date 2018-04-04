/*INCLUINDO DEBUG PARA O CÓDIGO*/
//#define DEBUG
#ifdef DEBUG
#endif
/*palavras reservadas*/ 
#define senao			"senao"           
#define se      		"se"
#define enquanto		"enquanto"
#define entao      		"entao"
#define exp      		"exp"
#define escreva    		"escreva"
#define leia    		"leia"
#define logico     		"logico"
#define para       		"para"
#define ate        		"ate"
#define de 				"de"		
#define algoritmo   	"algoritmo"
#define mod     		"mod"
#define inicio      	"inicio"
#define inteiro     	"inteiro"
#define fimpara    		"fimpara"
#define fimse     		"fimse"
#define fimalgoritmo 	"fimalgoritmo"
#define fimenquanto  	"fimenquanto"
#define faca		 	"faca"
#define falso   	 	"falso"
#define verdadeiro		"verdadeiro"
#define var    			"var"
#define id 				"id"
#define algid			"algid"
/*operadores*/
#define relope          "e"
#define relopou			"ou"
#define opadi           "+"
#define opmult          "*"
#define opsub          	"-"
#define relopatt        "<-"
#define relopmei        "<="
#define relopdif        "<>"
#define relopme     	"<"
#define relopma     	">"
#define opdiv     		"\\"
#define relopmai      	">="
#define relopi          "="
#define pontvir			","
#define pontdoispontos	":"

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/*
Método leitor - Responsável pela identificação de lexemas conhecidos pela linguagem mini-visualg
*/
char *leitor(char str[],int *p) {
  int i = *p;

	goto Q0;

	Q0:
	    i++;
	    if(str[i] == ' ')
		    return "&*";
		if(str[i] == '\n')
		    return "&*";       	
	    if ((str[i] == '0')||(str[i] == '1')||(str[i] == '2')||(str[i] == '3')||(str[i] == '4')||(str[i] == '5')||(str[i] == '6')||(str[i] == '7')||(str[i] == '8')||(str[i] == '9')){
	        goto Q118;
	    } else {
	        if(str[i] == 's'){
		       	goto Q27;
	        } else {
	           if (str[i] == 'e'){
	   		         goto Q20;
	           } else {
	                if (str[i] == 'l'){
	                   goto Q16;
	                } else {
	                    if (str[i] == 'p'){
	                         goto Q44;
                        } else {
	                       if (str[i] == 'a'){
	                            goto Q89;
	                        } else {
	                            if (str[i] == 'm'){
	                                goto Q72;
	                            } else {
	                                 if (str[i] == 'i'){
	                                    goto Q55;
	                                } else {
	                                    if (str[i] == 'd'){
	                                        goto Q53;
	                                    } else {
	                                        if (str[i] == 'f'){
	                                       		 goto Q11;
	                                       } else {
	                               		         if (str[i] == 'o'){
	                                               goto Q68;
	                                            } else {
	                                                if (str[i] == 'v'){
	                                                    goto Q1;
	                                                } else {
	                                                    if (str[i] == '='){
	                                                        goto Q62;
	                                                    } else {
	                                                        if (str[i] == '\\'){
	                                                               goto Q102;
	                                                         } else {
	                                                         	if (str[i] == '>'){
	                                                                goto Q50;
	                                                            } else {
																	if (str[i] == '<'){
																	    goto Q103;
																	} else {
																		        if (str[i] == '/'){
																		            goto Q113;
																		        } else {
																		            if (str[i] == '*'){
																		                goto Q104;
																		            } else {
																		                if (str[i] == '-'){
																		                    goto Q105;
																		                } else {
																		                    if (str[i] == '+'){
																		                        goto Q106;
																		                    } else {
																		                        if (str[i] == '"'){
																		                            goto Q114;    
																		                        } else {
																		                        	if(isdigit(str[i])){
																		                        		goto Q118;
																									} else {
																										if(str[i] == ':'){
																											goto Q119;
																										} else {
																											if(str[i] == ','){
																												goto Q129;
																											} else {
																												if(isalpha(str[i])){
																													goto Q110;
																												} else {
																													return "&*";
																												}
																											}
																										}
																									}
																						 	    }
																							 }
																						 }
																					}
																				}
																			}
																	    }
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
	Q1:
	    i++;
	    if(str[i] == 'e'){
			goto Q2;
	    } else {
	        if(str[i] == 'a'){
		       goto Q111;
		    } else {    
		           goto Q110;
		        }
    	   }
	Q2:
	    i++;
	    if(str[i] == 'r'){
			goto Q3;
		 } else {
	        	goto Q110;
	        }  
	Q3:
	    i++;
	    if(str[i] == 'd'){
			goto Q4;
	    } else {
	        	goto Q110;
	        }   
	Q4:
		i++;
	    if (str[i] == 'a') {
	        goto Q5;
	    } else {    
		    goto Q110;
        }   
	Q5:
	    i++;
	    if(str[i] == 'd'){
		   goto Q6;
	    } else {    
		    goto Q110;
        } 
	Q6:
	    i++;
	    if(str[i] == 'e'){
          goto Q7;
        } else {    
		    goto Q110;
        } 
	Q7:
	    i++;
	    if(str[i] == 'i'){
			goto Q8;
	    } else {
	        goto Q110; 
        }
	Q8:
	    i++;
	    if(str[i] == 'r'){
			goto Q9;
	    } else {    
		    goto Q110;
        } 
	Q9:
	    i++;
	    if(str[i] == 'o'){
			goto Q10;
	    } else {    
	        goto Q110;
        }
    Q10:
    	i++;
    	if(str[i] == '\0'){
    		*p = i;
    		return verdadeiro;
		} else {
			goto Q110;
		}
	Q11:
		i++;
	    if (str[i] == 'a') {
          goto Q12;
	    } else {    
		    if(str[i] == 'i'){
		    	goto Q36;
			} else{
				goto Q110;
			}
        } 
	Q12:
	    i++;
	    if(str[i] == 'c'){
			goto Q48;
	    } else {    
		    if(str[i] == 'l'){
		    	goto Q13;
			} else{
				goto Q110;
			}
        } 
	Q13:
	    i++;
	    if(str[i] == 's'){
			goto Q14;
	    } else {    
		    goto Q110;
        } 
	Q14:
		i++;
	    if (str[i] == 'o') {
	        goto Q15;
	    } else {    
		    goto Q110;
        }
	Q15:
	    i++;
	    if(str[i] == '\0'){
	    	*p = i;
			return falso;
	    } else {    
		    goto Q110;
        } 
	Q16:
	    i++;
	    if(str[i] == 'e'){
			goto Q17;
	    } else {    
		    if(str[i] == 'o'){
		    	goto Q63;
			} else {
				goto Q110;
			}
        } 
	Q17:
	    i++;
	    if(str[i] == 'i'){
			goto Q18;
	    } else {
	        goto Q110;
    	}
	Q18:
	    i++;
	    if(str[i] == 'a'){
			goto Q19;
	    } else {    
		    goto Q110;
        } 
	Q19:
	    i++;
	    if(str[i] == '\0'){
	    	*p = i;
			return leia;
	    } else {    
		    goto Q110;
        } 
	Q20:
	    i++;
	    if(str[i] == 'n'){
			goto Q29;
	    } else {    
		    if(str[i] == 's'){
		    	goto Q20;
			} else {
				if(str[i] == 'x')
				{
					goto Q70;
				}
			}
        } 
	Q21:
		i++;
	    if (str[i] == 'c') {
          goto Q22;
	    } else {    
		    goto Q110;
        } 
	Q22:
	    i++;
	    if(str[i] == 'r'){
			goto Q23;
	    } else {    
		    goto Q110;
        } 
	Q23:
	    i++;
	    if(str[i] == 'e'){
			goto Q24;
	    } else {    
		    goto Q110;
        } 
	Q24:
	    i++;
	    if(str[i] == 'v'){
			goto Q25;
	    } else {    
		    goto Q110;
        } 
	Q25:
	    i++;
	    if(str[i] == 'a'){
			goto Q26;
	    } else {    
		    goto Q110;
        } 
	Q26:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return escreva;
	    } else {    
		    goto Q110;
        } 
	Q27:
	    i++;
	    if (str[i] == 'e') {
			goto Q28;
	    } else {    
			goto Q110;
        }
	Q28:
	    i++;
	    if(str[i] == '\0'){
				*p = i;
				return se;
	        } else {
	           if(str[i] == 'n'){
		          goto Q33;
	            } else {    
		            goto Q110;
                } 
           }
	Q29:
	    i++;
	    if (str[i] == 'q') {
		    goto Q75;
	    } else {    
		    if(str[i] == 't'){
		    	goto Q30;
			}else{
				goto Q110;
			}
        } 
	Q30:
	    i++;
	    if(str[i] == 'a'){
			goto Q31;
	    } else {    
		    goto Q110;
        } 
	Q31:
	    i++;
	    if(str[i] == 'o'){
			goto Q32;
	    } else {    
		    goto Q110;
        } 
	Q32:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return entao;
	    } else {    
		    goto Q110;
        } 
	Q33:
	    i++;
	    if(str[i] == 'a'){
			goto Q34;
	    } else {    
		    goto Q110;
        } 
    Q34:
	    i++;
	    if(str[i] == 'o'){
			goto Q35;
	    } else {    
		    goto Q110;
        } 
	Q35:
		i++;
	    if (str[i] == '\0') {
          *p = i;
	        return senao;
	    } else {    
		    goto Q110;
        }
    Q36:
	    i++;
	    if(str[i] == 'm'){
			goto Q37;
	    } else {    
		    goto Q110;
        } 
	Q37:
	    i++;
	    if(str[i] == 's'){
			goto Q38;
	    } else {    
		    if(str[i] == 'e'){
		    	goto Q81;
			} else {
				if(str[i] == 'a'){
					goto Q120;
				} else {
					if(str[i] == 'p'){
						goto Q40;
					}else{
						goto Q110;
					}
				}
			}
        } 
	Q38:
		i++;
	    if (str[i] == 'e') {
          goto Q39;
	    } else {    
		    goto Q110;
        } 
	Q39:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return fimse;
	    } else {    
		   goto Q110;
        } 
	Q40:
	    i++;
	    if(str[i] == 'a'){
			goto Q41;
	    } else {    
		    goto Q110;
        } 
	Q41:
		i++;
	    if (str[i] == 'r') {
           goto Q42;
	    } else {    
		    goto Q110;
        }
	Q42:
	    i++;
	    if(str[i] == 'a'){
			goto Q43;
	    } else {    
		    goto Q110;
        } 
	Q43:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return fimpara;
	    } else {    
		    goto Q110;
        } 
	Q44:
		i++;
	    if (str[i] == 'a') {
           goto Q45;
	    } else {    
		    goto Q110;
        } 
	Q45:
	    i++;
	    if(str[i] == 'r'){
			goto Q46;
	    } else {    
		    goto Q110;
        } 
	Q46:
	    i++;
	    if(str[i] == 'a'){
			goto Q47;
	    } else {    
		    goto Q110;
        } 
	Q47:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return para;
	    } else {    
		    goto Q110;
        } 
	Q48:
	    i++;
	    if(str[i] == 'a'){
			goto Q49;
	    } else {    
		    goto Q110;
        } 
	Q49:
		i++;
	    if (str[i] == '\0') {
           *p = i;
	        return faca;
	    } else {    
		    goto Q110;
        }
	Q50:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return relopma;
	    } else {
	         return "&*";
		}
	Q51:
	    i++;
	    if(str[i] == 'e'){
			goto Q52;
	    } else {    
		    goto Q110;
        } 
	Q52:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return ate;
	    } else {    
		    goto Q110;
        } 
	Q53:
	    i++;
	    if(str[i] == 'e'){
			goto Q54;
	    } else {    
		    goto Q110;
        } 
	Q54:
		i++;
	    if (str[i] == '\0') {
           *p = i;
	        return de;
	    } else {    
		    goto Q110;
        } 
	Q55:
	    i++;
	    if(str[i] == 'n'){
			goto Q56;
	    } else {    
		    goto Q110;
        } 
	Q56:
	    i++;
	    if(str[i] == 'i'){
			goto Q98;
	    } else {    
		    if(str[i] == 't'){
		    	goto Q57;
			} else {
				goto Q110;
			}
        } 
	Q57:
	    i++;
	    if(str[i] == 'e'){
			goto Q58;
	    } else {    
		   	goto Q110;
        } 
	Q58:
		i++;
	    if (str[i] == 'i') {
           goto Q59;
	    } else {    
		    goto Q110;
        }
	Q59:
	    i++;
	    if(str[i] == 'r'){
			goto Q60;
		} else{
		    goto Q110; 
		}
	Q60:
	    i++;
	    if(str[i] == 'o'){
			goto Q61;
	    } else {    
		    goto Q110;
        } 
	Q61:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return inteiro;
	    } else {    
		    goto Q110;
        } 
	Q62:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return relopi;
	    } else {    
		    return "&*";
        } 
	Q63:
		i++;
	    if (str[i] == 'g') {
          goto Q64;
	    } else {    
		    goto Q110;
        } 
	Q64:
	    i++;
	    if(str[i] == 'i'){
			goto Q65;
	    } else {    
		    goto Q110;
        } 
	Q65:
	    i++;
	    if(str[i] == 'c'){
			goto Q66;
	    } else {    
		    goto Q110;
        } 
	Q66:
	    i++;
	    if(str[i] == 'o'){
			goto Q67;
	    } else {    
		    goto Q110;
        } 
	Q67:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return logico;
	    } else {    
		    goto Q110;
        } 
	Q68:
	    i++;
	    if(str[i] == 'u'){
			goto Q69;
	    } else {    
		    goto Q110;
        } 
	Q69:
		i++;
	    if (str[i] == '\0') {
          *p = i;
	    	return relopou;
	    } else {    
		    goto Q110;
        } 
	Q70:
		i++;
	    if(str[i] == 'p'){
			goto Q71;
	    } else {    
		    goto Q110;
        } 
	Q71:
		i++;
	    if (str[i] == '\0') {
          *p = i;
	        return exp;
	    } else {    
		    goto Q110;
        } 
	Q72:
	    i++;
	    if(str[i] == 'o'){
			goto Q73;
	    } else {
	        goto Q110;
        }
	Q73:
		i++;
	    if (str[i] == 'd') {
          goto Q74;
	    } else {    
		    goto Q110;
        } 
	Q74:
	    i++;
	    if(str[i] == '\0'){
			*p = i;
			return mod;
	    } else {    
		    goto Q110;
        } 
	Q75:
		i++;
	    if (str[i] == 'u') {
          goto Q76;
	    } else {    
		    goto Q110;
        } 
	Q76:
	    i++;
	    if(str[i] == 'a'){
			goto Q77;
	    } else {
	        goto Q110;
    	}
	Q77:
	    i++;
	    if(str[i] == 'n'){
        	goto Q78;
	    } else {
	    	goto Q110;
	    }
	Q78:
	    i++;
	    if(str[i] == 't'){
        goto Q79;
	    } else {
	    	goto Q110;
	    }
	Q79:
	    i++;
	    if(str[i] == 'o'){
			goto Q80;
	    } else {
	    	goto Q110;
		}
	Q80:
	    i++;
	    if (str[i] == '\0') {
          *p = i;
	    	return enquanto;
	    }  else {
	         goto Q110;
		}
	Q81:
	    i++;
	    if(str[i] == 'n'){
			goto Q82;
	    } else {
	        goto Q110;
	    }
	Q82:
	    i++;
	    if (str[i] == 'q') {
          goto Q83;
	    }  else {
	    	 goto Q110;
		}
	Q83:
	    i++;
	    if (str[i] == 'u') {
          goto Q84;
	    }  else {
	    	 goto Q110;
		}
	Q84:
	    i++;
	    if (str[i] == 'a') {
          goto Q85;
	    }  else {
	    	 goto Q110;
		}
	Q85:
	    i++;
	    if (str[i] == 'n') {
          goto Q86;
	    }  else {
	    	goto Q110;
		}
	Q86:
	    i++;
	    if (str[i] == 't') {
          goto Q87;
	    }  else {
	    	 goto Q110;
		}
	Q87:
	    i++;
	    if (str[i] == 'o') {
          goto Q88;
	      }else {
	    	 goto Q110;
		}
	Q88:
	    i++;
	    if (str[i] == '\0') {
          *p = i;
	        return fimenquanto;
	      }else {
	    	 goto Q110;
		}
	Q89:
	    i++;
	    if (str[i] == 't') {
          goto Q51;
	      }else {
	    	 if(str[i] == 'l'){
	    	 	goto Q90;
			 } else {
			 	goto Q110;
			 }
		}
	Q90:
	    i++;
	    if (str[i] == 'g') {
          goto Q91;
	    } else {
	        goto Q110;
    	}
	Q91:
	    i++;
	    if (str[i] == 'o') {
          	goto Q92;
	      }else {
	    	goto Q110;
		} 
	Q92:
	    i++;
	    if (str[i] == 'r') {
           goto Q93;
	    } else {    
		   goto Q110;
        }   
	Q93:
		i++;
		if(str[i] == 'i'){
			goto Q94;
		} else{
			goto Q110;
		}
	Q94:
		i++;
		if(str[i] == 't'){
			goto Q95;
		} else{
			goto Q110;
		}
	Q95:
		i++;
		if(str[i] == 'm'){
			goto Q96;
		} else{
			goto Q110;
		}
	Q96:
		i++;
		if(str[i] == 'o'){
			goto Q97;
		} else{
			goto Q110;
		}
	Q97:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return algoritmo;
		} else{
			goto Q110;
		}
	Q98:
		i++;
		if(str[i] == 'c'){
			goto Q99;
		} else{
			goto Q110;
		}
	Q99:
		i++;
		if(str[i] == 'i'){
			goto Q100;
		} else{
			goto Q110;
		}
	Q100:
		i++;
		if(str[i] == 'o'){
			goto Q101;
		} else{
			goto Q110;	
		}
	Q101:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return inicio;
		} else{
			goto Q110;
		}
	Q102:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return opdiv;
		} else{
			return "&*";
		}
	Q103:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return relopme;
		} else{
			if(str[i] == '-'){
				goto Q116;
			} else {
				if(str[i] == '>'){
					goto Q107;
				} else {
					if(str[i] == '='){
						goto Q108;
					} else {
						return "&*";
					}
				}
			}
		}
	Q104:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return opmult;
		} else{
			return "&*";
		}
	Q105:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return opsub;
		} else{
			return "&*";
		}
	Q106:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return opadi;
		} else{
			return "&*";
		}
	Q107:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return relopdif;
		} else{
			return "&*";
		}
	Q108:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return relopmei;
		} else{
			return "&*";
		}
	Q109:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return relopmai;
		} else{
			return "&*";
		}
	Q110:
		i++;
		if(str[i] == '\0'){
				*p = i;
				return id;
			}else{
			if(isalpha(str[i]) || isdigit(str[i]) || str[i] == '_'){
				goto Q110;
			} else {
				return "&*";
			}
		}
	Q111:
		i++;
		if(str[i] == 'r'){
			goto Q112;
		} else{
			goto Q110;
		}
	Q112:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return var;
		} else{
			goto Q110;
		}
	Q113:
		i++;
		if(str[i] == '/'){
			goto Q117;
		} else{
			return "&*";
		}
	Q114:
		i++;
		if(isdigit(str[i]) || isalpha(str[i])){
			goto Q114;
		} else{
			if(str[i] == '"'){
				goto Q115;
			} else {
				return "&*";
			}
		}
	Q115:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return algid;
		} else{
			return "&*";
		}
	Q116:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return relopatt;
		} else{
			
		}
	Q117:
		i++;
		if(str[i] == '/'){
			*p = i;
			return "%$";
		}
	Q118:
		i++;
		if(isdigit(str[i])){
			goto Q118;
		} else{
			return "&*";
		}
	Q119:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return pontdoispontos;
		} else{
			return "&*";
		}
	Q120:
		i++;
		if(str[i] == 'l'){
			goto Q121;
		} else{
			goto Q110;
		}
	Q121:
		i++;
		if(str[i] == 'g'){
			goto Q122;
		} else{
			goto Q110;
		}
	Q122:
		i++;
		if(str[i] == 'o'){
			goto Q123;
		} else{
			goto Q110;
		}
	Q123:
		i++;
		if(str[i] == 'r'){
			goto Q124;
		} else{
			goto Q110;
		}
	Q124:
		i++;
		if(str[i] == 'i'){
			goto Q125;
		} else{
			goto Q110;
		}
	Q125:
		i++;
		if(str[i] == 't'){
			goto Q126;
		} else{
			goto Q110;
		}
	Q126:
		i++;
		if(str[i] == 'm'){
			goto Q127;
		} else{
			goto Q110;
		}
	Q127:
		i++;
		if(str[i] == 'o'){
			goto Q128;
		} else{
			goto Q110;
		}
	Q128:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return fimalgoritmo;
		} else{
			goto Q110;
		}
	Q129:
		i++;
		if(str[i] == '\0'){
			*p = i;
			return pontvir;
		} else{
			return "&*";
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

node *head(node *FILA){
    if(FILA->prox == NULL){
       exit(0);
    }else{
        node *tmp = FILA->prox;
		return tmp;
    }
}

char* lookahead(node *FILA){
    if(FILA->prox == NULL){
       exit(0);
    }else{
        node *tmp = FILA->prox;
		return tmp->token;
    }
}


void match(node *FILA, char* token){
	if(lookahead(FILA) == token){	
		dequeue(FILA);
		}else{
			printf("ERRO SINTATICO\n");
			exit(1);
		}	
}

/*TABELA DE SIMBOLOS*/

void iniciaTabelaSimbolo(node *PILHA);
void exibeTabelaSimbolo(node *PILHA);
void liberaTabelaSimbolo(node *PILHA);
node *retirarTabelaSimbolo(node *PILHA);

//inicia a Tabela de Simbolo
void iniciaTabelaSimbolo(node *PILHA)
{
 PILHA->prox = NULL;
 tam=0;
}
//verifica se a Tabela de Simbolo está vazia
int vaziaTabelaSimbolo(node *PILHA){
    if(PILHA->prox == NULL)
       return 1;
    else
       return 0;
}
//aloca o identificador lido na Tabela de Simbolo
node *alocaTabelaSimbolo(char* elem, int escopo){
    node *novo=(node *) malloc(sizeof(node));
	if(!novo){
       printf("Sem memoria disponivel!\n");
  	   exit(1);
	}else{
	   novo->escopo = escopo;
	   strcpy (novo->lexema, elem);
	   return novo;
	}
}
//exibe os elementos dentro da Tabela de Simbolo
void exibeTabelaSimbolo(node *PILHA){
    int count=0;
	if(vazia(PILHA)){
	   printf("PILHA vazia!\n\n");
    }
	node *tmp;
	tmp = PILHA->prox;
	printf("TABELA DE SIMBOLOS:\n");
	while( tmp != NULL){
	  printf("<%s,%d> escopo = %d\n", tmp->lexema,count, tmp->escopo);
	  tmp = tmp->prox;
	  count++;
    }

}
//libera a Tabela de Simbolo 
void liberaTabelaSimbolo(node *PILHA){
    if(!vazia(PILHA)){
       node *proxNode,
       *atual;
        atual = PILHA->prox;
        while(atual != NULL){
            proxNode = atual->prox;
            free(atual);
            atual = proxNode;
        }
    }
}
//escreve o elemento lido dentro da Tabela de Simbolo
void adicionaTabelaSimbolo(node *PILHA, char* elem, int escopo){
    node *novo=alocaTabelaSimbolo(elem, escopo);
    novo->prox = NULL;
    if(vazia(PILHA))
      PILHA->prox=novo;
    else{
      node *tmp = PILHA->prox;
      while(tmp->prox != NULL)
        tmp = tmp->prox;
    tmp->prox = novo; 
	}
    tam++;
}
//retira o elemento a partir do topo da Tabela de Simbolo
node *retirarTabelaSimbolo(node *PILHA){
    if(PILHA->prox == NULL){
       exit(0);
    }else{
        node *ultimo = PILHA->prox,
        *penultimo = PILHA;
        while(ultimo->prox != NULL){
            penultimo = ultimo;
            ultimo = ultimo->prox;
       }
    penultimo->prox = NULL;
    tam--;
    return ultimo;
    }
}
//verifica o topo da Tabela de Simbolo
node *topoTabelaSimbolo(node *PILHA){
    if(PILHA->prox == NULL){
       exit(0);
    }else{
        node *ultimo = PILHA->prox;
        while(ultimo->prox != NULL){
            ultimo = ultimo->prox;
       }
    return ultimo;
    }
}


int main(){
	char str[80], linha[80], final[80] = "", url[]="", ch, r[100];
	int i = -1, tamanho = 0, count=0, quantidade = 0;
	FILE *arq;
	FILE *saida;
	node *BUFFER=(node *)malloc(sizeof(node));
    inicia(BUFFER);
	//Definindo o arquivo a ser compilado como program.txt	
	arq = fopen("program.txt", "r");
	//Arquivo de saida.txt exibe a lista de tokens lidos pelo automato do método leitor
	//a saída é exibida no formato <token,posição>
	saida = fopen("saida.txt", "w");	
	//Condição que valida a leitura do arquivo program.txt caso não seja possível a leitura
	//a mensagem de erro será exibido	
	if(arq == NULL)
		printf("Erro, nao foi possivel abrir o arquivo\n");
	else{
		//O loop garante a leitura linha a linha do arquivo program.txt
		while((fgets(linha, 500, arq)!= NULL)&&(r!=0)){	
		    //conta a quantidade de caracteres na linha que foi lida
			tamanho = strlen(linha);
			count=0;
			//identifica cada caracter das palavras lidas
			while(count<tamanho){
				ch=linha[count];
				//condição de parada para identificar o final de um token
			   	if(ch == ' ' || ch == '\n') {
			    	//strcat(final, &ch);
			    	strcpy(r, leitor(final, &i));
			    	if((r != "&*")&&(r != "%$")){
			    	    enqueue(BUFFER,r,final);
				    	fprintf(saida, "<%s,%s>\n", r, final);
				    	quantidade++;
				    	}else{
				    		if(r=="&*"){
				    		       printf("Erro: Entrada nao aceita");
						           printf("\nSequencia incorreta: %s\n", final);
						    }      break;
						}           
					}else{
						if(r == "")
						    break;
					    }
			    	i = -1;
			    	strcpy(final, "");
			    	} else {
			    		strcat(final, &ch);
			    	}
			    count++; 	
			    }
		   }  
		//exibe(BUFFER);    
		fclose(saida);
		fclose(arq);
		}
	libera(BUFFER);
    return 0;
}
