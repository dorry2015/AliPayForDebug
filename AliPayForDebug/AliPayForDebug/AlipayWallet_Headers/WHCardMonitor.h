//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UITableView, UIViewController;
@protocol OS_dispatch_queue, WHCardMonitorDataSource;

@interface WHCardMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_taskQueue;
    _Bool _pageViewDidAppear;
    id <WHCardMonitorDataSource> _monitorDataSource;
    UITableView *_tableView;
    UIViewController *_pageViewController;
    NSMutableDictionary *_allExpoDatasDictionary;
    double _minExpoRate;
}

@property(nonatomic) double minExpoRate; // @synthesize minExpoRate=_minExpoRate;
@property(nonatomic) _Bool pageViewDidAppear; // @synthesize pageViewDidAppear=_pageViewDidAppear;
@property(retain, nonatomic) NSMutableDictionary *allExpoDatasDictionary; // @synthesize allExpoDatasDictionary=_allExpoDatasDictionary;
@property(nonatomic) __weak UIViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WHCardMonitorDataSource> monitorDataSource; // @synthesize monitorDataSource=_monitorDataSource;
- (void).cxx_destruct;
- (void)addAsyncTask:(CDUnknownBlockType)arg1;
- (id)behaviorBuilderWithSpmModel:(id)arg1;
- (void)doClickWithSpmModel:(id)arg1;
- (void)reportBadgeInfo:(id)arg1;
- (void)doReportLocalExpoDataAction:(id)arg1;
- (void)reportExposureLogs:(id)arg1;
- (_Bool)checkViewIsVisible:(id)arg1 inRect:(struct CGRect)arg2;
- (void)fetchExposureInfoForView:(id)arg1 inRect:(struct CGRect)arg2 callback:(CDUnknownBlockType)arg3;
- (void)fetchExposureInfoForCell:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)deduplicationKey:(id)arg1;
- (void)visibleCardExposureBeginAction;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onDataRefresh;
- (void)didEnterForeground;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (void)onPageDidDisappear;
- (void)onPageWillDisappear;
- (void)onPageDidAppear;
- (_Bool)homePageShowing;
- (void)getConfig;
- (id)init;

@end
