//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVAPluginBase.h"

@class NSMutableDictionary, NSString;

@interface RVUPlugin4Authorization : RVAPluginBase
{
    NSString *_appId;
    NSMutableDictionary *_jsCallPauseDic;
}

@property(retain, nonatomic) NSMutableDictionary *jsCallPauseDic; // @synthesize jsCallPauseDic=_jsCallPauseDic;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)sendMessageIfComponent:(id)arg1 data:(id)arg2;
- (void)handleEvent:(_Bool)arg1 storageKey:(id)arg2 appId:(id)arg3;
- (_Bool)isMORegionMatched;
- (CDUnknownBlockType)getSPMBizBlockWithEvent:(id)arg1 items:(id)arg2;
- (void)requestAuthrizeWithEvent:(id)arg1 storageKey:(id)arg2 items:(id)arg3 curApp:(id)arg4 showTitle:(id)arg5;
- (id)getAppBaseInfo:(id)arg1 version:(id)arg2;
- (id)spmIdFromItems:(id)arg1 isCancel:(_Bool)arg2;
- (_Bool)p_useNativeShare;
- (_Bool)isCameraActionRefusedByUser:(id)arg1 appId:(id)arg2;
- (void)handleEvent:(id)arg1;
- (id)getScopeShowTitleWithConfig:(id)arg1 scopeName:(id)arg2;
- (id)getKeyFromConfig:(id)arg1 jsapiName:(id)arg2;
- (int)priority;
- (void)pluginDidLoad;
- (id)init;

@end

