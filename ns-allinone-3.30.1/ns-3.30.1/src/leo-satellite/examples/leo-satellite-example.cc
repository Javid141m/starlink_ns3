/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */

#include "ns3/core-module.h"
#include "ns3/leo-satellite-config.h"

using namespace ns3;


int 
main (int argc, char *argv[])
{
  //bool verbose = true;

  CommandLine cmd;
  //cmd.AddValue ("verbose", "Tell application to log if true", verbose);

  cmd.Parse (argc,argv);

  LeoSatelliteConfig sat_network(10, 12, 2000);
  sat_network.UpdateLinks();

  /* ... */

  //Simulator::Run ();
  //Simulator::Destroy ();
  return 0; 
}


