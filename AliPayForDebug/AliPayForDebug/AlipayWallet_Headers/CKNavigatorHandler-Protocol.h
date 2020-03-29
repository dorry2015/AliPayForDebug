//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSNumber, UIColor, UIViewController;

@protocol CKNavigatorHandler <NSObject>
- (void)clearNavigationItemWithParam:(NSDictionary *)arg1 withContainer:(UIViewController *)arg2;
- (void)setNavigationItemWithParam:(NSDictionary *)arg1 withContainer:(UIViewController *)arg2;
- (NSNumber *)setNavigationBackgroundColor:(UIColor *)arg1 withContainer:(UIViewController *)arg2;
- (NSNumber *)setNavigationBarHidden:(NSDictionary *)arg1 withContainer:(UIViewController *)arg2;
- (void)popViewControllerWithParam:(NSDictionary *)arg1 withContainer:(UIViewController *)arg2;
- (void)pushViewControllerWithParam:(NSDictionary *)arg1 withContainer:(UIViewController *)arg2;

@optional
- (void)close:(NSDictionary *)arg1 withContainer:(UIViewController *)arg2;
- (void)open:(NSDictionary *)arg1 withContainer:(UIViewController *)arg2;
@end
