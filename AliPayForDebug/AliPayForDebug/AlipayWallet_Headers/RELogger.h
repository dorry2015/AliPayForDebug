//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RELogger : NSObject
{
}

+ (void)logPageEndWithSpmId:(id)arg1 index:(id)arg2 param:(id)arg3;
+ (void)logPageStartWithSpmId:(id)arg1 index:(id)arg2;
+ (void)onDealloc:(id)arg1;
+ (void)onViewWillDisappear:(id)arg1 view:(id)arg2 param:(id)arg3;
+ (void)onViewDidAppear:(id)arg1 view:(id)arg2;
+ (void)logExposureWithSpm:(id)arg1 param:(id)arg2 view:(id)arg3;
+ (void)logClickWithSpm:(id)arg1 param:(id)arg2 view:(id)arg3;

@end
