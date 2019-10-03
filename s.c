#include"ns3/core-module.h"
#include"ns3/network-module.h"
#include"ns3/internet-module.h"
#include"ns3/point-to-point-module.h"
#include"ns3/applications-module.h"
using namespace ns3;
NS_LOG_COMPONENT_DEFINE("firstscriptexample");
int main(int argc,char *argv[])
{
LogComponentEnable("UdpEchoClientApplication",LOG_LEVEL_INFO);
LogComponentEnable("UdpEchoServerApplication",LOG_LEVEL_INFO);
NodeContainer nodes;
nodes.Create(2);
PointToPointHelper pointToPoint;
pointToPoint.SetDeviceAttribute("DataRate",StringValue("5Mbps"));
pointToPoint.SetChannelAttribute("Delay",StringValue("2ms"));
NetDeviceContainer devices;
devices=pointToPoint.Install(nodes);
InternetStackHelper internet;
internet.Install(nodes);
Ipv4AddressHelper address;
address.SetBase("10.1.1.0","255.255.255.0");
Ipv4InterfaceContainer interfaces=address.Assign(devices);
UdpEchoServerHelper echoserver(9);
ApplicationContainer serverApps=echoserver.Install(nodes.Get(1));
serverApps.Start(Seconds(1.0));
serverApps.Stop(Seconds(10.0));
UdpEchoClientHelper echoClient(interfaces.GetAddress(1),9);
echoClient.SetAttribute("MaxPackets",UintegerValue(4));
echoClient.SetAttribute("Interval",TimeValue(Seconds(3)));
echoClient.SetAttribute("PacketSize",UintegerValue(1024));
ApplicationContainer ClientApps=echoClient.Install(nodes.Get(0));
ClientApps.Start(Seconds(2.0));
ClientApps.Stop(Seconds(10.0));
Simulator::Run();
Simulator::Destroy();
return 0;
}

