//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NXEngineInstance, RVKSession, RVKView;

@protocol NXEngineCreateRender <NSObject>
- (NSString *)renderResourceTag;
- (Class)renderClass;
- (_Bool)canHandleCreateView:(RVKView *)arg1 result:(id *)arg2;
- (void)onEngineCreate:(NXEngineInstance *)arg1 session:(RVKSession *)arg2;
- (_Bool)canHandleEngineLaunch:(RVKSession *)arg1 result:(id *)arg2;
@end

