//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCard.h"

@class NSMutableDictionary, NSString;

@interface AlipayLifeCardModel : CCard
{
    NSString *_bizType;
    NSString *_cityCode;
    NSString *_cityName;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_tabId;
    NSString *_tabType;
    NSString *_tabSpmId;
    NSString *_sectionType;
    NSString *_recommendSectionType;
    NSString *_subjectId;
    NSString *_topicId;
    NSString *_apLifeJumpSource;
    long long _index;
    NSMutableDictionary *_dictExposure;
}

+ (id)widgetBizType:(id)arg1;
+ (id)widgetCardModel:(id)arg1;
+ (id)widgetTemplateData:(id)arg1;
+ (id)newCardPB:(id)arg1 cityCode:(id)arg2 tabId:(id)arg3 tabSpmId:(id)arg4 index:(long long)arg5 sectionType:(id)arg6 recommendSectionType:(id)arg7 cityName:(id)arg8 latitude:(id)arg9 longitude:(id)arg10 subjectId:(id)arg11 topicId:(id)arg12 apLifeJumpSource:(id)arg13 tabType:(id)arg14;
+ (id)_AlipayLife_FieldKeys;
@property(retain, nonatomic) NSMutableDictionary *dictExposure; // @synthesize dictExposure=_dictExposure;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *apLifeJumpSource; // @synthesize apLifeJumpSource=_apLifeJumpSource;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *subjectId; // @synthesize subjectId=_subjectId;
@property(retain, nonatomic) NSString *recommendSectionType; // @synthesize recommendSectionType=_recommendSectionType;
@property(retain, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
@property(retain, nonatomic) NSString *tabSpmId; // @synthesize tabSpmId=_tabSpmId;
@property(retain, nonatomic) NSString *tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;
- (id)loggerParamDict;
- (void)deletePraiseOptionWithBizNo:(id)arg1;
- (void)praiseOptionWithBizNo:(id)arg1;
- (void)updateCardLikeData:(_Bool)arg1;
- (void)handleCardLikeAction;
- (_Bool)cardIsLiked;
- (id)cardContentID;

@end
