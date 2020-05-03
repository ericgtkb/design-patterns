#ifndef CASHDISPENSER_DISPENSE_CHAIN_H
#define CASHDISPENSER_DISPENSE_CHAIN_H


class DispenseChain {
public:
    virtual ~DispenseChain() = default;
    virtual void set_next_chain(DispenseChain* chain) = 0;
    virtual void dispense(int amount) = 0;
};


class DispenseChain100Dollar : public DispenseChain {
public:
    DispenseChain100Dollar() = default;
    void set_next_chain(DispenseChain* chain) override;
    void dispense(int amount) override;

private:
    DispenseChain* next_chain;

};


class DispenseChain50Dollar : public DispenseChain {
public:
    DispenseChain50Dollar() = default;
    void set_next_chain(DispenseChain* chain) override;
    void dispense(int amount) override;

private:
    DispenseChain* next_chain;

};


class DispenseChain20Dollar : public DispenseChain {
public:
    DispenseChain20Dollar() = default;
    void set_next_chain(DispenseChain* chain) override;
    void dispense(int amount) override;

private:
    DispenseChain* next_chain;

};


class DispenseChain5Dollar : public DispenseChain {
public:
    DispenseChain5Dollar() = default;
    void set_next_chain(DispenseChain* chain) override;
    void dispense(int amount) override;

private:
    DispenseChain* next_chain;

};


class DispenseChain1Dollar : public DispenseChain {
public:
    DispenseChain1Dollar() = default;
    void set_next_chain(DispenseChain* chain) override;
    void dispense(int amount) override;

private:
    DispenseChain* next_chain;

};


#endif // CASHDISPENSER_DISPENSE_CHAIN_H
