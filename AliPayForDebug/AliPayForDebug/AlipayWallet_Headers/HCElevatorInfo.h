//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface HCElevatorInfo : NSObject
{
    NSString *_operationId;
    NSDictionary *_dicTemplateData;
    NSString *_operationType;
    NSString *_templateId;
    long long _startTime;
    long long _expireTime;
    NSString *_templateData;
    NSDictionary *_ext;
}

+ (id)factory:(id)arg1;
@property(copy, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *templateData; // @synthesize templateData=_templateData;
@property(nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(copy, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
@property(copy, nonatomic) NSDictionary *dicTemplateData; // @synthesize dicTemplateData=_dicTemplateData;
@property(copy, nonatomic) NSString *operationId; // @synthesize operationId=_operationId;
- (void).cxx_destruct;

@end

