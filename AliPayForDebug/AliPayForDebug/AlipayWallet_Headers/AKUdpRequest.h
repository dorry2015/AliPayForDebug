//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface AKUdpRequest : NSObject
{
    _Bool _broadcast;
    _Bool _keepSending;
    unsigned short _port;
    NSData *_payload;
    NSData *_remoteAddr;
    NSString *_host;
    double _timeout;
    long long _tag;
    long long _responseFormat;
    double _sendingInterval;
}

+ (id)requestForBroadcastWithPayload:(id)arg1 port:(unsigned short)arg2 timeout:(double)arg3 tag:(long long)arg4;
+ (id)requestWithPayload:(id)arg1 remoteAddr:(id)arg2 timeout:(double)arg3 tag:(long long)arg4;
+ (id)requestWithPayload:(id)arg1 host:(id)arg2 port:(unsigned short)arg3 timeout:(double)arg4 tag:(long long)arg5;
@property(nonatomic) double sendingInterval; // @synthesize sendingInterval=_sendingInterval;
@property(nonatomic) _Bool keepSending; // @synthesize keepSending=_keepSending;
@property(nonatomic) long long responseFormat; // @synthesize responseFormat=_responseFormat;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSData *remoteAddr; // @synthesize remoteAddr=_remoteAddr;
@property(nonatomic) _Bool broadcast; // @synthesize broadcast=_broadcast;
@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (id)init;

@end
