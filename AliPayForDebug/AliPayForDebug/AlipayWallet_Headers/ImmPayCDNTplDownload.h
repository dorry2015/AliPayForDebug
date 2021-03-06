//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKTemplateDownloadProtocol-Protocol.h"

@class NSArray, NSString;
@protocol WKTemplateDownloadProtocol;

@interface ImmPayCDNTplDownload : NSObject <WKTemplateDownloadProtocol>
{
    _Bool _disableTplCdnWhitelist;
    id <WKTemplateDownloadProtocol> _backupDownloadManager;
    NSArray *_tplCdnWhitelist;
}

+ (id)opQueue;
@property(retain, nonatomic) NSArray *tplCdnWhitelist; // @synthesize tplCdnWhitelist=_tplCdnWhitelist;
@property(nonatomic) _Bool disableTplCdnWhitelist; // @synthesize disableTplCdnWhitelist=_disableTplCdnWhitelist;
@property(retain, nonatomic) id <WKTemplateDownloadProtocol> backupDownloadManager; // @synthesize backupDownloadManager=_backupDownloadManager;
- (void).cxx_destruct;
- (void)downloadTemplateByTag:(id)arg1 comletionBlock:(CDUnknownBlockType)arg2;
- (void)logEvent:(id)arg1 param:(id)arg2;
- (_Bool)isUrlInWhitelist:(id)arg1;
- (_Bool)isBroken:(id)arg1 tplInfo:(id)arg2;
- (id)decryptData:(id)arg1 withHash:(id)arg2;
- (id)transferTplsToTplModels:(id)arg1;
- (_Bool)isTmsTemplateRequest:(id)arg1 requestDict:(id)arg2;
- (void)downloadTemplatesByIds:(id)arg1 comletionBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

