//
// Created by mwo on 5/11/15.
//

#ifndef XMREG03_MICROCORE_H
#define XMREG03_MICROCORE_H


#include "monero_headers.h"


#include <iostream>


namespace xmreg
{
    using namespace cryptonote;
    using namespace std;

    /**
     * Micro version of cryptonode::core class
     * Micro version of constructor,
     * init and destructor are implemted.
     *
     * Just enough to read the blockchain
     * database for use in the example.
     */
    class MicroCore {

        tx_memory_pool m_mempool;
        Blockchain m_blockchain_storage;

    public:
        MicroCore();

        bool init(const string& blockchain_path);

        Blockchain& get_core();

        virtual ~MicroCore();
    };

}



#endif //XMREG03_MICROCORE_H
