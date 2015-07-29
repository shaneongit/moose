/****************************************************************/
/*               DO NOT MODIFY THIS HEADER                      */
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*           (c) 2010 Battelle Energy Alliance, LLC             */
/*                   ALL RIGHTS RESERVED                        */
/*                                                              */
/*          Prepared by Battelle Energy Alliance, LLC           */
/*            Under Contract No. DE-AC07-05ID14517              */
/*            With the U. S. Department of Energy               */
/*                                                              */
/*            See COPYRIGHT for full restrictions               */
/****************************************************************/

#ifndef SETUPTIMEINTEGRATORACTION_H
#define SETUPTIMEINTEGRATORACTION_H

#include "MooseObjectAction.h"

class SetupTimeIntegratorAction;

template<>
InputParameters validParams<SetupTimeIntegratorAction>();

/**
 *
 */
class SetupTimeIntegratorAction : public MooseObjectAction
{
public:
  SetupTimeIntegratorAction(const InputParameters & parameters);
  SetupTimeIntegratorAction(const std::string & deprecated_name, InputParameters parameters); // DEPRECATED CONSTRUCTOR
  virtual ~SetupTimeIntegratorAction();

  virtual void act();

protected:

};


#endif /* SETUPTIMEINTEGRATORACTION_H */
