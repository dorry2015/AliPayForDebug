//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MOBILECHATAddAdminReq : NSObject
{
    NSString *_groupId;
    NSArray *_userInfos;
}

+ (Class)userInfosElementClass;
@property(retain, nonatomic) NSArray *userInfos; // @synthesize userInfos=_userInfos;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;

@end

