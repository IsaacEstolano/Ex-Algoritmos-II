//Cada  trecho  abaixo  contém  um  erro  de  gerenciamento  de  memória.  Identifique  o  erro  (vazamento, 
//ponteiro pendurado ou delete duplo) e mostre como corrigi-lo. 
// a) int *p = new int(5); Fazer delete antes de alocar para P um int de tamanho 8,e falta o nullptr
// p = new int(8); 
//delete p;


  // b) int *q = new int[3];
  // delete[] q;
  // q[0] = 1; Atribui valor a um lugar que foi excluido,falta o nullptr


  // c) int *r = new int(2); 
  //int *s = r; 
  //delete r; 
  //delete s;//delete a memoria que foi delete,e falta o nullptr ;