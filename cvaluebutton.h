#ifndef VALUEBUTTON_H
#define VALUEBUTTON_H


class CValueButton
{
public:
    CValueButton( int m_iPointStepInput, int m_iIteratonLimitInput);
    int m_iPointValue;

private:
    int m_iPointStep;
    int m_iIterations;
    int m_iIteratonLimit;
    void AddValue( int a_iValue );
    void SubstractValue( int a_iValue );
    void Reset();
    void ResetPointValue();
    void ResetCurrentIteration();
    void IncreaseIteration();
    void AddIteration();
    void DecreaseIteration();
    void SubstractIteration();

    void SetMaxIterations();

};

#endif // VALUEBUTTON_H
