//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "H5MainLink.h"

@class NSDictionary, NSString, PSDSession;

@interface H5MainLink4AppStart : H5MainLink
{
    NSString *_appId;
    NSString *_version;
    PSDSession *_session;
    NSDictionary *_generateFirst;
}

@property(copy, nonatomic) NSDictionary *generateFirst; // @synthesize generateFirst=_generateFirst;
@property(nonatomic) __weak PSDSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)logFinish;
- (void)logTimeoutAtNode:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)createNode:(id)arg1 preNode:(id)arg2;
- (id)initWithApp:(id)arg1;
- (id)name;

@end

