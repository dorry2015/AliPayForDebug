//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALPAutoTipDynamicService.h"

@class ALPMDCodeInfo;

@interface ALPMDBarService : ALPAutoTipDynamicService
{
    ALPMDCodeInfo *_mdCodeInfo;
    double _pauseTime;
    unsigned long long _retryTimes;
}

@property(nonatomic) unsigned long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) double pauseTime; // @synthesize pauseTime=_pauseTime;
@property(retain, nonatomic) ALPMDCodeInfo *mdCodeInfo; // @synthesize mdCodeInfo=_mdCodeInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)updateCode;
- (void)updateMdCodeInfo:(id)arg1;
- (void)fetchLocalCode;
- (void)pollAfter:(double)arg1;
- (void)startWithPassId:(id)arg1;

@end
