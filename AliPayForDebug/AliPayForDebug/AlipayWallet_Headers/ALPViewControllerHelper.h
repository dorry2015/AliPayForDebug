//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface ALPViewControllerHelper : NSObject
{
    double _rpcStartTime;
    double _pageStartTime;
    _Bool _pageMark;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)vz_showError:(id)arg1 withModel:(id)arg2;
- (void)vz_showEmpty:(id)arg1;
- (void)vz_showModel:(id)arg1;
- (void)vz_modelDidStart:(id)arg1;
- (void)vz_reload;
- (void)vz_load;
- (void)vz_dealloc;
- (void)vz_init;
- (id)initWithViewController:(id)arg1;

@end

