#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Personne {
    string nom;
    string prenom;
    int age;
};

bool comparaisonPerson (Personne& personne1 , Personne& personne2){
    //comparaison des noms
    if(personne1.nom< personne2.nom){
            return true ;
    }else if (personne1.nom > personne2.nom){
        return false;
    }
    //dans le cas ou les noms sont identiques , on compare les prénoms
    return personne1.prenom < personne2.prenom;
}

int main() {
    vector<Personne> listePersonne;
    int nbr;
    cout<<"combien de pesonne vous souhaitez saisir leurs informations :  ";
    cin>>nbr;
    //saisie des infos des personnes
    int i;
    for( i=0 ; i<nbr ; i++){
         Personne personne ;
         cout<<"* enter le nom de la personne"<<(i+1)<<" : ";
         cin>> personne.nom;

         cout<<"* enter le prénom de la personne"<<(i+1)<<" : ";
         cin>> personne.prenom;

         cout<<"* enter l'age de la personne"<<(i+1)<<" : ";
         cin>> personne.age;
         listePersonne.push_back(personne);
           }
//trier la liste des personnes en utilisant la fonction de comparaison
    sort(listePersonne.begin(), listePersonne.end(), comparaisonPerson);
         cout<<"la liste des personnes triée est : "<<endl;
        for ( Personne& personne : listePersonne) {
            cout << "Nom : " << personne.nom << ", Prénom : " << personne.prenom << ", Âge : " << personne.age << endl;
        }
        return 0;
    }

