# include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter  row";
    cin>> r;
    cout<<"enter  coloumn";
    cin>>c;
    int** map = new int*[r];
    for (int i = 0; i < r; i++)
     { 
        map[i] = new int[c];
     }
     for (int i = 0; i < r; i++) 
     { for (int j = 0; j < c; j++) 
        { 
            map[i][j] = rand() % 5;
         } 
        }
          cout<< "===== GAME MAP ( " << r <<" x "<< c<< ") =====" <<endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout <<  map[i][j] << "\t";
        }
        cout<< endl;
    }
    cout<< "Legend: 0=Grass 1=Water 2=Mountain 3=Forest 4=Dungeon" << endl;

    int grass = 0 , water = 0, mountain = 0, forest = 0, dungeon = 0;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            int num = map[i][j];
            switch(num){
                case 0:
                    grass++;
                    break;
                case 1:
                    water++;
                    break;
                case 2:
                    mountain++;
                    break;
                case 3:
                    forest++;
                    break;
                case 4:
                    dungeon++;
                    break;
            }
        }
        cout<< endl;
    }
       cout<< "Tile Count:" << endl;
    cout<< "Grass : " << grass << endl;
    cout<< "Water : " << water << endl;
    cout<< "Mountain : " << mountain << endl;
    cout<< "Forest : " << forest << endl;
    cout<< "Dungeon : " << dungeon << endl;

    for(int i = 0;i<r ;i++){
        delete[] map[i];
    }
    delete[] map;


return 0;

}