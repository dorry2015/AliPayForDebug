//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol MAStorageDelegate;

@interface AMNetInitConfig : NSObject
{
    _Bool _isBifrost;
    _Bool _isH2Bifrost;
    _Bool _isDebuggable;
    _Bool _isStdH2Bifrost;
    _Bool _isH2Export;
    _Bool _isH2SSL;
    NSString *_host;
    unsigned long long _port;
    id <MAStorageDelegate> _storage;
    NSArray *_ipPortList;
    NSString *_cert;
    NSString *_h2Host;
    unsigned long long _h2Port;
    NSArray *_h2IpPortList;
    NSString *_quicHost;
    unsigned long long _quicPort;
    NSString *_topCa;
    NSString *_certName;
}

@property(retain, nonatomic) NSString *certName; // @synthesize certName=_certName;
@property(retain, nonatomic) NSString *topCa; // @synthesize topCa=_topCa;
@property(nonatomic) _Bool isH2SSL; // @synthesize isH2SSL=_isH2SSL;
@property(nonatomic) _Bool isH2Export; // @synthesize isH2Export=_isH2Export;
@property(nonatomic) _Bool isStdH2Bifrost; // @synthesize isStdH2Bifrost=_isStdH2Bifrost;
@property(nonatomic) _Bool isDebuggable; // @synthesize isDebuggable=_isDebuggable;
@property(nonatomic) _Bool isH2Bifrost; // @synthesize isH2Bifrost=_isH2Bifrost;
@property(nonatomic) _Bool isBifrost; // @synthesize isBifrost=_isBifrost;
@property(nonatomic) unsigned long long quicPort; // @synthesize quicPort=_quicPort;
@property(retain, nonatomic) NSString *quicHost; // @synthesize quicHost=_quicHost;
@property(retain, nonatomic) NSArray *h2IpPortList; // @synthesize h2IpPortList=_h2IpPortList;
@property(nonatomic) unsigned long long h2Port; // @synthesize h2Port=_h2Port;
@property(retain, nonatomic) NSString *h2Host; // @synthesize h2Host=_h2Host;
@property(nonatomic) __weak NSString *cert; // @synthesize cert=_cert;
@property(retain, nonatomic) NSArray *ipPortList; // @synthesize ipPortList=_ipPortList;
@property(retain, nonatomic) id <MAStorageDelegate> storage; // @synthesize storage=_storage;
@property(nonatomic) unsigned long long port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;

@end
