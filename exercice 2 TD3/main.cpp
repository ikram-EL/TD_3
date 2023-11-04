#include <iostream>
#include <list>
using namespace std ;

//  affichage les éléments d'une liste
    void afficher(const list<int>& myList){
        for(const int& nbr : myList ) {
            cout <<nbr << " ";
        }
        cout<<endl;
    }

 //tri à bulle
    void TriBulle(list<int>& myList){
        bool echange;

         do {
             echange = false;
             for (auto it = myList.begin(); it != prev(myList.end()); ++it) {
                 if (*it > *next(it)) {
                     swap(*it, *next(it));
                     echange = true;
                 }
             }
         } while (echange);
     }

//tri par sélection
    void TriSelect (list<int>& myList){
        for (auto it =myList.begin() ; it!=prev(myList.end()) ; ++it){
            auto min = it;
            for (auto innerIt = next(it); innerIt!=myList.end() ; ++innerIt){
                if(*innerIt < *min) {
                min= innerIt;
                }
            }
            }
    }

//tri par insertion
    void TriInsert(list<int>& myList){
        for(auto it = next(myList.begin()); it!= myList.end() ; ++it){
            int key = *it;
            auto insertPos= prev(it);
            while (insertPos !=myList.begin() && *insertPos > key) {
                *next (insertPos) = *insertPos;
                --insertPos;
            }
            *next(insertPos) = key;
        }
    }

     int main() {
    list<int> myList;
    int nbr;
    cout<<"Entrez les entiers (entrer 0 pour terminer la saisie : "<< endl;
    while( cin>>nbr && nbr !=0){
        myList.push_back(nbr);
    }
    cout<<"Liste non triée : ";
    afficher(myList);

 //copier la liste dans chaque fonction de tri
    list<int> TriBulleList = myList;
    list<int> TriSelectList = myList;
    list<int> TriInsertList = myList;

    //tri à bulle du liste donnée
    TriBulle(TriBulleList);
    cout<<"Tris à bulle du liste : ";
    afficher(TriBulleList);

    //tris par sélection
    TriSelect(TriSelectList);
    cout<<"Tris par selection  du liste : ";
    afficher(TriSelectList);

    //tris par insertion
    TriInsert(TriInsertList);
    cout<<"Tris par insertion  du liste : ";
    afficher(TriInsertList);

         return 0;
}
