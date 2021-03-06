//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface DAProcessRequest : NSObject
{
    _Bool _finish;
    NSString *_terminalId;
    NSString *_terminalType;
    NSString *_bizId;
    NSString *_bizType;
    NSDictionary *_bizParams;
    NSDictionary *_envInfo;
    NSDictionary *_terminalParams;
    NSDictionary *_verifyParams;
    NSString *_resultCode;
    NSString *_resultMsg;
    NSString *_config;
    NSDictionary *_actionData;
    NSDictionary *_bizResult;
    NSString *_action;
    NSDictionary *_result;
    NSString *_processId;
}

@property(copy, nonatomic) NSString *processId; // @synthesize processId=_processId;
@property(retain, nonatomic) NSDictionary *result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSDictionary *bizResult; // @synthesize bizResult=_bizResult;
@property(retain, nonatomic) NSDictionary *actionData; // @synthesize actionData=_actionData;
@property(nonatomic) _Bool finish; // @synthesize finish=_finish;
@property(copy, nonatomic) NSString *config; // @synthesize config=_config;
@property(copy, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(copy, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) NSDictionary *verifyParams; // @synthesize verifyParams=_verifyParams;
@property(retain, nonatomic) NSDictionary *terminalParams; // @synthesize terminalParams=_terminalParams;
@property(retain, nonatomic) NSDictionary *envInfo; // @synthesize envInfo=_envInfo;
@property(retain, nonatomic) NSDictionary *bizParams; // @synthesize bizParams=_bizParams;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(copy, nonatomic) NSString *terminalType; // @synthesize terminalType=_terminalType;
@property(copy, nonatomic) NSString *terminalId; // @synthesize terminalId=_terminalId;
- (void).cxx_destruct;

@end

