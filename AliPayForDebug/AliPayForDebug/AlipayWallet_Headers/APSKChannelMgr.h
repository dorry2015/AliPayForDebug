//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APConfigObserverProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface APSKChannelMgr : NSObject <APConfigObserverProtocol>
{
    NSDictionary *_configDic;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (id)filterChannelsWithCondition:(id)arg1 bizType:(id)arg2;
- (id)defaultChannel;
- (id)channelForChTemplate:(id)arg1 bizType:(id)arg2 preChannels:(id)arg3;
- (void)resetChannelConfig:(id)arg1;
- (void)destory;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
