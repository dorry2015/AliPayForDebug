//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PromotionBiz : NSObject
{
}

+ (_Bool)isTabBarControllerWithObject:(id)arg1;
+ (_Bool)isStarViewId:(id)arg1;
+ (_Bool)isSameAppId:(id)arg1 compareTo:(id)arg2;
+ (long long)getNowLocalTime;
+ (long long)getNowTime:(_Bool)arg1;
+ (void)registerLongLinkBusiness;
+ (_Bool)isAppLaunchActived;
+ (long long)fullscreenRpcTimeout;
+ (void)getImageWithUrl:(id)arg1 completionOnMainQueue:(CDUnknownBlockType)arg2;
+ (_Bool)hasCustomNavigationView:(id)arg1;
+ (_Bool)isNeedShowFloatTopView:(id)arg1;
+ (id)creatWebView:(id)arg1;
+ (void)openWebViewWithHTMLString:(id)arg1 viewController:(id)arg2;
+ (void)openWebViewWithUrlString:(id)arg1 title:(id)arg2 hideTitleBar:(_Bool)arg3 animated:(_Bool)arg4;
+ (id)specailHandleForGettingTopViewController:(id)arg1;
+ (id)getCurrentTopViewController;
+ (id)specailAppId:(id)arg1;
+ (id)getAppId:(id)arg1;
+ (double)specailHandle:(id)arg1 originY:(double)arg2;
+ (id)getCurrentUserId;
+ (double)currentTimeInterval;
+ (void)promotion_TMCS_Report:(id)arg1 costTime:(double)arg2;
+ (void)promotion_MTBIZ_Report:(id)arg1 subName:(id)arg2 failCode:(long long)arg3 params:(id)arg4;
+ (_Bool)isNeedHandleFullScreenAd;

@end
