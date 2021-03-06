//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface APSPDYSwitchConfig : NSObject
{
    _Bool _open;
    _Bool _openNetworkLog;
    _Bool _openSpdyLog;
    _Bool _isDNSOpen;
    _Bool _isAMRPC;
    _Bool _storageCookie;
    _Bool _pushToRpc;
    _Bool _closeUnbind;
    _Bool _pushAyncSave;
    _Bool _pushRegBindRPC;
    _Bool _pushAsyncSettings;
    _Bool _pushSwitchForegroundCheck;
    _Bool _rpcLaunchWhiteList;
    _Bool _bgTaskOpen;
    _Bool _newDNS;
    _Bool _ashb;
    _Bool _syncMd5ToSpanner;
    _Bool _syncDBErrSwitch;
    _Bool _syncRepRecCount;
    _Bool _productVerSwitch;
    _Bool _netDetect;
    _Bool _massSwitch;
    _Bool _preLoadSwitch;
    _Bool _canUseAsyncSocket;
    _Bool _rpcAtlas;
    _Bool _initMergeCommand;
    _Bool _upExtInfo;
    _Bool _zstdWhiteListSwitch;
    _Bool _pushRegisterAdaptor;
    _Bool _useUNNotification;
    _Bool _useCategoryAdaptor;
    _Bool _backFetch;
    _Bool _dnsNewReq;
    _Bool _dnsSocketReq;
    _Bool _httpdnsSign;
    _Bool _httpdnsZip;
    _Bool _httpdnsPxy;
    _Bool _amdcClean;
    _Bool _isDownloadWithSPDY;
    _Bool _isDownloadWithASI;
    _Bool _isAPASI;
    _Bool _mustUseSPDY;
    _Bool _isResourceLog;
    _Bool _isBlackSPDYOrHttps;
    _Bool _specialChannelOpen;
    _Bool _reportBiz;
    _Bool _dynamicBizSw;
    _Bool _syncMultipleAppName;
    _Bool _asyncThread;
    _Bool _compensateSw;
    _Bool _dbIOESw;
    _Bool _syncOtl;
    _Bool _syncStmc;
    _Bool _lbsDump;
    _Bool _lbsNew;
    _Bool _dnsUseTTD;
    _Bool _dnsInit;
    _Bool _dnsValidateTTD;
    _Bool _mainLinkAllowIPv6;
    _Bool _wuaSwitch;
    _Bool _rpcControl;
    _Bool _useRefreshToken;
    _Bool _useUpTrackAll;
    _Bool _bifrostHit;
    _Bool _bifH2Hit;
    _Bool _loginRefresh;
    _Bool _specialChannelGrayHit;
    _Bool _fetchFilter;
    _Bool _rpcH2;
    _Bool _pushSwitch;
    _Bool _clientLog;
    _Bool _passUserInfo;
    _Bool _opCountSwitch;
    _Bool _useLoginState;
    _Bool _rpcCrypt;
    _Bool _networkInited;
    _Bool _rewriteCookie;
    _Bool _sensorSwitch;
    _Bool _unavailableNew;
    _Bool _schemaRPC;
    _Bool _multiLink;
    _Bool _quicEnable;
    _Bool _shadowRpcEnable;
    _Bool _rpcProUpgrade;
    _Bool _userIdSwitch;
    _Bool _sendbiz;
    int _errorThreshold;
    int _syncDBCodeBackup;
    int _dnshttpip;
    int _dbConfigurePragma;
    int _maxBackupIpTryCount;
    double _connectionTimeout;
    long long _dnsRT;
    long long _spdyLogLevel;
    long long _spdyUseAPLog;
    NSDictionary *_massConfig;
    NSDictionary *_ccdnConfig;
    NSDictionary *_ccdnSetting;
    NSArray *_shortRPCList;
    NSArray *_zstdRPCList;
    NSArray *_zstdBlackList;
    NSArray *_blackRPCList;
    NSString *_stl1_Id;
    NSString *_stl2_Id;
    NSString *_stlQuicId;
    long long _lbsLevel;
    unsigned long long _lbsInterval;
    unsigned long long _reqDataSize;
    unsigned long long _respDataSize;
    NSArray *_keyBizRPCList;
    NSArray *_h2RPCList;
    NSArray *_mdapAPIList;
    NSArray *_multiLinkList;
    NSDictionary *_quicConfig;
    NSArray *_supportQuicRPCList;
    NSArray *_onlyQuicRPCList;
    NSArray *_shadowRpcList;
    NSArray *_aixBlackList;
    long long _syncShortSwitch;
    NSDictionary *_syncPollTime;
    NSArray *_syncShortBizs;
    NSDictionary *_syncCfg;
}

