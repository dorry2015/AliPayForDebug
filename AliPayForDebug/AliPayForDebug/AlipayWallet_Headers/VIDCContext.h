//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, VIDCBaseRender;

@interface VIDCContext : NSObject
{
    NSString *_bizId;
    CDUnknownBlockType _contextCallBack;
    VIDCBaseRender *_render;
    NSDictionary *_extInfo;
    NSString *_contextId;
}

@property(retain, nonatomic) NSString *contextId; // @synthesize contextId=_contextId;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) VIDCBaseRender *render; // @synthesize render=_render;
@property(copy, nonatomic) CDUnknownBlockType contextCallBack; // @synthesize contextCallBack=_contextCallBack;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
- (void).cxx_destruct;
- (id)initWithContextId:(id)arg1;

@end

