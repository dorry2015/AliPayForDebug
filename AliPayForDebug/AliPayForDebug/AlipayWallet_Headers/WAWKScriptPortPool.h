//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKScriptMessageHandler-Protocol.h"

@class NSMapTable, NSString;

@interface WAWKScriptPortPool : NSObject <WKScriptMessageHandler>
{
    NSString *_namespace;
    NSMapTable *_portDic;
    NSString *_closeNamespace;
}

+ (id)defaultPool;
@property(retain) NSString *closeNamespace; // @synthesize closeNamespace=_closeNamespace;
@property(retain) NSMapTable *portDic; // @synthesize portDic=_portDic;
@property(retain) NSString *namespace; // @synthesize namespace=_namespace;
- (void).cxx_destruct;
- (void)removePort:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)createPortWithWebView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