+ (_Bool)graySwitchEnableNegativeWithConfig:(id)arg1;
+ (_Bool)graySwitchWithConfig:(id)arg1;
+ (_Bool)canUseQuicByEnv;
+ (_Bool)useRPCRetry;
+ (void)useShortFrequency;
+ (void)useHttpShortChannel;
+ (_Bool)useNewOpenssl;
+ (_Bool)isAMRPC;
+ (id)defaultConfig;
+ (void)initialize;
@property(retain) NSDictionary *syncCfg; // @synthesize syncCfg=_syncCfg;
@property(retain) NSArray *syncShortBizs; // @synthesize syncShortBizs=_syncShortBizs;
@property(nonatomic) _Bool sendbiz; // @synthesize sendbiz=_sendbiz;
@property(retain) NSDictionary *syncPollTime; // @synthesize syncPollTime=_syncPollTime;
@property(nonatomic) long long syncShortSwitch; // @synthesize syncShortSwitch=_syncShortSwitch;
@property(nonatomic) _Bool userIdSwitch; // @synthesize userIdSwitch=_userIdSwitch;
@property(retain) NSArray *aixBlackList; // @synthesize aixBlackList=_aixBlackList;
@property(nonatomic) _Bool rpcProUpgrade; // @synthesize rpcProUpgrade=_rpcProUpgrade;
@property(retain) NSArray *shadowRpcList; // @synthesize shadowRpcList=_shadowRpcList;
@property _Bool shadowRpcEnable; // @synthesize shadowRpcEnable=_shadowRpcEnable;
@property(retain) NSArray *onlyQuicRPCList; // @synthesize onlyQuicRPCList=_onlyQuicRPCList;
@property(retain) NSArray *supportQuicRPCList; // @synthesize supportQuicRPCList=_supportQuicRPCList;
@property _Bool quicEnable; // @synthesize quicEnable=_quicEnable;
@property(retain) NSDictionary *quicConfig; // @synthesize quicConfig=_quicConfig;
@property(retain) NSArray *multiLinkList; // @synthesize multiLinkList=_multiLinkList;
@property _Bool multiLink; // @synthesize multiLink=_multiLink;
@property _Bool schemaRPC; // @synthesize schemaRPC=_schemaRPC;
@property _Bool unavailableNew; // @synthesize unavailableNew=_unavailableNew;
@property _Bool sensorSwitch; // @synthesize sensorSwitch=_sensorSwitch;
@property _Bool rewriteCookie; // @synthesize rewriteCookie=_rewriteCookie;
@property _Bool networkInited; // @synthesize networkInited=_networkInited;
@property _Bool rpcCrypt; // @synthesize rpcCrypt=_rpcCrypt;
@property _Bool useLoginState; // @synthesize useLoginState=_useLoginState;
@property _Bool opCountSwitch; // @synthesize opCountSwitch=_opCountSwitch;
@property _Bool passUserInfo; // @synthesize passUserInfo=_passUserInfo;
@property _Bool clientLog; // @synthesize clientLog=_clientLog;
@property _Bool pushSwitch; // @synthesize pushSwitch=_pushSwitch;
@property(retain) NSArray *mdapAPIList; // @synthesize mdapAPIList=_mdapAPIList;
@property(retain) NSArray *h2RPCList; // @synthesize h2RPCList=_h2RPCList;
@property _Bool rpcH2; // @synthesize rpcH2=_rpcH2;
@property _Bool fetchFilter; // @synthesize fetchFilter=_fetchFilter;
@property(retain) NSArray *keyBizRPCList; // @synthesize keyBizRPCList=_keyBizRPCList;
@property(nonatomic) _Bool specialChannelGrayHit; // @synthesize specialChannelGrayHit=_specialChannelGrayHit;
@property(nonatomic) _Bool loginRefresh; // @synthesize loginRefresh=_loginRefresh;
@property(nonatomic) _Bool bifH2Hit; // @synthesize bifH2Hit=_bifH2Hit;
@property(nonatomic) _Bool bifrostHit; // @synthesize bifrostHit=_bifrostHit;
@property(nonatomic) int maxBackupIpTryCount; // @synthesize maxBackupIpTryCount=_maxBackupIpTryCount;
@property(nonatomic) _Bool useUpTrackAll; // @synthesize useUpTrackAll=_useUpTrackAll;
@property(nonatomic) _Bool useRefreshToken; // @synthesize useRefreshToken=_useRefreshToken;
@property(nonatomic) _Bool rpcControl; // @synthesize rpcControl=_rpcControl;
@property(nonatomic) unsigned long long respDataSize; // @synthesize respDataSize=_respDataSize;
@property(nonatomic) unsigned long long reqDataSize; // @synthesize reqDataSize=_reqDataSize;
@property(nonatomic) _Bool wuaSwitch; // @synthesize wuaSwitch=_wuaSwitch;
@property(nonatomic) _Bool mainLinkAllowIPv6; // @synthesize mainLinkAllowIPv6=_mainLinkAllowIPv6;
@property(nonatomic) _Bool dnsValidateTTD; // @synthesize dnsValidateTTD=_dnsValidateTTD;
@property(nonatomic) _Bool dnsInit; // @synthesize dnsInit=_dnsInit;
@property(nonatomic) _Bool dnsUseTTD; // @synthesize dnsUseTTD=_dnsUseTTD;
@property(nonatomic) unsigned long long lbsInterval; // @synthesize lbsInterval=_lbsInterval;
@property _Bool lbsNew; // @synthesize lbsNew=_lbsNew;
@property _Bool lbsDump; // @synthesize lbsDump=_lbsDump;
@property long long lbsLevel; // @synthesize lbsLevel=_lbsLevel;
@property(nonatomic) _Bool syncStmc; // @synthesize syncStmc=_syncStmc;
@property(nonatomic) _Bool syncOtl; // @synthesize syncOtl=_syncOtl;
@property(nonatomic) _Bool dbIOESw; // @synthesize dbIOESw=_dbIOESw;
@property(nonatomic) int dbConfigurePragma; // @synthesize dbConfigurePragma=_dbConfigurePragma;
@property(nonatomic) _Bool compensateSw; // @synthesize compensateSw=_compensateSw;
@property(nonatomic) _Bool asyncThread; // @synthesize asyncThread=_asyncThread;
@property(nonatomic) _Bool syncMultipleAppName; // @synthesize syncMultipleAppName=_syncMultipleAppName;
@property(nonatomic) _Bool dynamicBizSw; // @synthesize dynamicBizSw=_dynamicBizSw;
@property(nonatomic) _Bool reportBiz; // @synthesize reportBiz=_reportBiz;
@property(retain) NSString *stlQuicId; // @synthesize stlQuicId=_stlQuicId;
@property(retain) NSString *stl2_Id; // @synthesize stl2_Id=_stl2_Id;
@property(retain) NSString *stl1_Id; // @synthesize stl1_Id=_stl1_Id;
@property(nonatomic) _Bool specialChannelOpen; // @synthesize specialChannelOpen=_specialChannelOpen;
@property(nonatomic) _Bool isBlackSPDYOrHttps; // @synthesize isBlackSPDYOrHttps=_isBlackSPDYOrHttps;
@property(retain) NSArray *blackRPCList; // @synthesize blackRPCList=_blackRPCList;
@property(nonatomic) _Bool isResourceLog; // @synthesize isResourceLog=_isResourceLog;
@property(nonatomic) _Bool mustUseSPDY; // @synthesize mustUseSPDY=_mustUseSPDY;
@property(nonatomic) _Bool isAPASI; // @synthesize isAPASI=_isAPASI;
@property(nonatomic) _Bool isDownloadWithASI; // @synthesize isDownloadWithASI=_isDownloadWithASI;
@property(nonatomic) _Bool isDownloadWithSPDY; // @synthesize isDownloadWithSPDY=_isDownloadWithSPDY;
@property(nonatomic) _Bool amdcClean; // @synthesize amdcClean=_amdcClean;
@property(nonatomic) _Bool httpdnsPxy; // @synthesize httpdnsPxy=_httpdnsPxy;
@property(nonatomic) _Bool httpdnsZip; // @synthesize httpdnsZip=_httpdnsZip;
@property(nonatomic) _Bool httpdnsSign; // @synthesize httpdnsSign=_httpdnsSign;
@property(nonatomic) _Bool dnsSocketReq; // @synthesize dnsSocketReq=_dnsSocketReq;
@property(nonatomic) _Bool dnsNewReq; // @synthesize dnsNewReq=_dnsNewReq;
@property(nonatomic) int dnshttpip; // @synthesize dnshttpip=_dnshttpip;
@property(nonatomic) _Bool backFetch; // @synthesize backFetch=_backFetch;
@property(nonatomic) _Bool useCategoryAdaptor; // @synthesize useCategoryAdaptor=_useCategoryAdaptor;
@property(nonatomic) _Bool useUNNotification; // @synthesize useUNNotification=_useUNNotification;
@property(nonatomic) _Bool pushRegisterAdaptor; // @synthesize pushRegisterAdaptor=_pushRegisterAdaptor;
@property(nonatomic) _Bool zstdWhiteListSwitch; // @synthesize zstdWhiteListSwitch=_zstdWhiteListSwitch;
@property(retain) NSArray *zstdBlackList; // @synthesize zstdBlackList=_zstdBlackList;
@property(retain) NSArray *zstdRPCList; // @synthesize zstdRPCList=_zstdRPCList;
@property(nonatomic) _Bool upExtInfo; // @synthesize upExtInfo=_upExtInfo;
@property(nonatomic) _Bool initMergeCommand; // @synthesize initMergeCommand=_initMergeCommand;
@property(retain) NSArray *shortRPCList; // @synthesize shortRPCList=_shortRPCList;
@property(nonatomic) _Bool rpcAtlas; // @synthesize rpcAtlas=_rpcAtlas;
@property(nonatomic) _Bool canUseAsyncSocket; // @synthesize canUseAsyncSocket=_canUseAsyncSocket;
@property(retain) NSDictionary *ccdnSetting; // @synthesize ccdnSetting=_ccdnSetting;
@property(retain) NSDictionary *ccdnConfig; // @synthesize ccdnConfig=_ccdnConfig;
@property(retain) NSDictionary *massConfig; // @synthesize massConfig=_massConfig;
@property(nonatomic) _Bool preLoadSwitch; // @synthesize preLoadSwitch=_preLoadSwitch;
@property(nonatomic) _Bool massSwitch; // @synthesize massSwitch=_massSwitch;
@property(nonatomic) _Bool netDetect; // @synthesize netDetect=_netDetect;
@property(nonatomic) _Bool productVerSwitch; // @synthesize productVerSwitch=_productVerSwitch;
@property(nonatomic) _Bool syncRepRecCount; // @synthesize syncRepRecCount=_syncRepRecCount;
@property(nonatomic) int syncDBCodeBackup; // @synthesize syncDBCodeBackup=_syncDBCodeBackup;
@property(nonatomic) _Bool syncDBErrSwitch; // @synthesize syncDBErrSwitch=_syncDBErrSwitch;
@property(nonatomic) _Bool syncMd5ToSpanner; // @synthesize syncMd5ToSpanner=_syncMd5ToSpanner;
@property(nonatomic) long long spdyUseAPLog; // @synthesize spdyUseAPLog=_spdyUseAPLog;
@property(nonatomic) long long spdyLogLevel; // @synthesize spdyLogLevel=_spdyLogLevel;
@property(nonatomic) long long dnsRT; // @synthesize dnsRT=_dnsRT;
@property(nonatomic) _Bool ashb; // @synthesize ashb=_ashb;
@property(nonatomic) _Bool newDNS; // @synthesize newDNS=_newDNS;
@property(nonatomic) _Bool bgTaskOpen; // @synthesize bgTaskOpen=_bgTaskOpen;
@property(nonatomic) _Bool rpcLaunchWhiteList; // @synthesize rpcLaunchWhiteList=_rpcLaunchWhiteList;
@property(nonatomic) _Bool pushSwitchForegroundCheck; // @synthesize pushSwitchForegroundCheck=_pushSwitchForegroundCheck;
@property(nonatomic) _Bool pushAsyncSettings; // @synthesize pushAsyncSettings=_pushAsyncSettings;
@property(nonatomic) _Bool pushRegBindRPC; // @synthesize pushRegBindRPC=_pushRegBindRPC;
@property(nonatomic) _Bool pushAyncSave; // @synthesize pushAyncSave=_pushAyncSave;
@property(nonatomic) _Bool closeUnbind; // @synthesize closeUnbind=_closeUnbind;
@property(nonatomic) _Bool pushToRpc; // @synthesize pushToRpc=_pushToRpc;
@property(nonatomic) _Bool storageCookie; // @synthesize storageCookie=_storageCookie;
@property(nonatomic) _Bool isAMRPC; // @synthesize isAMRPC=_isAMRPC;
@property(nonatomic) _Bool isDNSOpen; // @synthesize isDNSOpen=_isDNSOpen;
@property(nonatomic) double connectionTimeout; // @synthesize connectionTimeout=_connectionTimeout;
@property(nonatomic) _Bool openSpdyLog; // @synthesize openSpdyLog=_openSpdyLog;
@property(nonatomic) _Bool openNetworkLog; // @synthesize openNetworkLog=_openNetworkLog;
@property(nonatomic) int errorThreshold; // @synthesize errorThreshold=_errorThreshold;
@property(nonatomic) _Bool open; // @synthesize open=_open;
- (void).cxx_destruct;
- (void)updateQUICSwitch:(id)arg1;
- (_Bool)rpcInAixBlackList:(id)arg1;
- (void)updateQUICConfig:(id)arg1;
- (_Bool)triggerShadowRpc:(id)arg1;
- (_Bool)onlyQuic:(id)arg1;
- (_Bool)supportQuic:(id)arg1;
- (void)refreshQUICSwitch;
- (void)updateCCDNSetting:(id)arg1;
- (void)updateCCDNSettingConfig:(id)arg1;
- (void)refreshCCDNSetting;
- (void)computeGrayDic:(id)arg1 withKey:(id)arg2;
- (void)computeAnReplaceGray:(id)arg1 withKey:(id)arg2;
- (void)updateCCDNSwitch:(id)arg1;
- (void)updateCCDNConfig:(id)arg1;
- (void)refreshCCDNSwitch;
- (_Bool)useMultiLink:(id)arg1;
- (void)updateMASSConfigSwitch:(id)arg1 formStorage:(_Bool)arg2;
- (id)curUserId;
- (void)updateiosNetworkCoreSwitch:(id)arg1;
- (void)updateRPCSwitch:(id)arg1;
- (void)updateShortRPCList:(id)arg1;
- (void)updateResendSwitch:(id)arg1;
- (void)updateLogSwitch:(id)arg1;
- (void)updateCDNSwitch:(id)arg1;
- (void)updateMMTPModelSwitch:(id)arg1;
- (void)updateShortChannelTimeoutConfig:(id)arg1;
- (void)updateStatusSwitch:(id)arg1;
- (_Bool)graySwitchEnableNegative3key:(id)arg1 orgSwitch:(_Bool)arg2;
- (_Bool)graySwitch3key:(id)arg1 orgSwitch:(_Bool)arg2;
- (void)updateInit1001Switch:(id)arg1;
- (void)updateIPV6Switch:(id)arg1;
- (void)updateNewFunSwitch:(id)arg1;
- (void)useAMRPC:(_Bool)arg1;
- (void)updateAbTag:(id)arg1;
- (void)updateStorage;
- (void)updateQosConfig:(id)arg1;
- (void)updateExtInitConfig:(id)arg1;
- (void)updateHttpDNSConfig:(id)arg1;
- (void)updateProxySwitchConfig:(id)arg1;
- (void)updateBlackRPCList:(id)arg1;
- (void)updateSpecialChannelSwitch:(id)arg1;
- (void)updateSwitchConfig:(id)arg1;
- (void)updateZstdConfig:(id)arg1;
- (void)updateLBSConfig:(id)arg1;
- (void)updateWUAConfig:(id)arg1;
- (void)updateRPCSizeConfig:(id)arg1;
- (void)updateLoginRefreshConfig:(id)arg1;
- (void)updateKeyBizConfig:(id)arg1;
- (void)updateH2Config:(id)arg1;
- (void)updateMDAPConfig:(id)arg1;
- (_Bool)canUseBifrostForLowPhone:(id)arg1;
- (void)doUpdateBifrostConfig:(id)arg1;
- (void)updateBifrostConfig:(id)arg1;
- (void)updateiosNetworkSwitch:(id)arg1;
- (id)updateConfig:(id)arg1 configKey:(id)arg2 saveKey:(id)arg3 userDefault:(_Bool)arg4;
- (id)updateConfig:(id)arg1 configKey:(id)arg2 saveKey:(id)arg3;
- (void)updateSyncCConfig:(id)arg1;
- (void)updateNetDiagnoseConfig:(id)arg1;
- (void)updateiOSNetworkCore:(id)arg1;
- (void)updateiOSNetworkCoreConfig:(id)arg1;
- (void)updateiOSNetworkConfig:(id)arg1;
- (void)updateSPDYConfigFormNotification:(id)arg1;
- (void)setSPDYProxyEnable:(_Bool)arg1;
- (void)_openSPDYConfig:(id)arg1 value:(id)arg2;
- (void)updateSPDYValue:(id)arg1 withKey:(id)arg2;
- (void)updateConfig:(id)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;
- (void)refreshShortSyncCfg;
- (void)updateSyncSwitch:(id)arg1;
- (void)updateSyncSwitchOnce:(id)arg1;
- (void)refreshSyncSwitch;
- (void)updateMMDPMMUPSwitch:(id)arg1;
- (void)updateMASSSwitch:(id)arg1 formStorage:(_Bool)arg2;
- (void)updateAMRPCSwitch:(id)arg1 needNotifyIfChange:(_Bool)arg2 formStorage:(_Bool)arg3;
- (void)updateNetDetect:(id)arg1;
- (void)refreshAMRPCSwitch;
- (void)refreshiosNetworkSwitchOnce;
- (void)refreshiosNetworkSwitch;
- (id)init;

@end

