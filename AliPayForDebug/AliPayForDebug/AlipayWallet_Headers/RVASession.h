//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RVKPluginProtocol-Protocol.h"

@class NSString, RVASessionContext, RVASessionDelegate;

@interface RVASession : NSObject <RVKPluginProtocol>
{
    RVASessionDelegate *_delegate;
    RVASessionContext *_context;
}

@property(readonly, nonatomic) RVASessionContext *context; // @synthesize context=_context;
@property(retain, nonatomic) RVASessionDelegate *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)appResponseForUrl:(id)arg1;
- (void)handleEvent:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name;
- (void)loadAppDataSource;
- (void)addPlugins;
- (id)finalUrl:(id)arg1;
- (void)mergeAppConfigParamsToContextParams;
- (id)initWithContext:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
