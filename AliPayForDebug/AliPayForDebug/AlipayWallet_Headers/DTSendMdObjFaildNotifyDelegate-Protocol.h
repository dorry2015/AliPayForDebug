//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, SyncBizListenerNode;

@protocol DTSendMdObjFaildNotifyDelegate <NSObject>
- (void)postMessageToBiz:(NSString *)arg1 dic:(NSDictionary *)arg2 callbackNode:(SyncBizListenerNode *)arg3;
- (NSDictionary *)sendMdObjSaveSendNumDelegate:(NSDictionary *)arg1;
- (void)sendMdObjFaildNotifyDelegate:(NSDictionary *)arg1;
@end
