/*******************************************************************************
 * @file ClientL.h
 * @author Nathan J. Hood ( @StoneyDSP )
 * @brief Declares the main routine of the library.
 * @version 0.1.0.0
 * @date 2022-08-23
 *
 * @copyright Copyright (c) 2022
 *
 * Reference headers your program requires here.
 *
 *******************************************************************************
*/

#pragma once

#ifndef CLIENTL_H_INCLUDED
#define CLIENTL_H_INCLUDED

// Global app config header.
#include "ClientLConfig.h"

#include <iostream>
#include <string.h>

/**
 * @brief The ClientL object class.
 *
 */
class ClientL
{
public:
    /**
     * @brief Construct a new ClientL object
     *
     */
    ClientL();

    /**
     * @brief Destroy the ClientL object
     *
     */
    ~ClientL();
private:
    std::string configuration;
};

#endif // CLIENTL_H_INCLUDED
