//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface ProtoSyncOpCode9002 : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasPrincipalType;
    _Bool _hasPrincipalId;
    _Bool _hasAppName;
    int _principalType;
    NSMutableArray *_topicSyncInfo;
    NSString *_principalId;
    NSString *_appName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *principalId; // @synthesize principalId=_principalId;
@property(nonatomic) int principalType; // @synthesize principalType=_principalType;
@property(retain, nonatomic) NSMutableArray *topicSyncInfo; // @synthesize topicSyncInfo=_topicSyncInfo;
@property(readonly) _Bool hasAppName; // @synthesize hasAppName=_hasAppName;
@property(readonly) _Bool hasPrincipalId; // @synthesize hasPrincipalId=_hasPrincipalId;
@property(readonly) _Bool hasPrincipalType; // @synthesize hasPrincipalType=_hasPrincipalType;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addTopicSyncInfo:(id)arg1;
- (void)setTopicSyncInfoArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

