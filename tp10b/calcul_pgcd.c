// fonction calculer_pgcd()
// Calcule et retourne le pgcd de a et b.
// Si b est < 0, la valeur retournee sera negative.
// PRECONDITION : n2 non nul
int calculer_pgcd(int n1, int n2 ) {
   int r, a, b;
   a = abs(n1);
   b = abs(n2);
   while (b != 0) {
      r = a % b;
      a = b;
      b = r;
   }
   if(n2 < 0) {
      a = -a;
   }
   return a;
}
