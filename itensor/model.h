#ifndef __ITENSOR_MODEL_H
#define __ITENSOR_MODEL_H
#include "iqtensor.h"

class Model
    {
    public:

    Model() { }

    //Number of Sites
    int 
    NN() const { return getNN(); }

    //Index at Site i
    const IQIndex& 
    si(int i) const { return getSi(i); }

    //Primed Index at Site i
    IQIndex 
    siP(int i) const { return getSiP(i); }

    //Operators -----------------------

    IQTensor 
    id(int i) const { return makeId(i); }

    //Spin Operators -----------------------

    IQTensor 
    sx(int i) const { return makeSx(i); }

    IQTensor 
    isy(int i) const { return makeISy(i); }

    IQTensor 
    sz(int i) const { return makeSz(i); }

    IQTensor 
    sp(int i) const { return makeSp(i); }

    IQTensor 
    sm(int i) const { return makeSm(i); }

    //Particle Operators -----------------------

    IQTensor
    n(int i) const { return makeN(i); }

    IQTensor
    C(int i) const { return makeC(i); }

    IQTensor
    Cdag(int i) const { return makeCdag(i); }

    IQTensor
    fermiPhase(int i) const { return makeFermiPhase(i); }

    //Hubbard Model Operators -----------

    IQTensor
    Nup(int i) const { return makeNup(i); }

    IQTensor
    Ndn(int i) const { return makeNdn(i); }

    IQTensor
    Nupdn(int i) const { return makeNupdn(i); }

    IQTensor
    Ntot(int i) const { return makeNtot(i); }

    IQTensor
    Cup(int i) const { return makeCup(i); }

    IQTensor
    Cdagup(int i) const { return makeCdagup(i); }

    IQTensor
    Cdn(int i) const { return makeCdn(i); }

    IQTensor
    Cdagdn(int i) const { return makeCdagdn(i); }

    //Other Methods -----------------------

    void 
    read(std::istream& s) { doRead(s); }

    void 
    write(std::ostream& s) const { doWrite(s); }

    virtual 
    ~Model() { }



    //Implementations (To Be Overridden by Derived Classes) 

    private:

    virtual int
    getNN() const = 0;

    virtual const IQIndex&
    getSi(int i) const = 0;

    virtual IQIndex
    getSiP(int i) const = 0;

    virtual IQTensor 
    makeId(int i) const;

    virtual IQTensor 
    makeSx(int i) const;

    virtual IQTensor 
    makeISy(int i) const;

    virtual IQTensor 
    makeSz(int i) const;

    virtual IQTensor 
    makeSp(int i) const;

    virtual IQTensor 
    makeSm(int i) const;

    virtual IQTensor 
    makeN(int i) const;

    virtual IQTensor 
    makeC(int i) const;

    virtual IQTensor 
    makeCdag(int i) const;

    virtual IQTensor 
    makeFermiPhase(int i) const;

    virtual IQTensor 
    makeNup(int i) const;

    virtual IQTensor 
    makeNdn(int i) const;

    virtual IQTensor 
    makeNupdn(int i) const;

    virtual IQTensor 
    makeNtot(int i) const;

    virtual IQTensor 
    makeCup(int i) const;

    virtual IQTensor 
    makeCdagup(int i) const;

    virtual IQTensor 
    makeCdn(int i) const;

    virtual IQTensor 
    makeCdagdn(int i) const;


    protected:

    virtual void
    doRead(std::istream& s) = 0;

    virtual void
    doWrite(std::ostream& s) const = 0;

    };

inline IQTensor Model::
makeId(int i) const
    { 
    IQTensor id_(si(i),siP(i));
    for(int j = 1; j <= si(i).m(); ++j)
        id_(si(i)(j),siP(i)(j)) = 1;
    return id_;
    }

inline IQTensor Model::
makeSx(int i) const 
    { 
    Error("sx not implemented"); 
    return IQTensor();
    }

inline IQTensor Model::
makeISy(int i) const 
    { 
    Error("isy not implemented"); 
    return IQTensor();
    }

inline IQTensor Model::
makeSz(int i) const 
    { 
    Error("sz not implemented"); 
    return IQTensor();
    }

inline IQTensor Model::
makeSp(int i) const 
    { 
    Error("sp not implemented"); 
    return IQTensor();
    }

inline IQTensor Model::
makeSm(int i) const 
    { 
    Error("sm not implemented"); 
    return IQTensor();
    }

inline IQTensor Model::
makeN(int i) const 
    { 
    Error("n not implemented"); 
    return IQTensor();
    }

inline IQTensor Model::
makeC(int i) const 
    { 
    Error("C not implemented"); 
    return IQTensor();
    }

inline IQTensor Model::
makeCdag(int i) const 
    { 
    Error("Cdag not implemented"); 
    return IQTensor();
    return IQTensor(); 
    }

inline IQTensor Model::
makeFermiPhase(int i) const 
    { 
    Error("fermiPhase not implemented"); 
    return IQTensor();
    return IQTensor(); 
    }

inline IQTensor Model::
makeNup(int i) const 
    { 
    Error("Nup not implemented"); 
    return IQTensor();
    return IQTensor(); 
    }

inline IQTensor Model::
makeNdn(int i) const 
    { 
    Error("Ndn not implemented"); 
    return IQTensor();
    return IQTensor(); 
    }

inline IQTensor Model::
makeNupdn(int i) const 
    { 
    Error("Nupdn not implemented"); 
    return IQTensor();
    return IQTensor(); 
    }

inline IQTensor Model::
makeNtot(int i) const 
    { 
    Error("Ntot not implemented"); 
    return IQTensor();
    return IQTensor(); 
    }

inline IQTensor Model::
makeCup(int i) const 
    { 
    Error("Cup not implemented"); 
    return IQTensor();
    return IQTensor(); 
    }

inline IQTensor Model::
makeCdagup(int i) const 
    { 
    Error("Cdagup not implemented"); 
    return IQTensor();
    }

inline IQTensor Model::
makeCdn(int i) const 
    { 
    Error("Cdn not implemented"); 
    return IQTensor();
    }

inline IQTensor Model::
makeCdagdn(int i) const 
    { 
    Error("Cdagdn not implemented"); 
    return IQTensor();
    }

inline std::ostream& 
operator<<(std::ostream& s, const Model& M)
    {
    s << "Model:\n";
    for(int j = 1; j <= M.NN(); ++j) 
        s << boost::format("si(%d) = ")%j << M.si(j) << "\n";
    return s;
    }

#endif
