//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HToString.h"

@class NSArray, NSString;

@interface mobileappconfigUserStageRank : HToString
{
    _Bool _isNew;
    int _reportType;
    NSString *_stageCode;
    NSArray *_appIdList;
    NSString *_dataVersion;
    NSString *_notifySuccessDate;
    NSString *_timeLimitInfo;
}

+ (Class)appIdListElementClass;
@property(retain, nonatomic) NSString *timeLimitInfo; // @synthesize timeLimitInfo=_timeLimitInfo;
@property(nonatomic) int reportType; // @synthesize reportType=_reportType;
@property(retain, nonatomic) NSString *notifySuccessDate; // @synthesize notifySuccessDate=_notifySuccessDate;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) NSString *dataVersion; // @synthesize dataVersion=_dataVersion;
@property(retain, nonatomic) NSArray *appIdList; // @synthesize appIdList=_appIdList;
@property(retain, nonatomic) NSString *stageCode; // @synthesize stageCode=_stageCode;
- (void).cxx_destruct;

@end

