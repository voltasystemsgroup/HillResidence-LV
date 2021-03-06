namespace AffinityClientConnectionModule.Client;
        // class declarations
         class ProxyServer;
         class ModuleType;
         class ConnectionState;
         class SignalInfo;
         class RemoteSystemControlProxy;
         class RepeatDigital;
         class SignalData;
         class eSigType;
         class JoinPacketTypes;
         class SignalDataObject;
         class SmartObjectJoinConnectionProxy;
         class SmartObjectJoinConnectionProxyV2;
         class ClientConnectionForSimplPlus;
         class RemoteSystemControlProxyV2;
    static class ProxyServer 
    {
        // class delegates

        // class events
        static EventHandler ConnectionStateChangeEvent ( ConnectionState obj );

        // class functions
        static FUNCTION Initialize ();
        static FUNCTION ConsoleDebug ( STRING paramConsoleData );
        static STRING_FUNCTION CreateFullKeyModuleName ( STRING paramModuleName );
        static FUNCTION Connect ();
        static FUNCTION Disconnect ();
        static FUNCTION UpdateServerWithAllClientModuleData ();
        static FUNCTION ProcessSendAllModuleDataToServer ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        static STRING ClientIPorHostName[];

        // class properties
        ConnectionState ConnectionStatus;
        STRING ServerIp[];
        SIGNED_LONG_INTEGER ServerPort;
        SIGNED_LONG_INTEGER CrpcVersion;
        STRING ProxyName[];
    };

    static class ModuleType // enum
    {
        static SIGNED_LONG_INTEGER None;
        static SIGNED_LONG_INTEGER ClientDriven;
        static SIGNED_LONG_INTEGER ServerDriven;
    };

    static class ConnectionState // enum
    {
        static SIGNED_LONG_INTEGER Disconnected;
        static SIGNED_LONG_INTEGER AttemptingConnection;
        static SIGNED_LONG_INTEGER SocketConnectionEstablished;
        static SIGNED_LONG_INTEGER CRPCConnectionEstablished;
    };

     class SignalInfo 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING SignalName[];
    };

     class RepeatDigital 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

    static class eSigType // enum
    {
        static SIGNED_LONG_INTEGER NA;
        static SIGNED_LONG_INTEGER Bool;
        static SIGNED_LONG_INTEGER UShort;
        static SIGNED_LONG_INTEGER String;
    };

    static class JoinPacketTypes // enum
    {
        static SIGNED_LONG_INTEGER Digital;
        static SIGNED_LONG_INTEGER Analog;
        static SIGNED_LONG_INTEGER RepeatDigital;
        static SIGNED_LONG_INTEGER BlinkMediumDigital;
    };

     class ClientConnectionForSimplPlus 
    {
        // class delegates
        delegate FUNCTION FunctionParamsIntArrayDelegate ( INTEGER paramUshortArray[] );
        delegate FUNCTION FunctionParamsIntDelegate ( INTEGER paramUshort );

        // class events

        // class functions
        FUNCTION Initialize ( INTEGER paramClientControllingServer , STRING paramModuleName );
        FUNCTION EnableConnection ();
        FUNCTION CloseConnection ();
        FUNCTION Debug ( INTEGER paramDebugMode );
        FUNCTION SetDigitalJoinValue ( STRING paramJoinName , INTEGER paramJoinValue );
        FUNCTION SetSignalNameFromSymbolList ( INTEGER paramSymbolIndexOneBased , STRING paramJoinName );
        FUNCTION RemoveSymbolJoinIndexFromClientListDict ( INTEGER paramSymbolIndexOneBased );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty FunctionParamsIntArrayDelegate SignalFbStatusArray;
        DelegateProperty FunctionParamsIntDelegate ConnectionStatus;
        STRING KeyModuleName[];
    };

namespace AffinityClientConnection;
        // class declarations
         class Constants;
    static class Constants 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace AffinityClientConnection.Client.Serial_Client_Interface;
        // class declarations
         class MessageObject;
         class SerialInterfaceCRPCClient;
         class CrpcRoutingId;
         class MediaPlayerSerialClientProxy;
         class SerialClientInterface;
    static class SerialInterfaceCRPCClient 
    {
        // class delegates

        // class events

        // class functions
        static FUNCTION ProxyServer_OnNotCrpcReady ();
        static FUNCTION Initialize ();
        static FUNCTION UpdateConnectionStatus ();
        static FUNCTION SendMessageToServer ( STRING message );
        static FUNCTION ProcessMessageFromServer ( STRING message );
        static FUNCTION ProcessRoutedMessageFromServer ( STRING message , SIGNED_LONG_INTEGER id );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

    static class CrpcRoutingId // enum
    {
        static SIGNED_LONG_INTEGER MediaPlayerSourceSelect;
        static SIGNED_LONG_INTEGER MediaPlayerSourceControl;
        static SIGNED_LONG_INTEGER MediaPlayerGenericSerialJoin;
    };

     class MediaPlayerSerialClientProxy 
    {
        // class delegates
        delegate FUNCTION DelegateSimplString ( SIMPLSHARPSTRING string1 );
        delegate FUNCTION DelegateFnUshort ( INTEGER ushort1 );

        // class events

        // class functions
        FUNCTION Initialize ();
        FUNCTION SourceSelectCrpcFromSmartObject ( STRING pkt );
        FUNCTION SourceControlCrpcFromSmartObject ( STRING pkt );
        FUNCTION ClientRxV2 ( STRING pkt , SIGNED_LONG_INTEGER id );
        FUNCTION Dispose ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateSimplString MessageFromServerToSourceSelect;
        DelegateProperty DelegateSimplString MessageFromServerToSourceControl;
        DelegateProperty DelegateSimplString SendSerial;
        DelegateProperty DelegateFnUshort TriggerServerConnected;
    };

     class SerialClientInterface 
    {
        // class delegates
        delegate FUNCTION DelegateSimplString ( SIMPLSHARPSTRING string1 );
        delegate FUNCTION DelegateFnUshort ( INTEGER ushort1 );

        // class events

        // class functions
        FUNCTION Initialize ();
        FUNCTION ClientRx ( STRING pkt );
        FUNCTION Dispose ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty DelegateSimplString ClientTx;
        DelegateProperty DelegateSimplString SendSerial;
        DelegateProperty DelegateFnUshort TriggerServerConnected;
    };

namespace AffinityClientConnection.Logging;
        // class declarations
         class Log;
    static class Log 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace AffinityClientConnection.Configuration;
        // class declarations
         class EthernetSettings;
    static class EthernetSettings 
    {
        // class delegates

        // class events

        // class functions
        static FUNCTION Initialize ();
        static FUNCTION SetServerIPAddressorHostName ( STRING address );
        static FUNCTION SetServerPort ( INTEGER port );
        static FUNCTION SendOutServerConnectInfoEvent ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace AffinityClientConnection.Client.Serial_Client_Interface.CRPC_Calls;
        // class declarations
         class SmartObjectSerialJoinConnection;
     class SmartObjectSerialJoinConnection 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION SendMessageToServer ( STRING message );
        FUNCTION RequestNewTagFromServer ();
        FUNCTION SendIsSmartObjectTagValid ( SIGNED_LONG_INTEGER tag );
        FUNCTION Dispose ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

