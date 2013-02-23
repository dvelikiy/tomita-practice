#encoding "utf-8"
#GRAMMAR_ROOT S    // При помощи директивы #GRAMMAR_ROOT указывается вершина грамматики – нетерминал S
IFO -> Word<h-reg1, gram="имя", gnc-agr[1]> interp (Name.I; Name.Type = "IFO") Word<h-reg1, gram="фам", gnc-agr[1]> interp (Name.F) Word<h-reg1, gram="отч", gnc-agr[1]> interp (Name.O);
FIO -> Word<h-reg1, gram="фам", gnc-agr[1]> interp (Name.F; Name.Type = "FIO") Word<h-reg1, gram="имя", gnc-agr[1]> interp (Name.I) Word<h-reg1, gram="отч", gnc-agr[1]> interp (Name.O);
IF -> Word<h-reg1, gram="имя", gnc-agr[1]> interp (Name.I; Name.Type = "IF") Word<h-reg1, gram="фам", gnc-agr[1]> interp (Name.F);
//Person -> ProperName | 'человек';                     // человек может обозначаться именем собственным
                                                      // или словом “человек”
//FormOfAddress -> 'товарищ' | 'мистер' | 'господин';

S ->IFO | FIO | IF ;


