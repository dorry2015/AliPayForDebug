//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MtopExtRequest, MtopExtResponse, NSArray, NSString;

@interface PrefetchRequestInfo : NSObject
{
    NSString *_key;
    NSString *_noParamKey;
    MtopExtRequest *_prefetchRequest;
    NSArray *_excludedPrefetchKeyParameters;
    double _beginTime;
    double _expiredTime;
    MtopExtResponse *_response;
    MtopExtRequest *_mergeRequest;
}

@property(retain, nonatomic) MtopExtRequest *mergeRequest; // @synthesize mergeRequest=_mergeRequest;
@property(retain, nonatomic) MtopExtResponse *response; // @synthesize response=_response;
@property(nonatomic) double expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(copy, nonatomic) NSArray *excludedPrefetchKeyParameters; // @synthesize excludedPrefetchKeyParameters=_excludedPrefetchKeyParameters;
@property(retain, nonatomic) MtopExtRequest *prefetchRequest; // @synthesize prefetchRequest=_prefetchRequest;
@property(copy, nonatomic) NSString *noParamKey; // @synthesize noParamKey=_noParamKey;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (_Bool)isResponseExpired;

@end
