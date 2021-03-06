//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RVUAuthRpcService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface RVSAuthManager : NSObject <RVUAuthRpcService>
{
    _Bool _isStartingAuthWeb;
    NSMutableDictionary *_authCodeStore;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isStartingAuthWeb; // @synthesize isStartingAuthWeb=_isStartingAuthWeb;
@property(retain, nonatomic) NSMutableDictionary *authCodeStore; // @synthesize authCodeStore=_authCodeStore;
- (void).cxx_destruct;
- (void)showAuthViewWithContent:(id)arg1 params:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)showLimitViewWithParams:(id)arg1;
- (void)executeAuthWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getAuthContentOrAutoAuthWithParam:(id)arg1 callback:(CDUnknownBlockType)arg2 useNewRpc:(_Bool)arg3;
- (void)auth:(id)arg1 withParams:(id)arg2 callback:(CDUnknownBlockType)arg3 supportH5Mode:(_Bool)arg4;
- (void)authWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)parseUrlParams:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

