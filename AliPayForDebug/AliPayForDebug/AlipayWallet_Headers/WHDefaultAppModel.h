//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACApp, NSString;

@interface WHDefaultAppModel : NSObject
{
    NSString *_appId;
    NSString *_title;
    NSString *_iconUrl;
    NSString *_action;
    ACApp *_acApp;
}

@property(retain, nonatomic) ACApp *acApp; // @synthesize acApp=_acApp;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;

@end

