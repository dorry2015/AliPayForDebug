//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "REOPPhase.h"

#import "ARJSDelegate-Protocol.h"
#import "ARRenderDelegate-Protocol.h"

@class NSString;

@interface REOPOpenPhase : REOPPhase <ARJSDelegate, ARRenderDelegate>
{
    _Bool _hasOpenSuccess;
    CDUnknownBlockType _loadWaitingTask;
}

@property(copy, nonatomic) CDUnknownBlockType loadWaitingTask; // @synthesize loadWaitingTask=_loadWaitingTask;
@property(nonatomic) _Bool hasOpenSuccess; // @synthesize hasOpenSuccess=_hasOpenSuccess;
- (void).cxx_destruct;
- (void)handleAuth;
- (void)gotoUserCertify;
- (void)gotoAuthPage;
- (void)enterDetailPhaseWithOnlyDisplayListModel:(_Bool)arg1 animated:(_Bool)arg2;
- (void)openAndGoToDetail;
- (void)closePopView;
- (void)displayPopViewWithType:(unsigned long long)arg1 errorMsg:(id)arg2 animated:(_Bool)arg3;
- (void)pollingRPC:(id)arg1 option:(id)arg2;
- (void)stoploadWaitingTask;
- (void)handlePolling:(id)arg1 option:(id)arg2;
- (void)handleUnpackResult:(id)arg1;
- (long long)handleRPCResult:(id)arg1 options:(id)arg2;
- (void)unpackRPCWithProgress:(_Bool)arg1;
- (void)handlePreDetailResult;
- (void)sendJSAction:(id)arg1;
- (_Bool)isArOpen;
- (void)renderError:(id)arg1 object:(id)arg2;
- (void)jsAction:(id)arg1 object:(id)arg2;
- (void)dealloc;
- (_Bool)enterNextPhase:(id)arg1;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
