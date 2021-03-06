//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALTCardTemplate.h"

#import "FBDocumentDelegate-Protocol.h"

@class ALTCardContainer, FBDocument, NSDictionary, NSString, WKEasyViewBuilder, WKTemplateModel;

@interface ALTCardBirdNestTemplate : ALTCardTemplate <FBDocumentDelegate>
{
    WKEasyViewBuilder *_viewBuilder;
    NSString *_templateId;
    NSString *_time;
    _Bool _multiExposure;
    FBDocument *_doc;
    NSString *_templateUrl;
    NSString *_templateDigest;
    WKTemplateModel *_remoteModel;
    NSDictionary *_exposureDict;
    ALTCardContainer *_cardContainer;
}

+ (_Bool)reuseable;
@property(nonatomic) __weak ALTCardContainer *cardContainer; // @synthesize cardContainer=_cardContainer;
@property(copy, nonatomic) NSDictionary *exposureDict; // @synthesize exposureDict=_exposureDict;
@property(retain, nonatomic) WKTemplateModel *remoteModel; // @synthesize remoteModel=_remoteModel;
@property(retain, nonatomic) NSString *templateDigest; // @synthesize templateDigest=_templateDigest;
@property(retain, nonatomic) NSString *templateUrl; // @synthesize templateUrl=_templateUrl;
@property(retain, nonatomic) FBDocument *doc; // @synthesize doc=_doc;
- (void).cxx_destruct;
- (id)getViewListWithDoc:(id)arg1 tagList:(id)arg2;
- (void)removeExposureInfo:(id)arg1;
- (void)bindExposureInfo:(id)arg1 withDoc:(id)arg2;
- (id)JSInvoke;
- (void)onAsyncEventNotify:(id)arg1 withDocument:(id)arg2 andBlock:(CDUnknownBlockType)arg3;
- (_Bool)onEventNotify:(id)arg1 andDocument:(id)arg2;
- (void)checkTemplateState;
- (id)exporsureViewsForComponent:(id)arg1;
- (void)refreshTemplate;
- (id)getComponentWithContainer:(id)arg1 atIndex:(long long)arg2;
- (struct CGSize)componentSizeWithContainer:(id)arg1 atIndex:(long long)arg2;
- (unsigned long long)componentCountForContainer:(id)arg1;
- (void)dealloc;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

