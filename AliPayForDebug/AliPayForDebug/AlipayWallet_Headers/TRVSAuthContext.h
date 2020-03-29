//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface TRVSAuthContext : NSObject
{
    NSString *_mainAppId;
    NSString *_invokerAppId;
    NSString *_appKey;
    NSString *_accessToken;
    NSString *_authChannel;
    NSString *_scopeName;
    NSString *_scopeDisplayName;
    NSString *_pageName;
    long long _authRange;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) long long authRange; // @synthesize authRange=_authRange;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(copy, nonatomic) NSString *scopeDisplayName; // @synthesize scopeDisplayName=_scopeDisplayName;
@property(copy, nonatomic) NSString *scopeName; // @synthesize scopeName=_scopeName;
@property(copy, nonatomic) NSString *authChannel; // @synthesize authChannel=_authChannel;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(copy, nonatomic) NSString *invokerAppId; // @synthesize invokerAppId=_invokerAppId;
@property(copy, nonatomic) NSString *mainAppId; // @synthesize mainAppId=_mainAppId;
- (void).cxx_destruct;

@end
