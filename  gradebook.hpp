#include <iostream>
template <typename T>


class GradeBook{
 
    private:

    T n = 10;
    T m = 10;



    T grupo[n][m];



    public:

    GradeBook::Gradebook(grupo){grupo = _grupo;}
    



    llenar(T grupo[n][m]){
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j  < m; j++){
            std::cout"ingresa la calificacion del alumno" << i+1 << std::endl;  
            std::cout << "MATERIA" << i+1 << ":" std::endl;
            std::cin >> grupo[i][j];
            }
            std::cout <<"ya no hay mas alumnos" <<std::endl;
        } 
    }



    //pormedio maximo y minimo del grupo y por estudiante
    gen_reporte( T grupo[n][m]){

        T suma = 0; 
        T prom_al = 0;
        

        std::cout << "promedio por estudiante" <<std::endl;
        
        for(int i = 0; i < m, i++){
            for(int j = 0; j < n; j++){
            suma += grupo[i];
            prom_al/m;  
            }
        }



    }

}


/* for(int i = 0; i < n, i++){
            for(int j = 0; j < m, j++){
                
            }
        }

