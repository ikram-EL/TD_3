#include <iostream>
#include <set>
#include <vector>
#include <list>

using namespace std;

//fonction d recherche
template <typename Container, typename T>
//fonction peut être utilisée avec différents types de conteneurs et de valeurs.
bool recherchElement(Container& container , T& valeur){
    for ( auto& element : container) {
        if (element == valeur) {
            return true;}
    }
    return false;}
int main() {

    set<int>parametres;
    for(int i=1 ; i<=100 ; i++){
        parametres.insert(i);
    }
int valeuRechercher = 33;
    bool trouve = recherchElement(parametres , valeuRechercher);
        if(trouve){
            cout<<" - la valeur recherchée est présente "<<endl;
        } else{
            cout<<" - la valeur recherchée n'existe pas "<<endl;
            }
        //utilisation avec un vecteur de string
        vector<string> vecteurString = {"Mars","Juin","Avril"};
        string motRechercher = "Juillet";
        bool trouveMot = recherchElement (vecteurString, motRechercher);
    if(trouveMot){
        cout<<" - le mot recherchée est présent "<<endl;
    } else{
        cout<<" - le mot recherchée n'existe pas "<<endl;
    }
    //utilisation avec une list d'entiers
            list<int> myListe ={12,8,4,9,3,21,30};
                int entieRechercher = 8;
            bool trouveNbr = recherchElement(myListe , entieRechercher)  ;
    if(trouveNbr){
        cout<<" - le nombre recherchée est présent "<<endl;
    } else{
        cout<<" - le nombre recherchée n'existe pas "<<endl;
    }
    //utilisation avec un tableau de type float
    float TableauFloat[]={1.2F , 4.4F , 8.1F,3.8F };
    float floatRechercher = 4.4F;
    bool trouveFloat = recherchElement(TableauFloat, floatRechercher);
    if(trouveFloat){
        cout<<" - le nombre float  recherchée est présent "<<endl;
    } else{
        cout<<" - le nombre float  n'existe pas "<<endl;
    }

    return 0;
}
