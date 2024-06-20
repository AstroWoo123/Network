//--------------------------------------------------------------------------------------------------
// Network Lab                             Spring 2024                           System Programming
//
/// @file
/// @brief Common definitions
/// @author Bernhard Egger <bernhard@csap.snu.ac.kr>
/// @section changelog Change Log
/// 2021/11/24 Bernhard Egger created
/// 2024/05/31 ARC lab add constant definitions
///
/// @section license_section License
/// Copyright (c) 2021-2023, Computer Systems and Platforms Laboratory, SNU
/// Copyright (c) 2024, Architecture and Code Optimization Laboratory, SNU
/// All rights reserved.
///
/// Redistribution and use in source and binary forms, with or without modification, are permitted
/// provided that the following conditions are met:
///
/// - Redistributions of source code must retain the above copyright notice, this list of condi-
///   tions and the following disclaimer.
/// - Redistributions in binary form must reproduce the above copyright notice, this list of condi-
///   tions and the following disclaimer in the documentation and/or other materials provided with
///   the distribution.
///
/// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
/// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED  TO, THE IMPLIED  WARRANTIES OF MERCHANTABILITY
/// AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
/// CONTRIBUTORS  BE LIABLE FOR ANY DIRECT,  INDIRECT, INCIDENTAL, SPECIAL,  EXEMPLARY,  OR CONSE-
/// QUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
/// LOSS OF USE, DATA,  OR PROFITS; OR BUSINESS INTERRUPTION)  HOWEVER CAUSED AND ON ANY THEORY OF
/// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
/// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
/// DAMAGE.
//--------------------------------------------------------------------------------------------------

/// @name Macro definitions
/// @{

#define PORT 7777                                         ///< default port number
#define BUF_SIZE 65536                                    ///< default send & recv buffer size
#define IP "127.0.0.1"                                    ///< default loopback ip

/// @}

/// @name Constant definitions
/// @{

#define CUSTOMER_MAX 10                                   ///< maximum number of clients
#define NUM_KITCHEN 30                                    ///< number of kitchen thread(s)
#define MAX_BURGERS 5                                     ///< max number of burgers per order
#define BURGER_NUM_RAND 0                                 ///< randomly select the number of burgers

/// @}

/// @brief served burger types
enum burger_type {
  BURGER_BIGMAC,
  BURGER_CHEESE,
  BURGER_CHICKEN,
  BURGER_BULGOGI,
  BURGER_TYPE_MAX
};

extern char *burger_names[];                              ///< burger names as strings

