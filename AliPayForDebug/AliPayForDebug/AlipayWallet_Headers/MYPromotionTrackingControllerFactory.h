//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MYPromotionTrackingControllerFactory : NSObject
{
    NSMutableDictionary *_trackingControllers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *trackingControllers; // @synthesize trackingControllers=_trackingControllers;
- (void).cxx_destruct;
- (id)trackingControllerForType:(id)arg1 frame:(struct CGRect)arg2 trackingModel:(id)arg3;
- (void)registerTrackingControllerWithType:(id)arg1 controllerName:(id)arg2;
- (id)init;

@end
