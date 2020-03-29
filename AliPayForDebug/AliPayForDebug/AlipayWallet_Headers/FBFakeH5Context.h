//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDContext.h"

@class FBFakeH5ViewController, FBFakeNBViewControllerProxy, PSDSession;

@interface FBFakeH5Context : PSDContext
{
    FBFakeH5ViewController *_currentViewController;
    FBFakeNBViewControllerProxy *_fakeViewControllerProxy;
    PSDSession *_fakeSession;
}

+ (id)createContextWithAppId:(id)arg1 methodName:(id)arg2 params:(id)arg3;
@property(retain, nonatomic) PSDSession *fakeSession; // @synthesize fakeSession=_fakeSession;
@property(retain, nonatomic) FBFakeNBViewControllerProxy *fakeViewControllerProxy; // @synthesize fakeViewControllerProxy=_fakeViewControllerProxy;
@property(retain, nonatomic) FBFakeH5ViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void).cxx_destruct;
- (id)currentSession;
- (id)currentViewControllerProxy;
- (void)updateContext:(id)arg1 params:(id)arg2 appId:(id)arg3;

@end
