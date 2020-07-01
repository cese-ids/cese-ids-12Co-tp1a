/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/06/21
 */
 
/*=====[Inclusion of own header]=============================================*/

#include "alumnos.h"
#include <stdio.h>

/*=====[Inclusions of private function dependencies]=========================*/

/*=====[Definition macros of private constants]==============================*/

/*=====[Private function-like macros]========================================*/

/*=====[Definitions of private data types]===================================*/

/*=====[Definitions of external public global variables]=====================*/

/*=====[Definitions of public global variables]==============================*/

/*=====[Definitions of private global variables]=============================*/

/*=====[Prototypes (declarations) of private functions]======================*/

/*=====[Implementations of public functions]=================================*/

/*=====[Implementations of interrupt functions]==============================*/

bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno) {
    int resultado;
    const char FORMATO[] = "{"
        "\"documento\":\"%s\","
        "\"apellidos\":\"%s\","
        "\"nombres\":\"%s\""
    "}";

    resultado = snprintf(cadena, espacio, FORMATO, 
             alumno->documento, alumno->apellidos, alumno->nombres);

    return (resultado >= 0);
}

bool EstebanVolentini(char * cadena, size_t espacio) {
    static const struct alumno_s ALUMNO = {
        .apellidos = "VOLENTINI",
        .nombres = "Esteban Daniel",
        .documento = "23.517.968",
    };

    return SerializarAlumno(cadena, espacio, &ALUMNO);
}


bool FlorenciaBattocchia(char * cadena, size_t espacio) {
    static const struct alumno_s ALUMNO = {
        .apellidos = "BATTOCCHIA",
        .nombres = "Florencia Victoria",
        .documento = "35.664.105",

    };

    return SerializarAlumno(cadena, espacio, &ALUMNO);
}


bool NahuelEspinosa(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "ESPINOSA",
        .nombres = "Nahuel Ignacio",
        .documento = "35.730.467",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool AlejandroPermingeat(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "PERMINGEAT",
        .nombres = "Alejandro",
        .documento = "99.999.999",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool RonalCelaya(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "CELAYA",
        .nombres = "Ronal Dario",
        .documento = "95.949.636",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool CristianTrinidad(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "TRINIDAD",
        .nombres = "Cristian Alberto",
        .documento = "30.379.563",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool GasparSantamarina(char * cadena, size_t espacio)
{
    const struct alumno_s alumno = {
        .apellidos = "SANTAMARINA",
        .nombres = "Gaspar",
        .documento = "36.283.977",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool FranciscoTimez(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "TIMEZ",
        .nombres = "Francisco Gabriel",
        .documento = "34.826.419",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool PabloAguirre(char * cadena, size_t espacio) {
    static const struct alumno_s ALUMNO = {
        .apellidos = "AGUIRRE ",
        .nombres = "Pablo Andres",
        .documento = "39.698.978",
    };

    return SerializarAlumno(cadena, espacio, &ALUMNO);
}

bool PabloSeverini(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "SEVERINI",
        .nombres = "Pablo",
        .documento = "31.045.507",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

bool GustavoRamoscelli(char * cadena, size_t espacio) {
    const struct alumno_s alumno = {
        .apellidos = "RAMOSCELLI",
        .nombres = "Gustavo Ramoscelli",
        .documento = "22.053.392",
    };

    return SerializarAlumno(cadena, espacio, &alumno);
}

/*=====[Implementations of private functions]================================*/

