/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/06/21
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

bool SergioAlberino(char * cadena, size_t espacio);

bool MiltonEduardoSosa(char * cadena, size_t espacio);

bool FlorenciaBattocchia(char * cadena, size_t espacio);

bool EstebanVolentini(char * cadena, size_t espacio);

bool NahuelEspinosa(char * cadena, size_t espacio);

bool AlejandroPermingeat(char * cadena, size_t espacio);

bool CristianTrinidad(char * cadena, size_t espacio);

bool GasparSantamarina(char * cadena, size_t espacio);

bool PabloAguirre(char * cadena, size_t espacio);

bool RonalCelaya(char * cadena, size_t espacio);

bool FranciscoTimez(char * cadena, size_t espacio);

bool PabloSeverini(char * cadena, size_t espacio);

bool GustavoRamoscelli(char * cadena, size_t espacio);

bool FabiolaDeLasCasas(char * cadena, size_t espacio);

bool IvanSzkrabko(char * cadena, size_t espacio);

bool FelipeCalcavecchia(char * cadena, size_t espacio);

bool PabloFolino(char * cadena, size_t espacio);

bool AlejandroMoreno(char * cadena, size_t espacio);

bool FernandoDaniele(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
