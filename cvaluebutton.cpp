#include "cvaluebutton.h"

CValueButton::CValueButton( int m_iPointStepInput, int m_iLoopLimitInput)
{
    m_iPointValue = 0;
    m_iIterations = 0;
    m_iPointStep = m_iPointStepInput;
    m_iIteratonLimit = m_iLoopLimitInput;

}

void CValueButton::AddValue( int a_iValue )
{
    m_iPointValue+=a_iValue;
}

void CValueButton::SubstractValue( int a_iValue )
{
    m_iPointValue-=a_iValue;
}

void CValueButton::Reset()
{
    ResetPointValue();
    ResetCurrentIteration();
}

void CValueButton::ResetPointValue()
{
    m_iPointValue = 0;
}

void CValueButton::ResetCurrentIteration()
{
    m_iIterations = 0;
}

void CValueButton::IncreaseIteration()
{
    if ( m_iIterations < m_iIteratonLimit )
        AddIteration();
    else
        ResetCurrentIteration();
}

void CValueButton::AddIteration()
{
    m_iIterations+=1;
}

void CValueButton::DecreaseIteration()
{
    if ( m_iIterations > 0 )
        SubstractIteration();
    else
        SetMaxIterations();
}

void CValueButton::SubstractIteration()
{
    m_iIterations-=1;
}

void CValueButton::SetMaxIterations()
{
    m_iIterations = m_iIteratonLimit;
}
