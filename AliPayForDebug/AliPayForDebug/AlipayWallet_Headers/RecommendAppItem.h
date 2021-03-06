//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface RecommendAppItem : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasPosition;
    _Bool _hasPublicId;
    _Bool _hasPublicName;
    _Bool _hasPublicBizType;
    _Bool _hasLogoUrl;
    _Bool _hasRecommendType;
    _Bool _hasExtJson;
    int _position;
    NSString *_publicId;
    NSString *_publicName;
    NSString *_publicBizType;
    NSString *_logoUrl;
    NSString *_recommendType;
    NSString *_extJson;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *extJson; // @synthesize extJson=_extJson;
@property(retain, nonatomic) NSString *recommendType; // @synthesize recommendType=_recommendType;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *publicBizType; // @synthesize publicBizType=_publicBizType;
@property(retain, nonatomic) NSString *publicName; // @synthesize publicName=_publicName;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(nonatomic) int position; // @synthesize position=_position;
@property(readonly) _Bool hasExtJson; // @synthesize hasExtJson=_hasExtJson;
@property(readonly) _Bool hasRecommendType; // @synthesize hasRecommendType=_hasRecommendType;
@property(readonly) _Bool hasLogoUrl; // @synthesize hasLogoUrl=_hasLogoUrl;
@property(readonly) _Bool hasPublicBizType; // @synthesize hasPublicBizType=_hasPublicBizType;
@property(readonly) _Bool hasPublicName; // @synthesize hasPublicName=_hasPublicName;
@property(readonly) _Bool hasPublicId; // @synthesize hasPublicId=_hasPublicId;
@property(readonly) _Bool hasPosition; // @synthesize hasPosition=_hasPosition;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

