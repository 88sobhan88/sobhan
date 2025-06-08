#ifndef AGENT_H
#define AGENT_H

#include <QMainWindow>

class Agent  {
public :
    Agent(QWidget *parent = nullptr);

protected :
    int hp ;
    int mobility ;
    int damge ;
    int attackRange ;
};

#endif // AGENT_H
