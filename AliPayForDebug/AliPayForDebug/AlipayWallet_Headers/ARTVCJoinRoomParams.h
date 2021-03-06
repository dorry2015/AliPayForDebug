//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ARTVCParamsProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface ARTVCJoinRoomParams : NSObject <ARTVCParamsProtocol>
{
    int _envType;
    NSString *_uid;
    NSString *_bizName;
    NSString *_subBiz;
    NSString *_roomId;
    NSString *_signature;
    NSString *_rtoken;
    NSDictionary *_extraInfo;
}

@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) int envType; // @synthesize envType=_envType;
@property(copy, nonatomic) NSString *rtoken; // @synthesize rtoken=_rtoken;
@property(copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *subBiz; // @synthesize subBiz=_subBiz;
@property(copy, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isValid;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

