//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBDocument.h"

#import "ASFeedBackProtocol-Protocol.h"
#import "MQPDocumentProtocol-Protocol.h"
#import "MQPSPMTrackPageProtocol-Protocol.h"

@class ImmPayEventHandler, ImmPayViewHandler, MQPBaseService, MQPDocumnetProxy, MQPPaySession, MQPTrackModel, NSDictionary, NSString, UIColor;

@interface MQPBNDocument : FBDocument <ASFeedBackProtocol, MQPSPMTrackPageProtocol, MQPDocumentProtocol>
{
    MQPDocumnetProxy *documentProxy;
    unsigned long long _showType;
}

+ (id)feedbackSafeString:(id)arg1;
+ (id)feedbackBizIdFromTplId:(id)arg1;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(retain, nonatomic) MQPDocumnetProxy *documentProxy; // @synthesize documentProxy;
- (void).cxx_destruct;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)executeJS:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool navBarHidden; // @dynamic navBarHidden;
@property(readonly, nonatomic) _Bool isSupportPrerender; // @dynamic isSupportPrerender;
@property(readonly, nonatomic) _Bool isFullScreen; // @dynamic isFullScreen;
- (void)delayRelease;
- (void)onDestroy;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)feedbackInfo;
- (id)feedbackBizId;

// Remaining properties
@property(copy, nonatomic) NSString *abtestId;
@property(copy, nonatomic) NSString *bizCode;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id delegate;
@property(retain, nonatomic) NSDictionary *docConfig;
@property(readonly) ImmPayEventHandler *eh;
@property(retain, nonatomic) NSDictionary *extInfo;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isBnframe;
@property(copy, nonatomic) NSString *lastErrDesc;
@property(readonly) MQPTrackModel *log;
@property(retain, nonatomic) UIColor *navBarColor;
@property(copy, nonatomic) CDUnknownBlockType pageDestroyBlock;
@property(retain, nonatomic) NSDictionary *param4dict;
@property(nonatomic) __weak MQPBaseService *service;
@property(readonly) MQPPaySession *session;
@property(copy, nonatomic) NSString *spmId;
@property(copy, nonatomic) NSString *statusBarStyle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *time;
@property(copy, nonatomic) NSString *tplId;
@property(copy, nonatomic) NSString *tplVersion;
@property(readonly) ImmPayViewHandler *viewHandler;

@end

