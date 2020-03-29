//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol MYPromotionDisplayControllerProtocol;

@interface MYPromotionConfigModel : NSObject <NSCopying>
{
    _Bool _continuously;
    _Bool _fullScreen;
    _Bool _onWindow;
    _Bool _forbiddenFixAppearanceMethods;
    _Bool _loop;
    _Bool _closeViaButton;
    _Bool _showCloseButton;
    _Bool _alipayRule;
    unsigned long long _uriType;
    id <MYPromotionDisplayControllerProtocol> _controllerEventDelegate;
    NSString *_spaceCode;
    NSString *_objectId;
    NSString *_uri;
    NSArray *_uris;
    NSString *_url;
    NSString *_type;
    unsigned long long _groupType;
    double _modalThreshold;
    long long _startTime;
    long long _endTime;
    NSDictionary *_extra;
    long long _priority;
    NSString *_jsonString;
    NSDictionary *_closeButton;
    NSString *_imageUrl;
    NSString *_actionUrl;
    NSString *_bgColor;
    NSString *_exposureSeed;
    NSString *_clickSeed;
    NSString *_closeSeed;
}

+ (_Bool)isAtmosphereMayaForConfig:(id)arg1;
+ (_Bool)extractBOOLValue:(id)arg1 defaultValue:(_Bool)arg2;
+ (_Bool)extractBOOLValue:(id)arg1;
+ (id)modelWithConfig:(id)arg1;
+ (Class)extraElementClass;
+ (Class)urisElementClass;
@property(copy, nonatomic) NSString *closeSeed; // @synthesize closeSeed=_closeSeed;
@property(copy, nonatomic) NSString *clickSeed; // @synthesize clickSeed=_clickSeed;
@property(copy, nonatomic) NSString *exposureSeed; // @synthesize exposureSeed=_exposureSeed;
@property(copy, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) _Bool alipayRule; // @synthesize alipayRule=_alipayRule;
@property(nonatomic) _Bool showCloseButton; // @synthesize showCloseButton=_showCloseButton;
@property(nonatomic) _Bool closeViaButton; // @synthesize closeViaButton=_closeViaButton;
@property(nonatomic) _Bool loop; // @synthesize loop=_loop;
@property(copy, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSDictionary *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSString *jsonString; // @synthesize jsonString=_jsonString;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(nonatomic) _Bool forbiddenFixAppearanceMethods; // @synthesize forbiddenFixAppearanceMethods=_forbiddenFixAppearanceMethods;
@property(nonatomic) _Bool onWindow; // @synthesize onWindow=_onWindow;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) _Bool continuously; // @synthesize continuously=_continuously;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double modalThreshold; // @synthesize modalThreshold=_modalThreshold;
@property(nonatomic) unsigned long long groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSArray *uris; // @synthesize uris=_uris;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
@property(nonatomic) __weak id <MYPromotionDisplayControllerProtocol> controllerEventDelegate; // @synthesize controllerEventDelegate=_controllerEventDelegate;
@property(nonatomic) unsigned long long uriType; // @synthesize uriType=_uriType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)merge:(id)arg1;
- (id)timeForString:(id)arg1;
- (id)analyseDate:(id)arg1;
- (id)splitedConfigs;
- (id)init;

@end
