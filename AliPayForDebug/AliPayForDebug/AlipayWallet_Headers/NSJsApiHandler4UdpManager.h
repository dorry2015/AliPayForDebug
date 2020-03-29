//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCDAsyncUdpSocketDelegate-Protocol.h"

@class GCDAsyncUdpSocket, NSString;

@interface NSJsApiHandler4UdpManager : NSObject <GCDAsyncUdpSocketDelegate>
{
    GCDAsyncUdpSocket *_udpSocket;
    GCDAsyncUdpSocket *_broadcastUdpSocket;
    NSString *_broadcastIp;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSString *broadcastIp; // @synthesize broadcastIp=_broadcastIp;
@property(retain, nonatomic) GCDAsyncUdpSocket *broadcastUdpSocket; // @synthesize broadcastUdpSocket=_broadcastUdpSocket;
@property(retain, nonatomic) GCDAsyncUdpSocket *udpSocket; // @synthesize udpSocket=_udpSocket;
- (void).cxx_destruct;
- (void)udpSocketDidClose:(id)arg1 withError:(id)arg2;
- (void)udpSocket:(id)arg1 didNotConnect:(id)arg2;
- (void)udpSocket:(id)arg1 didNotSendDataWithTag:(long long)arg2 dueToError:(id)arg3;
- (void)udpSocket:(id)arg1 didSendDataWithTag:(long long)arg2;
- (void)dealloc;
- (void)sendRequest:(id)arg1;
- (void)applicationNetChange;
- (id)init;

@end
