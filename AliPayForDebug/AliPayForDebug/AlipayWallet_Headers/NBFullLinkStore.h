//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, PSDScene, UIViewController;

@interface NBFullLinkStore : NSObject
{
    int _sceneIndex;
    UIViewController *_currentViewController;
    NSMutableDictionary *_attributeInfo;
    NSString *_appId;
    PSDScene *_attachedToScene;
    NSMutableDictionary *_extraAttrDict;
    NSMutableArray *_urlVarArray;
}

+ (id)getSceneStoreByEvent:(id)arg1;
+ (id)appStore:(id)arg1;
+ (id)appStore:(id)arg1 scene:(id)arg2;
+ (void)clearStore:(id)arg1;
+ (id)getAppIdFromSession:(id)arg1;
+ (long long)getUniqueId;
+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *urlVarArray; // @synthesize urlVarArray=_urlVarArray;
@property(retain, nonatomic) NSMutableDictionary *extraAttrDict; // @synthesize extraAttrDict=_extraAttrDict;
@property(nonatomic) int sceneIndex; // @synthesize sceneIndex=_sceneIndex;
@property(nonatomic) __weak PSDScene *attachedToScene; // @synthesize attachedToScene=_attachedToScene;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSMutableDictionary *attributeInfo; // @synthesize attributeInfo=_attributeInfo;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void).cxx_destruct;
- (id)description;
- (id)gatherDataAndClearCache;
- (id)getAttributeInfoString;
- (long long)getTimeStub:(id)arg1;
- (void)addTimeStub:(id)arg1;
- (void)addTimeStub:(id)arg1 withTime:(double)arg2;
- (void)addBizAttr:(id)arg1 value:(id)arg2;
- (void)addBizAttrWithUniqueId:(id)arg1 value:(id)arg2;
- (void)addCostAttr:(id)arg1 value:(unsigned long long)arg2;
- (void)addAttributesFromDictionary:(id)arg1;
- (void)addAttributesFromExtraAttrDict;
- (void)addAttributesFromUrlVarArray;
- (void)removeExtraAttrDict4Key:(id)arg1;
- (void)appendExtraAttrDict4Key:(id)arg1 value:(id)arg2;
- (id)getUrlVarByUrlString:(id)arg1;
- (id)getExtraAttrDict2String;
- (id)initWithAppId:(id)arg1;

@end

