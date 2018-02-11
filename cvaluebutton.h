#ifndef VALUEBUTTON_H
#define VALUEBUTTON_H


class CValueButton
{
public:
    int m_finalValue;
    CValueButton();
    void AddValue( int a_iValue );
    void SubstractValue( int a_iValue );
    void ResetValue();
};

#endif // VALUEBUTTON_H
