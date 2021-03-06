//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DTMicroApplication, NSArray, NSDictionary, NSString, NXRApp;
@protocol NXIRDebugProtocol, NebulaAppHandlerProtocol, NebulaStartHandlerProtocol;

@protocol NebulaResourceServiceProtocol
- (id <NebulaStartHandlerProtocol>)createNebulaStartHandler;
- (void)registerHandler:(id <NebulaAppHandlerProtocol>)arg1;
- (_Bool)isNebulaHanlerProcessed:(DTMicroApplication *)arg1 params:(NSDictionary *)arg2;
- (_Bool)enableTinySwitchMode;
- (void)clearStorage:(_Bool)arg1;
- (void)addCommonApps:(NSArray *)arg1;
- (void)setDebugDelegate:(id <NXIRDebugProtocol>)arg1;
- (int)appType:(NSString *)arg1;
- (_Bool)enableNebulaHandler;
- (_Bool)isVersionValid:(NSString *)arg1 opversion:(NSString *)arg2 nbversion:(NSString *)arg3;
- (_Bool)verifyApp:(NXRApp *)arg1;
- (_Bool)isNebulaAppId:(NSString *)arg1 nebulaVersion:(id *)arg2;
- (void)installApp:(NXRApp *)arg1 process:(void (^)(unsigned long long, id))arg2 finish:(void (^)(RVRApp *, NSError *))arg3;
- (void)requestApps:(NSDictionary *)arg1 param:(NSDictionary *)arg2 finish:(void (^)(NSDictionary *, NSError *))arg3;
- (NXRApp *)findApp:(NSString *)arg1 withVersion:(NSString *)arg2;
- (NXRApp *)findApp:(NSString *)arg1;
- (void)prepareWithAppId:(NSString *)arg1;
@end

