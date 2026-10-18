
#include "list.h"

#include <iostream>
using namespace std;

int main(){
    linkedList List;
    address nodeA, nodeB, nodeC, nodeD, nodeE = Nil;
    createList(List);

    dataMahasiswa mhs;

    nodeA = alokasi("Dhimas", "2311102151", 20);
    nodeB = alokasi("Arvin", "22111010014", 21);
    nodeC = alokasi("Rizal", "2311100029", 20);
    nodeD = alokasi("Satrio", "2211102173", 21);
    nodeE = alokasi("Joshua", "2311102133", 21);

    insertFirst(List, nodeA);
    insertLast(List, nodeB);
    insertAfter(List, nodeC, nodeA);
    insertAfter(List, nodeD, nodeC);
    insertLast(List, nodeE);

   cout << "--- ISI LIST SETELAH DILAKUKAN INSERT ---" << endl;
    printInfo(List); // Ubah printList menjadi printInfo
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

// ... (bagian delete di bawahnya juga sesuaikan jika perlu)

    cout << "--- ISI LIST SETELAH DILAKUKAN DELETE ---" << endl;
    printInfo(List); // Ubah printList menjadi printInfo
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    deleteList(List);
    cout << "--- ISI LIST SETELAH DILAKUKAN HAPUS LIST ---" << endl;
    printInfo(List);
    cout << "jumlah node : " << nbList(List) << endl;
    cout << endl;

    return 0;
}