//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface O2OH5NotifyManager : NSObject
{
}

+ (id)sharedInstance;
- (id)findPagesWithAppId:(id)arg1 target:(id)arg2;
- (void)actionForRefreshPage:(id)arg1 target:(id)arg2 bizData:(id)arg3;
- (void)handleH5Notify:(id)arg1;
- (void)startMonitor;

@end

