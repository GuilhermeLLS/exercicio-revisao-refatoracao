#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main()
{

  Engenheiro eng1 = Engenheiro("Joao Snow", 35, 9.5, 3);
  Engenheiro eng2 = Engenheiro("Daniela Targaryen", 30, 8, 1);
  Engenheiro eng3 = Engenheiro("Bruno Stark", 30, 8, 2);

  eng1.PrintEngenheiro();
  eng2.PrintEngenheiro();
  eng3.PrintEngenheiro();

  Vendedor ven1 = Vendedor("Tonho Lannister", 20, 6, 5000);
  Vendedor ven2 = Vendedor("Jose Mormont", 25, 8, 3000);
  Vendedor ven3 = Vendedor("Sonia Stark", 30, 8, 4000);

  ven1.PrintVendedor();
  ven2.PrintVendedor();
  ven3.PrintVendedor();

  return 0;
}