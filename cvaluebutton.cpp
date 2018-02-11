#include "cvaluebutton.h"

CValueButton::CValueButton()
{
    m_finalValue = 0;
}

void CValueButton::AddValue( int a_iValue )
{
    m_finalValue+=a_iValue;
}

void CValueButton::SubstractValue( int a_iValue )
{
    m_finalValue+=a_iValue;
}

void CValueButton::ResetValue()
{
    m_finalValue = 0;
}
